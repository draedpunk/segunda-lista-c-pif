// population increase
#include <stdio.h>

int main() {
    int casos, pa, pb, anos;
    double grA, grB;

    scanf("%d", &casos);

    for (int i = 0; i < casos; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &grA, &grB);

        grA = grA / 100.0;
        grB = grB / 100.0;

        anos = 0;

        while (pa <= pb) {
            pa += (int)(pa * grA);
            pb += (int)(pb * grB);
            anos++;

            if (anos > 100) {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }
    }

    return 0;
}
