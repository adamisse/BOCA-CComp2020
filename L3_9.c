#include <stdio.h>
int verificapH(float pH);
int verificaGotaChuvaAcida(float pH);
float porcentagem(float total, float valor);
void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal);

int main(){
    int A, D, T, aux, i;
    int qtd_acido=0, qtd_basico=0, qtd_neutro=0, qtd_chuva_acida=0, qtd_chuva_normal=0;
    float pH, mais_acido=14, mais_basico=0, mais_neutro=7, subtracao, menor_dif=14, porcentagemGotasChuvaNormal, porcentagemGotasChuvaAcida;
    scanf("%d %d %d", &A, &D, &T);
    aux = A*D*T;
    if(aux==0){
        printf("Nenhuma gota foi avaliada");
    }else{
        for(i=0; i<aux; i++){
            scanf("%f", &pH);
            //1)
            if(verificapH(pH)==1){
                qtd_acido++;
            }else if(verificapH(pH)==0){
                qtd_neutro++;
            }else if(verificapH(pH)==2){
                qtd_basico++;
            }
            if(pH>=mais_basico){
                mais_basico=pH;
            }else if(pH<=mais_acido){
                mais_acido=pH;
            }
            //2)
            if(pH>7){
                subtracao = pH-7;
            }else if(pH<7){
                subtracao = 7-pH;
            }else if(pH==7){
                subtracao = 0;
            }
            if(subtracao<menor_dif){
                menor_dif=subtracao;
                mais_neutro=pH;
            }
            //3)
            if(verificaGotaChuvaAcida(pH)==1){
                qtd_chuva_acida++;
            }
        }
        qtd_chuva_normal = aux-qtd_chuva_acida;
        porcentagemGotasChuvaAcida=porcentagem(aux, qtd_chuva_acida);
        porcentagemGotasChuvaNormal= 100-porcentagemGotasChuvaAcida;
        printf("%d %d %d %.2f %.2f %.2f\n", qtd_acido, qtd_basico, qtd_neutro, mais_acido, mais_basico, mais_neutro);
        imprimeResultadosAnalise(porcentagemGotasChuvaAcida,porcentagemGotasChuvaNormal);
    }

    return 0;
}

int verificapH(float pH){
    if(pH>=0 && pH<7){
        return 1;
    }else if(pH==7){
        return 0;
    }else if(pH>7 && pH<=14){
        return 2;
    }
}

int verificaGotaChuvaAcida(float pH){
    if(pH<5.7){
        return 1;
    }else{
        return 0;
    }
}

float porcentagem(float total, float valor){
    return (valor/total)*100;
}

void imprimeResultadosAnalise(float porcentagemGotasChuvaAcida, float porcentagemGotasChuvaNormal){
    if(porcentagemGotasChuvaAcida>=75){
        printf("Chuva acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }else if(porcentagemGotasChuvaNormal>=75){
        printf("Chuva normal %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }else{
        printf("Chuva com indicios de chuva acida %.2f%% %.2f%%", porcentagemGotasChuvaAcida, porcentagemGotasChuvaNormal);
    }
}
