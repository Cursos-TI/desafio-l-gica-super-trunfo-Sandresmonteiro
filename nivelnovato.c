 #include <stdio.h>

int main(){

   //carta 1
   char estado1[4], nomecidade1[50], codigocidade1[10];
   int populacao1, pontosturisticos1;
   float areaKm1, pib1;
   float pibpercapita1,densidadepopulaciona1;

    //carta 2
   char estado2[4], nomecidade2[50], codigocidade2[50];
   int populacao2, pontosturisticos2;
   float areaKm2, pib2;
   float pibpercapita2,densidadepopulaciona2;

   // dados informacionais da carta 1
printf("== Dados da Carta 1==\n");

printf("Digite estado1: Ex (SP)\n");
scanf(" %s", estado1);

printf("Qual a cidade1: \n");
scanf(" %49[^\n]", nomecidade1);

printf("Codigo da Cidade1: Ex A02\n");
scanf(" %s", codigocidade1);

printf("População:\n");
scanf (" %d",&populacao1);

printf("Arekm² populaçaõ 1: \n");
scanf(" %f", &areaKm1);

printf("Pib 1:\n");
scanf("%f", &pib1);

printf("Pontos turisticos 1:\n");
scanf(" %d", &pontosturisticos1);

// calculando carta 1

densidadepopulaciona1 = (float) populacao1/areaKm1;
pibpercapita1 = (pib1/populacao1);

printf("\n");

//leitura das caratas 1

printf("==Informaçoes dos Dados 1==\n");
printf("\n\n");
printf("O estado 1: %s\n",estado1);
printf("O nome da Cidade 1 é: %s \n", nomecidade1);
printf("A População 1 é: %d\n", populacao1);
printf("A Arekm² 1 : %.2f\n", areaKm1);
printf("O pib1 1 : %.2f\n", pib1);
printf("O ponto turistico 1 : %d\n" , pontosturisticos1);
printf("Densidade populacional 1:%.2f\n", densidadepopulaciona1);
printf("Pibercapital 1: %.2f\n", pibpercapita1);


// dados da carta 2

printf("== Dados da Carta 2==\n");

printf("Digite estado2: Ex (SP)\n");
scanf(" %s", estado2);

printf("Qual a cidade2: \n");
scanf(" %49[^\n]", nomecidade2);

printf("Codigo da Cidade2: Ex A02\n");
scanf(" %s", codigocidade2);

printf("População2:\n");
scanf (" %d",&populacao2);

printf("Arekm² população2: \n");
scanf(" %f", &areaKm2);

printf("Pib 2:\n");
scanf("%f", &pib2);

printf("Pontos turisticos 2:\n");
scanf(" %d", &pontosturisticos2);

printf("\n");
// calculando cartas 2
densidadepopulaciona2 = (float) populacao2/areaKm2;
pibpercapita2 = (pib2/populacao2);

// leitura das cartas 2

printf("==Informaçoes dos Dados 2==\n");
printf("\n\n");
printf("O estado é: %s\n",estado2);
printf("O nome da Cidade é: %s \n", nomecidade2);
printf("A População é: %d\n", populacao2);
printf("A Arekm² é: %.2f\n", areaKm2);
printf("O pib 2 é: %.2f\n", pib2);
printf("O ponto turistico é: %d\n" , pontosturisticos2);
printf("Densidade populacional2:%.2f\n", densidadepopulaciona2);
printf("Pibercapital: %.2f\n", pibpercapita2);

// comparando carta Vencedora

printf("=== Qual Carta Vence ===\n");
printf("\n");
if (populacao1 > populacao2)
{
  printf("População 1 Vence:\n");
}
else if (populacao2 > populacao1){

   printf("População 2 Vence:\n");
}else{
   printf(" empate:\n");
}
if (areaKm1 > areaKm2)
{
  printf("Arekm² 1 Vence:\n");
}
else if(areaKm2 > areaKm1){
   printf("Arekma² 2 vence:\n");
}else{
   printf("empate:\n");
}

if (pib1 > pib2)
{
  printf("Pib 1 vence:\n");
}
else if (pib2 > pib1){
   printf("Pib 2 vence:\n");
}else{
   printf("Empate\n");
}
if (pontosturisticos1 > pontosturisticos2)
{
  printf("Pontos turisticos 1 vence:\n");
}
else if (pontosturisticos2 > pontosturisticos1){
   printf("Pontos turisticos 2 vence:\n");
}else{
   printf("empate:\n");
}

if (densidadepopulaciona1 < densidadepopulaciona2)
{
  printf("Densidade populacional 1 vence\n");
}
else if (densidadepopulaciona2 > densidadepopulaciona1){
   printf("Densidade populacional 2 vence\n");
}else{
   printf("Empate:\n");
}
if (pibpercapita1 > pibpercapita2)
{
   printf("Pibcapital 1 vence\n");
}
else if(pibpercapita2 > pibpercapita1){
   printf("Pibercapital 2 vence\n");

}else{
   printf("Empate:\n");
}

return 0;



}