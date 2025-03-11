#include <stdio.h> 

int main() {
    char Estado[3];  
    int CodigoDaCidade;
    char NomeDaCidade[50]; 
    int Populacao;
    float Area;
    float PIB;
    int NumeroDePontosTuristicos;

    char Estado1[3];
    int CodigoDaCidade1;
    char NomeDaCidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int NumeroDePontosTuristicos1;

    printf("CARTA A\n");
    printf("Insira o estado: ");
    scanf("%s", Estado);

    printf("Insira o codigo da cidade: ");
    scanf("%d", &CodigoDaCidade);

    printf("Insira o nome da cidade: ");
    scanf("%s", NomeDaCidade);

    printf("Populacao: ");
    scanf("%d", &Populacao);

    printf("Area: ");
    scanf("%f", &Area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &NumeroDePontosTuristicos);

    

    printf("\nCARTA B\n");
    printf("Insira o estado: ");
    scanf("%s", Estado1);

    printf("Insira o codigo da cidade: ");
    scanf("%d", &CodigoDaCidade1);

    printf("Insira o nome da cidade: ");
    scanf("%s", NomeDaCidade1);

    printf("Populacao: ");
    scanf("%d", &Populacao1);

    printf("Area: ");
    scanf("%f", &Area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &NumeroDePontosTuristicos1);

    printf("\n=== DADOS DA CIDADE A ===\n");
    printf("Estado: %s\n", Estado);
    printf("Codigo da cidade: %d\n", CodigoDaCidade);
    printf("Nome da cidade: %s\n", NomeDaCidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f km²\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Numero de pontos turisticos: %d\n", NumeroDePontosTuristicos);

    printf("\n=== DADOS DA CIDADE B ===\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da cidade: %d\n", CodigoDaCidade1);
    printf("Nome da cidade: %s\n", NomeDaCidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", NumeroDePontosTuristicos1);

    return 0;
}
