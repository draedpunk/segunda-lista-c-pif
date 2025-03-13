// snack
#include <stdio.h>
 
int main() {
 
    int cod, qtd;
    double total;
    scanf("%d %d", &cod, &qtd);
    
    switch(cod){
        case 1:
        total = (double) qtd * 4.00;
        break;
        case 2:
        total = (double) qtd * 4.50;
        break;
        case 3:
        total = (double) qtd*5.00;
        break;
        case 4:
        total = (double) qtd*2.00;
        break;
        case 5:
        total = (double) qtd* 1.50;
        break;
    }
    printf("Total: R$ %.2lf\n", total);
    
 
    return 0;
}