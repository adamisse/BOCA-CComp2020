#include <stdio.h>
struct dados_atleta{
    int id, n1, n2, n3;
    char sex;
};

struct dados_atleta atleta[100][100];

int main(){
    int i=0, d=0;
    int qtd_deleg, id=0, n1=0, n2=0, n3=0, temp[100];
    int m_nota_dm[100], m_nota_am[100][100], m_nota_df[100], m_nota_af[100][100], id_melhor_f[100], id_melhor_m[100]; //maiores notas e delegacoes;
    int p_nota_df[100], p_nota_dm[100], id_pior_f[100], id_pior_m[100];
    int m2_nota_af[100][100], m2_nota_am[100][100], m3_nota_af[100][100], m3_nota_am[100][100], aux1, aux2;
    int del_soma_f[100], del_soma_m[100], campea_f_pontos=0, campea_m_pontos=0, campea_f, campea_m, soma_id[100], aux3;
    int existe_f[100], existe_m[100], existe_df, existe_dm, existe_d;
    char sex;
    scanf("%d", &qtd_deleg);//quantas delegações terei;
    if(qtd_deleg>0){
        existe_d=1;
    }
    for(d=0; d<qtd_deleg; d++){//faz a listagem das delegações;
        m_nota_df[d]=-1;
        m_nota_dm[d]=-1;
        p_nota_dm[d]=1000;
        p_nota_df[d]=1000;
        aux2 = 0;
        aux1 = 0;
        for(i=0; i<1000;i++){
            scanf("%d", &id);
            if(id==-1){
                break;
            }
            scanf(" %c", &sex);
            scanf("%d %d %d", &n1, &n2, &n3);

            atleta[d][i].id = id;
            soma_id[d] += 1;
            atleta[d][i].sex = sex;
            atleta[d][i].n1 = n1;
            atleta[d][i].n2 = n2;
            atleta[d][i].n3 = n3;
            
            if(sex=='F'){
                existe_df=1;
                existe_f[d]=1;
                //soma_id_f[d] += 1;
                if(n1>n2 && n1>n3){//MAIOR NOTA SEGUNDA E TERCEIRA DE CADA ATLETA FEMININO;
                    m_nota_af[d][i] = n1;
                    if(n2>n3){
                        m2_nota_af[d][i] = n2;
                        m3_nota_af[d][i] = n3;
                    }else if(n3>n2){
                        m2_nota_af[d][i] = n3;
                        m3_nota_af[d][i] = n2; 
                    }
                }else if(n2>n1 && n2>n3){
                    m_nota_af[d][i] = n2;
                    if(n1>n3){
                        m2_nota_af[d][i] = n1;
                        m3_nota_af[d][i] = n3;
                    }else if(n3>n1){
                        m2_nota_af[d][i] = n3;
                        m3_nota_af[d][i] = n1; 
                    }
                }else if(n3>n1 && n3>n2){
                    m_nota_af[d][i] = n3;
                    if(n1>n2){
                        m2_nota_af[d][i] = n1;
                        m3_nota_af[d][i] = n2;
                    }else if(n2>n1){
                        m2_nota_af[d][i] = n2;
                        m3_nota_af[d][i] = n1; 
                    }
                }else if(n1==n2 && n1>n3){
                    m_nota_af[d][i] = n1;
                    m2_nota_af[d][i] = n1;
                    m3_nota_af[d][i] = n3;
                }else if(n1==n2 && n1<n3){
                    m_nota_af[d][i] = n3;
                    m2_nota_af[d][i] = n2;
                    m3_nota_af[d][i] = n1;
                }else if(n2==n3 && n2>n1){
                    m_nota_af[d][i] = n2;
                    m2_nota_af[d][i] = n2;
                    m3_nota_af[d][i] = n1;
                }else if(n2==n3 && n2<n1){
                    m_nota_af[d][i] = n1;
                    m2_nota_af[d][i] = n2;
                    m3_nota_af[d][i] = n2;
                }else if(n1==n3 && n1>n2){
                    m_nota_af[d][i] = n1;
                    m2_nota_af[d][i] = n2;
                    m3_nota_af[d][i] = n2;
                }else if(n1==n3 && n1<n2){
                    m_nota_af[d][i] = n2;
                    m2_nota_af[d][i] = n1;
                    m3_nota_af[d][i] = n1;
                }else if(n1==n2 && n2==n3){
                    m_nota_af[d][i] = n1;
                    m2_nota_af[d][i] = n1;
                    m3_nota_af[d][i] = n1;
                }
                
                //
                
                if(m_nota_af[d][i]>m_nota_df[d]){//MAIOR NOTA DA DELEGAÇÃO FEMININA;
                    m_nota_df[d]=m_nota_af[d][i];
                    id_melhor_f[d] = id;
                    aux1 = i;
                }else if(m_nota_af[d][i]==m_nota_df[d]){
                    if(m2_nota_af[d][i]>m2_nota_af[d][aux1]){
                        id_melhor_f[d] = id;
                        aux1 = i;
                    }else if(m2_nota_af[d][i]==m_nota_df[d]){
                        if(m3_nota_af[d][i]>m3_nota_af[d][aux1]){
                            id_melhor_f[d] = id;
                            aux1 = i;
                        }else if(m3_nota_af[d][i]==m_nota_df[d]){
                            if(id<id_melhor_f[d]){
                                id_melhor_f[d]=id;
                                aux1 = i;
                            }
                        }   
                    }
                }
                
                //
                del_soma_f[d] += m_nota_af[d][i]; //ADICIONANDO A PONTUAÇÃO DA DELEGAÇÃO;
                //
                
                if(m_nota_af[d][i]<p_nota_df[d]){//PIOR NOTA DA DELEGAÇÃO FEMININA;
                    p_nota_df[d]=m_nota_af[d][i];
                    id_pior_f[d] = id;
                    aux2 = i;
                }else if(m_nota_af[d][i]==p_nota_dm[d]){
                    if(m2_nota_af[d][i]<m2_nota_af[d][aux2]){
                        id_pior_f[d]=id;
                        aux2 = i;
                    }else if(m2_nota_af[d][i]==m2_nota_af[d][aux2]){
                        if(m3_nota_af[d][i]<m3_nota_af[d][aux2]){
                            id_pior_f[d]=id;
                            aux2 = i;
                        }else if(m3_nota_af[d][i]==m3_nota_af[d][aux2]){
                            if(id>id_pior_f[d]){
                                id_pior_f[d]=id;
                                aux2 = i;
                            }
                        }
                    }
                }
            }
            
            if(sex=='M'){//MAIOR NOTA SEGUNDA E TERCEIRA DE CADA ATLETA MASCULINO;
                existe_dm=1;
                existe_m[d]=1;
                //soma_id_m[d];
                if(n1>n2 && n1>n3){
                    m_nota_am[d][i] = n1;
                    if(n2>n3){
                        m2_nota_am[d][i] = n2;
                        m3_nota_am[d][i] = n3;
                    }else if(n3>n2){
                        m2_nota_am[d][i] = n3;
                        m3_nota_am[d][i] = n2; 
                    }
                }else if(n2>n1 && n2>n3){
                    m_nota_am[d][i] = n2;
                    if(n1>n3){
                        m2_nota_am[d][i] = n1;
                        m3_nota_am[d][i] = n3;
                    }else if(n3>n1){
                        m2_nota_am[d][i] = n3;
                        m3_nota_am[d][i] = n1; 
                    }
                }else if(n3>n1 && n3>n2){
                    m_nota_am[d][i] = n3;
                    if(n1>n2){
                        m2_nota_am[d][i] = n1;
                        m3_nota_am[d][i] = n2;
                    }else if(n2>n1){
                        m2_nota_am[d][i] = n2;
                        m3_nota_am[d][i] = n1; 
                    }
                }else if(n1==n2 && n1>n3){
                    m_nota_am[d][i] = n1;
                    m2_nota_am[d][i] = n1;
                    m3_nota_am[d][i] = n3;
                }else if(n1==n2 && n1<n3){
                    m_nota_am[d][i] = n3;
                    m2_nota_am[d][i] = n2;
                    m3_nota_am[d][i] = n1;
                }else if(n2==n3 && n2>n1){
                    m_nota_am[d][i] = n2;
                    m2_nota_am[d][i] = n2;
                    m3_nota_am[d][i] = n1;
                }else if(n2==n3 && n2<n1){
                    m_nota_am[d][i] = n1;
                    m2_nota_am[d][i] = n2;
                    m3_nota_am[d][i] = n2;
                }else if(n1==n3 && n1>n2){
                    m_nota_am[d][i] = n1;
                    m2_nota_am[d][i] = n2;
                    m3_nota_am[d][i] = n2;
                }else if(n1==n3 && n1<n2){
                    m_nota_am[d][i] = n2;
                    m2_nota_am[d][i] = n1;
                    m3_nota_am[d][i] = n1;
                }else if(n1==n2 && n2==n3){
                    m_nota_am[d][i] = n1;
                    m2_nota_am[d][i] = n1;
                    m3_nota_am[d][i] = n1;
                }
                
                //
                del_soma_m[d] += m_nota_am[d][i];
                //
                
                if(m_nota_am[d][i]>m_nota_dm[d]){//MAIOR NOTA DA DELEGAÇÃO MASCULINA;
                    m_nota_dm[d]=m_nota_am[d][i];
                    id_melhor_m[d] = id;
                    aux1 = i;
                }else if(m_nota_am[d][i]==m_nota_dm[d]){
                    if(m2_nota_am[d][i]>m2_nota_am[d][aux1]){
                        id_melhor_m[d] = id;
                        aux1 = i;
                    }else if(m2_nota_am[d][i]==m_nota_dm[d]){
                        if(m3_nota_am[d][i]>m3_nota_am[d][aux1]){
                            id_melhor_m[d] = id;
                            aux1 = i;
                        }else if(m3_nota_am[d][i]==m_nota_dm[d]){
                            if(id<id_melhor_m[d]){
                                id_melhor_m[d]=id;
                                aux1 = i;
                            }
                        }   
                    }
                }
                
                //
                
                if(m_nota_am[d][i]<p_nota_dm[d]){//PIOR NOTA DA DELEGAÇÃO MASCULINA;
                    p_nota_dm[d]=m_nota_am[d][i];
                    id_pior_m[d] = id;
                    aux2 = i;
                }else if(m_nota_am[d][i]==p_nota_dm[d]){
                    if(m2_nota_am[d][i]<m2_nota_am[d][aux2]){
                        id_pior_m[d]=id;
                        aux2 = i;
                    }else if(m2_nota_am[d][i]==m2_nota_am[d][aux2]){
                        if(m3_nota_am[d][i]<m3_nota_am[d][aux2]){
                            id_pior_m[d]=id;
                            aux2 = i;
                        }else if(m3_nota_am[d][i]==m3_nota_am[d][aux2]){
                            if(id>id_pior_m[d]){
                                id_pior_m[d]=id;
                                aux2 = i;
                            }
                        }
                    }
                }
            }
            
            temp[d]=i;
        }
        if(del_soma_m[d] > campea_m_pontos){
            campea_m_pontos = del_soma_m[d];
            campea_m = d;
            aux3 = soma_id[d];
        }if(del_soma_m[d]==campea_f_pontos){
            if(soma_id[d]<aux3){
                campea_m_pontos = del_soma_m[d];
                campea_m = d;
                aux3 = soma_id[d];
            }
        }
        //
        if(del_soma_f[d] > campea_f_pontos){
            campea_f_pontos = del_soma_f[d];
            campea_f = d;
            aux3 = soma_id[d];
        }else if(del_soma_f[d]==campea_f_pontos){
            if(soma_id[d]<aux3){
                campea_f_pontos = del_soma_f[d];
                campea_f = d;
                aux3 = soma_id[d];
            }
        }//else -> nenhuma
    }
    
    //printf("%d", temp[0]);
    //printf("%d", temp[1]);

    
    for(d=0; d<qtd_deleg; d++){
        //printf("PONTUAÇÃO DA DELEGAÇÃO FEMININA %d FOI: %d \n", d, del_soma_f[d]);
        //printf("PONTUAÇÃO DA DELEGAÇÃO MASCULINA %d FOI: %d \n", d, del_soma_m[d]);
        //printf("MAIOR NOTA DA DELEGACAO FEMININA: %d \n", m_nota_df[d]);
        //printf("PIOR NOTA DA DELEGACAO FEMININA: %d \n", p_nota_df[d]);
        //printf("MAIOR NOTA DA DELEGACAO MASCULINA: %d \n", m_nota_dm[d]);
        //printf("PIOR NOTA DA DELEGACAO MASCULINA: %d \n", p_nota_dm[d]);
        if(existe_m[d]==1 && existe_f[d]==1){
            printf("MELHORES ATLETAS DA DELEGACAO %d\n", d+1);
            printf("MASCULINO: %d FEMININO: %d \n", id_melhor_m[d], id_melhor_f[d]);
            printf("PIORES ATLETAS DA DELEGACAO %d\n", d+1);
            printf("MASCULINO: %d FEMININO: %d \n\n", id_pior_m[d], id_pior_f[d]);
        }else if(existe_m[d]==1 && existe_f[d] !=1){
            printf("MELHORES ATLETAS DA DELEGACAO %d\n", d+1);
            printf("MASCULINO: %d FEMININO: Nenhum \n", id_melhor_m[d]);
            printf("PIORES ATLETAS DA DELEGACAO %d\n", d+1);
            printf("MASCULINO: %d FEMININO: Nenhum \n\n", id_pior_m[d]);
        }else if(existe_m[d]!=1 && existe_f[d] == 1){
            printf("MELHORES ATLETAS DA DELEGACAO %d\n", d+1);
            printf("MASCULINO: Nenhum FEMININO: %d \n", id_melhor_f[d]);
            printf("PIORES ATLETAS DA DELEGACAO %d\n", d+1);
            printf("MASCULINO: Nenhum FEMININO: %d \n\n", id_pior_f[d]);
        }else if(existe_m[d]!=1 && existe_f[d] !=1){
            printf("MELHORES ATLETAS DA DELEGACAO %d\n", d+1);
            printf("MASCULINO: Nenhum FEMININO: Nenhum \n");
            printf("PIORES ATLETAS DA DELEGACAO %d\n", d+1);
            printf("MASCULINO: Nenhum FEMININO: Nenhum \n\n");
        }
        /*for(int i=0; i<temp[d]+1; i++){
            if(atleta[d][i].sex=='F'){
                //printf(" ATLETA MULHER: -> MAIOR NOTA DO ATLETA %d FOI: %d \n", i, m_nota_af[d][i]);
            }else if(atleta[d][i].sex=='M'){
                //printf(" ATLETA HOMEM: -> MAIOR NOTA DO ATLETA %d FOI: %d \n", i, m_nota_am[d][i]);
                //printf(" ATLETA HOMEM: -> 2MAIOR NOTA DO ATLETA %d FOI: %d \n", i, m2_nota_am[d][i]);
                //printf(" ATLETA HOMEM: -> 3MAIOR NOTA DO ATLETA %d FOI: %d \n", i, m3_nota_am[d][i]);
            }
        }
        //printf("\n MAIOR NOTA DA DELEGAÇÃO %d MASCULINA: %d \n", d, m_nota_dm[d]);
        //printf("\n MAIOR NOTA DA DELEGAÇÃO %d FEMININA FOI O ATLETA : %d \n", d, m_nota_df[d]);
        */
    }
    if(existe_d==1){
        if(existe_dm==1 && existe_df==1){
            printf("DELEGACAO CAMPEA: \n");
            printf("MASCULINO: %d FEMININO: %d", campea_m+1, campea_f+1);
        }else if(existe_dm==1 && existe_df==0){
            printf("DELEGACAO CAMPEA: \n");
            printf("MASCULINO: %d FEMININO: Nenhum", campea_m+1);
        }else if(existe_dm==1 && existe_df==0){
            printf("DELEGACAO CAMPEA: \n");
            printf("MASCULINO: Nenhum FEMININO: %d", campea_f+1);
        }else if(existe_dm==0 && existe_df==0){
            printf("DELEGACAO CAMPEA: \n");
            printf("MASCULINO: Nenhum FEMININO: Nenhum");
        }
    }else{
        printf("DELEGACAO CAMPEA: \n");
        printf("MASCULINO: Nenhum FEMININO: Nenhum");
    }

    return 0;
}