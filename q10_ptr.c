//types of fuel

#include <stdio.h>

int main(){
    int item, gasolina, alcool, diesel;
    gasolina = 0;
    alcool = 0;
    diesel = 0;

    while(1){
        scanf("%d", &item);
        switch (item) {
            case 1:
                alcool++;
                break;
            case 2:
                gasolina++;
                break;
            case 3:
                diesel++;
                break;
            case 4:
                printf("MUITO OBRIGADO\n");
                printf("Alcool: %d\n", alcool);
                printf("Gasolina: %d\n", gasolina);
                printf("Diesel: %d\n", diesel);
                return 0;
            default:
                break;
        }
    }
    return 0;
}