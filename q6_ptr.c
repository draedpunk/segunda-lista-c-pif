// horas jogadas
#include <stdio.h>
 
int main() {
 
    int inicio, fim, duracao;
    scanf("%d %d", &inicio, &fim);
    
    if (fim <= inicio){
        duracao = 24 - ((fim - inicio) * (-1));
      printf("O JOGO DUROU %d HORA(S)\n", duracao);
    } else{
        duracao = fim - inicio;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    
    return 0;
}