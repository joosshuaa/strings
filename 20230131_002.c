#include <stdio.h>
#include <string.h>

#define N 5

void printCarInformation(char carModels[N][20], float fuelConsumption[N]){
    float litersPer1000km;
    printf("Modelos de carros e consumo de combustivel:\n");
    for (int i = 0; i < N; i++) {
        litersPer1000km = 1000 / fuelConsumption[i];
        printf("Modelo: %s | Consumo: %.2f km/l | %.2f l/1000km\n", carModels[i], fuelConsumption[i], litersPer1000km);
    }
}

int main(){
    char carModels[N][20];
    float fuelConsumption[N];
    int mostEconomicIndex = 0;

    printf("Por favor, insira os modelos de carros e o consumo de combustivel:\n");
    for (int i = 0; i < N; i++) {
        printf("Informacoes do carro %d:\n", i + 1);
        printf("Modelo: ");
        scanf("%s", carModels[i]);
        printf("Consumo de combustivel (km/l): ");
        scanf("%f", &fuelConsumption[i]);

        if (fuelConsumption[i] > fuelConsumption[mostEconomicIndex]) {
            mostEconomicIndex = i;
        }
    }

    printf("\n");
    printCarInformation(carModels, fuelConsumption);

    printf("\n");
    printf("O carro mais economico e o %s com consumo de %.2f km/l.\n", carModels[mostEconomicIndex], fuelConsumption[mostEconomicIndex]);

    return 0;
}
