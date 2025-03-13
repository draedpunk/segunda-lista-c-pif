// s sequency II
#include <stdio.h>

int main() {
    int numerador;
    double s, denominador;
    
    numerador = 1;
    denominador = 1.0;
    s = 1.0;
    
    for (int i = 0; i < 20; i++){
        numerador += 2;
        denominador *= 2;
        
        s += numerador/denominador;
    }
    printf("%.2lf\n", s);
    
 
    return 0;
}