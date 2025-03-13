// triangulos
#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, maiorvalor;
    scanf("%lf %lf %lf", &A,&B, &C);

    if(B > A){
        maiorvalor = A;
        A = B;
        B =maiorvalor;
    }
    if(C >A){
        maiorvalor= A;
        A = C;
        C =maiorvalor;
    }
    if(C > B){
        maiorvalor=B;
        B = C;
        C= maiorvalor;
    }
    
    if (A >= (B+C)){
        printf("NAO FORMA TRIANGULO\n");
    } 
    else {
        if(pow(A, 2) == (pow(B, 2) + pow(C, 2))){
            printf("TRIANGULO RETANGULO\n");
        }
        else if(pow(A, 2) > (pow(B, 2) + pow(C, 2))){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if(pow(A, 2) < (pow(B, 2)+ pow(C, 2))){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(A == B && B ==C){
            printf("TRIANGULO EQUILATERO\n");
        } else if ((A == B) || (B == C) || (A == C)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}