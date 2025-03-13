// taxas
#include <stdio.h>

int main(){
    double salario, taxa;
    scanf("%lf", &salario);

    if(salario <=2000.00){
        printf("Isento\n");
    }
    else if (salario >= 2000.01 && salario <=3000.00){
        taxa = ((salario - 2000.00) * 0.08);
        printf("R$ %.2lf\n", taxa);
    }
    else if(salario >=3000.01 && salario <=4500.00){
        taxa = ((3000.00 - 2000.00) * 0.08) +((salario-3000.00)* 0.18);
        printf("R$ %.2lf\n", taxa);
    } else{
        taxa = ((3000.00 - 2000.00)*0.08) + ((4500.00 - 3000.00)*0.18) + ((salario - 4500.00)*0.28);
        printf("R$ %.2lf\n", taxa);
    }
    return 0;
}