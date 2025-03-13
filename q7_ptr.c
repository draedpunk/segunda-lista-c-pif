// ddd
#include <stdio.h>
 
int main() {
    int ddd[8] = {61, 71, 11, 21, 32, 19, 27, 31};
    char estados[8][20] = {
        "Brasilia",
        "Salvador",
        "Sao Paulo",
        "Rio de Janeiro",
        "Juiz de Fora",
        "Campinas",
        "Vitoria",
        "Belo Horizonte",
    };                  

    int dddfornecido;
    scanf("%d", &dddfornecido);
    
    int tamanhoddd = sizeof(ddd)/sizeof(ddd[0]);
        
    for(int i = 0; i < tamanhoddd; i++){
        if(ddd[i] == dddfornecido){
            printf("%s\n", estados[i]);
            return 0;
        }
    }

    printf("DDD nao cadastrado\n");
 
    return 0;
}