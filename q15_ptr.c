//simple sort
#include <stdio.h>

int main(){
    int a, b, c, menorvalor, A, B, C;
    scanf("%d %d %d", &a, &b,&c);
    A =a;
    B = b; 
    C =c;

    while(1){
        if(b < a){
            menorvalor = a;
            a = b;
            b =menorvalor;
        }
        if(c <a){
            menorvalor= a;
            a = c;
            c =menorvalor;
        }
        if(c< b){
            menorvalor=b;
            b = c;
            c= menorvalor;
        }
        printf("%d\n%d\n%d\n\n", a, b, c);
        break;
    }
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}