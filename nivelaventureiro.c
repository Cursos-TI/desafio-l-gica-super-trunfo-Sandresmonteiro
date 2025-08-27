#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomePais1[50], nomePais2[50];
    int populaCao1, populaCao2, Pontosturisticos1, pontosTuristicos2, escolha;
    float areaKm1, areaKm2, Pib1, Pib2;

    // Carta 1
    printf("=== Digite as informações do País 1 ===\n");
    printf("Nome País: ");
    scanf(" %49[^\n]", nomePais1);
    printf("População: ");
    scanf("%d", &populaCao1);
    printf("Área km²: ");
    scanf("%f", &areaKm1);
    printf("PIB: ");
    scanf("%f", &Pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &Pontosturisticos1);

    // Carta 2
    printf("\n=== Digite as informações do País 2 ===\n");
    printf("Nome País: ");
    scanf(" %49[^\n]", nomePais2);
    printf("População: ");
    scanf("%d", &populaCao2);
    printf("Área km²: ");
    scanf("%f", &areaKm2);
    printf("PIB: ");
    scanf("%f", &Pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Escolha do atributo
    printf("\nEscolha um atributo (1=População, 2=Área, 3=PIB, 4=Pontos Turísticos): ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            if (populaCao1 > populaCao2)
                printf("%s vence pela População!\n", nomePais1);
            else if (populaCao2 > populaCao1)
                printf("%s vence pela População!\n", nomePais2);
            else
                printf("Empate na População!\n");
            break;
        case 2:
            if (areaKm1 > areaKm2)
                printf("%s vence pela Área!\n", nomePais1);
            else if (areaKm2 > areaKm1)
                printf("%s vence pela Área!\n", nomePais2);
            else
                printf("Empate na Área!\n");
            break;
        case 3:
            if (Pib1 > Pib2)
                printf("%s vence pelo PIB!\n", nomePais1);
            else if (Pib2 > Pib1)
                printf("%s vence pelo PIB!\n", nomePais2);
            else
                printf("Empate no PIB!\n");
            break;
        case 4:
            if (Pontosturisticos1 > pontosTuristicos2)
                printf("%s vence pelos Pontos Turísticos!\n", nomePais1);
            else if (pontosTuristicos2 > Pontosturisticos1)
                printf("%s vence pelos Pontos Turísticos!\n", nomePais2);
            else
                printf("Empate nos Pontos Turísticos!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
