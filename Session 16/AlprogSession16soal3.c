#include <stdio.h>

struct automobile{
    int year;
    char model[8];
    int engine_power;
    float weight;
};

int main(){
    struct automobile cars[5];

    for(int i = 0; i < 5; i++){
        printf("Input tahun untuk mobil ke-%d: ", i + 1);
        scanf("%d", &cars[i].year);
        printf("Input model untuk mobil ke-%d: ", i + 1);
        scanf("%s", cars[i].model);
        printf("Input tenaga mesin untuk mobil ke-%d: ", i + 1);
        scanf("%d", &cars[i].engine_power);
        printf("Input berat untuk mobil ke-%d: ", i + 1);
        scanf("%f", &cars[i].weight);
    }

    for(int i = 0; i < 5; i++){
        printf("Mobil %d :\n", i + 1);
        printf("Tahun : %d\n", cars[i].year);
        printf("Model : %s\n", cars[i].model);
        printf("Tenaga mesin : %d\n", cars[i].engine_power);
        printf("Berat : %.2f\n", cars[i].weight);
        printf("\n");
    }

    return 0;
}
