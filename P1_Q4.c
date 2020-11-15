#include <stdio.h>

int main(){
    int h1, m1, s1, h2, m2, s2;
    scanf("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);
    
    if((h1>=0 && h1 <=23) && (h2>=0 && h2 <=23)&&
    (m1>=0 && m1 <=60) && (m2>=0 && m2 <=60) && 
    (s1>=0 && s1 <=60) && (s2>=0 && s2 <=60)){//restringe algarismos;

        if((h1>h2) || (h1==h2 && m1>m2) || (h1==h2 && m1==m2 && s1>s2)){
            printf("RESP:%d",((h1+m1+s1)/10)%10);
        }else if((h2>h1) || (h2==h1 && m2>m1) || (h2==h1 && m2==m1 && s2>s1)){
            printf("RESP:%d",((h2+m2+s2)/10)%10);
        }else if(h1==h2 && m1==m2 && s1==s2){//caso sejam iguais;
            printf("IGUAIS");
        }

    }
    
    return 0;
}
