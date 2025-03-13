// even or odd
#include <stdio.h>
 
int main() {
 
    int qtd, N;
    
    scanf("%d", &qtd);
    
    for (int i = 0; i < qtd; i++){
        scanf("%d", &N);
        
        if(N == 0){
            printf("NULL\n");
        } else {
            if(N % 2 == 0) {
                if(N < 0){
                    printf("EVEN NEGATIVE\n");
                } else {
                    printf("EVEN POSITIVE\n");
                }
            } else {
                if (N < 0){
                    printf("ODD NEGATIVE\n");
                } else {
                    printf("ODD POSITIVE\n");
                }
            }
            
        }
    }
 
    return 0;
}