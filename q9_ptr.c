// fixed password

#include <stdio.h>

int main(){

    while(1) {
        int senhacorreta, senhafornecida, acertou;
        senhacorreta = 2002;
        acertou =  0;
        scanf("%d", &senhafornecida);

        if (senhafornecida != senhacorreta){
            printf("Senha Invalida\n");
        } else {
            printf("Acesso Permitido\n");
            acertou = 1;
            break;
        }
    
    }
    return 0;
}