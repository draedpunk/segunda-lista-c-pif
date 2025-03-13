//bank notes and coins

#include <stdio.h>

int main(){
    double notas[6]= {100.00, 50.00, 20.00,10.00, 5.00, 2.00};
    double moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    double valor,valortirado;
    int tamanhonotas, tamanhomoedas, qtdnotas, qtdmoedas;

    scanf("%lf", &valor);
    
    valor += 0.000000001;
    
    printf("NOTAS:\n");
    tamanhonotas = sizeof(notas)/sizeof(notas[0]);
    for (int i=0; i <tamanhonotas; i++){
        qtdnotas = valor/notas[i];
        printf("%d nota(s) de R$ %.2f\n", qtdnotas, notas[i]);
        valortirado = qtdnotas * notas[i];
        valor -= valortirado;
    }

    printf("MOEDAS:\n");
    tamanhomoedas = sizeof(moedas)/sizeof(moedas[0]);
    for(int i =0; i<tamanhomoedas; i++){
        qtdmoedas = valor/moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtdmoedas, moedas[i]);
        valortirado = qtdmoedas * moedas[i];
        valor -= valortirado;
    }
    return 0;
}