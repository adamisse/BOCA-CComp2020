#include <stdio.h>

int main(){
    char l1, l2, l3, traco, n1, n2, n3, n4;
    scanf("%c%c%c%c%c%c%c%c", &l1, &l2, &l3, &traco, &n1, &n2, &n3, &n4);
    if(traco=='-'){
        if(((l1>='a' && l1<='z') || (l1>='A' && l1<='Z')) && 
        ((l2>='a' && l2<='z') || (l2>='A' && l2<='Z')) 
        && ((l3>='a' && l3<='z') || (l3>='A' && l3<='Z')) && 
        ((n1>='0' && n1<='9') && (n2>='0' && n2<='9') && (n3>='0' && n3<='9') && (n4>='0' && n4<='9'))){//tudo valido
            printf("Codigo valido!");
        }else if((((l1<'a' || l1>'z') && (l1<'A' || l1>'Z')) || ((l2<'a' || l2>'z') && (l2<'A' || l2>'Z')) || 
        ((l3<'a' || l3>'z') && (l3<'A' || l3>'Z'))) && (n1<'0' || n1>'9' || n2<'0' || n2>'9' || n3<'0' || n3>'9' || n4<'0' || n4>'9')){
            printf("Codigo invalido!Problema nas letras e nos numeros!");
        }else if(n1<'0' || n1>'9' || n2<'0' || n2>'9' || n3<'0' || n3>'9' || n4<'0' || n4>'9'){
            printf("Codigo invalido!Problema nos numeros!");
        }else if(((l1<'a' || l1>'z') && (l1<'A' || l1>'Z')) || ((l2<'a' || l2>'z') && (l2<'A' || l2>'Z')) || 
        ((l3<'a' || l3>'z') && (l3<'A' || l3>'Z'))){
            printf("Codigo invalido!Problema nas letras!");

        }
    }
    
    return 0;
}
