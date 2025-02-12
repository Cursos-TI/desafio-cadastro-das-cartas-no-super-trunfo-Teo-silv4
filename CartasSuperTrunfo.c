#include <stdio.h>

int main(){

  char estado[20];
  char codigo [3];//o código vai ser a inicial do Estado seguido pelo numero 01 ao 04 (Exemplo. A01, A02 ,B04).
  char nomeCidade[30];
  int populacao;
  float areaKm;
  float pib;
  int pontosTuristicos;
  
  printf("<<<BEM VINDO>>>\nVOCÊ IRA COMEÇAR INFORMANDO OS DADOS DA CIDADE PARA PODER CADASTRÁ-LA NO JOGO!\n");

  printf("***CADASTRAR CIDADE***\n");

  printf("Informe o Estado: \n");
  scanf("%s",&estado);

  printf("!!!O CÓDIGO VAI SER A INICIAL DO ESTADO SEGUIDO PELO NUMERO 01 ao 04 (Exemplo: A01, A02 ,B04).\nInforme o código: \n");
  scanf("%s",&codigo);

  printf("Informe o nome da cidade: \n");
  scanf("%s",&nomeCidade);


  printf("Qual a população? \n");
  scanf("%d",&populacao);

  printf("Qual a área em KM? \n");
  scanf("%f",&areaKm);

  printf("Informe o PIB: \n");
  scanf("%f",&pib);

  printf("Informe a quantidade de pontos turísticos: \n");
  scanf("%d",&pontosTuristicos);

  printf(">>>Suas informações<<<\n->Carta 01\n");

  printf("Estado: %s\n",estado);
  printf("Seu código: %s\n",codigo);
  printf("Nome da cidade: %s\n",nomeCidade);
  printf("População: %d\n",populacao);
  printf("Área em KM: %.2f\n",areaKm); 
  printf("PIB: %.2f\n",pib);
  printf("Número de pontos turísticos: %d\n",pontosTuristicos);

  //Nivel 2 do desafio
  float pib_per_capita = pib/populacao;
  float densidade = areaKm/populacao;

  printf("PIB per capita: %.2f\n",pib_per_capita);
  printf("Densidade populacional: %.2f\n",densidade);
  
  float poder =(float)populacao+areaKm+pib+pontosTuristicos+pib_per_capita+densidade;
  printf("  *SUPER PODER*\n%.3f\n",poder);
  
  //Para cadastrar outra carta
  char estado2[100];
  char codigo2 [3];
  char nomeCidade2[30];
  int populacao2;
  float areaKm2;
  float pib2;
  int pontosTuristicos2;
  
  
  printf("INFORME OS DADOS DA CIDADE\n");

  printf("***CADASTRAR CIDADE***\n");

  printf("Informe o Estado: \n");
  scanf("%s",&estado2);

  printf("!!!O CÓDIGO VAI SER A INICIAL DO ESTADO SEGUIDO PELO NUMERO 01 ao 04 (Exemplo: A01, A02 ,B04).\nInforme o código: \n");
  scanf("%s",&codigo2);

  printf("Informe o nome da cidade: \n");
  scanf("%s",&nomeCidade2);

  printf("Qual a população? \n");
  scanf("%d",&populacao2);

  printf("Qual a área em KM? \n");
  scanf("%f",&areaKm2);

  printf("Informe o PIB: \n");
  scanf("%f",&pib2);

  printf("Informe a quantidade de pontos turísticos: \n");
  scanf("%d",&pontosTuristicos2);

  printf(">>>Suas informações<<<\n-Carta 02\n");

  printf("Estado: %s\n",estado2);
  printf("Seu código: %s\n",codigo2);
  printf("Nome da cidade: %s\n",nomeCidade2);
  printf("População: %d\n",populacao2);
  printf("Área em KM: %.2f\n",areaKm2); 
  printf("PIB: %.2f\n",pib2);
  printf("Número de pontos turísticos: %d\n",pontosTuristicos2);

  
  float pib_per_capita2 = pib2/populacao2;
  float densidade2 = areaKm2/populacao2;

  printf("PIB per capita: %.2f\n",pib_per_capita2);
  printf("Densidade populacional: %.2f\n",densidade2);

  float poder2 = (float)populacao2+areaKm2+pib2+pontosTuristicos2+pib_per_capita2+densidade2;
  printf("  *SUPER PODER*\n%.3f\n",poder2);

//COMPARAÇÃO DOS DADOS 

  printf("<<<Hora dos Resultados>>>\n");
  printf("Comparando População:\n%d | %d\n",populacao ,populacao2);
  if (populacao > populacao2)
    printf("Cidade de %s tem a maior população com: %d habitantes\n",nomeCidade ,populacao);
  else if (populacao < populacao2)
    printf("Cidade de %s tem a maior população com: %d habitantes\n",nomeCidade2 ,populacao2);
  else
    printf("Empatou\n");
  
  printf("Comparando area em KM:\n%.2f | %.2f\n",areaKm ,areaKm2);
  if (areaKm > areaKm2)
    printf("Cidade de %s tem a maior area em km: %.2f\n",nomeCidade ,areaKm);
  else if (areaKm < areaKm2)
    printf("Cidade de %s tem a maior area em km: %.2f\n",nomeCidade2 ,areaKm2);
  else
    printf("Empatou\n");  

  printf("Comparando PIB:\n%.2f | %.2f\n",pib ,pib2);
  if (pib > pib2)
    printf("Cidade de %s tem o maior PIB: %.2f\n",nomeCidade ,pib);
  else if (pib < pib2)
    printf("Cidade de %s tem a maior PIB: %.2f\n",nomeCidade2 ,pib2);
  else
    printf("Empatou\n");

  printf("Comparando a Quantidade de pontos turisticos:\n%d | %d\n",pontosTuristicos ,pontosTuristicos2);
  if (pontosTuristicos > pontosTuristicos2)
    printf("Cidade de %s tem mais pontos turisticos: %d\n",nomeCidade ,pontosTuristicos);
  else if (pontosTuristicos < pontosTuristicos2)
    printf("Cidade de %s tem mais pontos turisticos: %d\n",nomeCidade2 ,pontosTuristicos2);
  else
    printf("Empatou\n");

  printf("Comparando o PIB per capital:\n%.2f | %.2f\n",pib_per_capita ,pib_per_capita2);
  if (pib_per_capita > pib_per_capita2)
    printf("Cidade de %s tem o mair PIB per capital: %.2f\n",nomeCidade ,pib_per_capita);
  else if (pib_per_capita < pib_per_capita2)
    printf("Cidade de %s tem a maior area em km: %.2f\n",nomeCidade2 ,pib_per_capita2);
  else
    printf("Empatou\n");

  printf("Comparando a densidade Populacional:\n%.2f | %.2f\n",densidade ,densidade2);
  if (densidade < densidade2)
    printf("Cidade de %s tem a menor densidade populacional: %.2f\n",nomeCidade ,densidade);
  else if (densidade > densidade2)
    printf("Cidade de %s tem a menor densidade populacional: %.2f\n",nomeCidade2 ,densidade2);
  else
    printf("Empatou\n");

  //resultado final
  printf("**RESULTADO FINAL**\n");
  if (poder >= poder2)
    printf("A cidade %s ganhou!\n",nomeCidade);
  else
    printf("A cidade %s ganhou\n",nomeCidade2);
  
  
  return 0;
}