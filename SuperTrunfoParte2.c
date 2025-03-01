#include<stdio.h>

int main(){
    //Carta 01                      carta 02
    char nomeCidade1[20] ="Tobias", nomeCidade2[20] = "Salvador";
    int populacao1 = 50000,         populacao2 = 100000;
    float areaKm1 = 266.2,          areaKm2 = 300.5;
    float pib1 = 52000,             pib2 = 52000;
    int pontosTuristicos1 = 25,     pontosTuristicos2 = 15;

    float densidade1 = populacao1/areaKm1;
    float densidade2 = populacao2/areaKm2;
    

    int atributo1 ,atributo2;

    printf("Escolha um atributo para comparar:\n");
    printf("1. Informações das cartas\n");
    printf("2. População\n");
    printf("3. PIB\n");
    printf("4. Área\n");
    printf("5. Quantidade de pontos turisticos\n");
    printf("6. Densidade populacional\n");
    printf("Digite sua escolha (1-6): \n");
    scanf("%d", &atributo1);

    switch (atributo1) {
        case 1: // informações das cartas 
            printf(">>>Informações da carta 01<<<\n");//Carta 01
            printf("Nome da cidade: %s\n", nomeCidade1);
            printf("População: %d\n", populacao1);
            printf("PIP: %.2f\n", pib1);
            printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos1);
            printf("Densidade populacional: %.2f\n", densidade1);

            printf(">>>Informações da carta 02<<<\n");//Carta 02
            printf("Nome da cidade: %s\n", nomeCidade2);
            printf("População: %d\n", populacao2);
            printf("PIP: %.2f\n", pib2);
            printf("Quantidade de pontos turisticos: %d\n", pontosTuristicos2);
            printf("Densidade populacional: %.2f\n", densidade2);


            break;
        case 2: // Comparar população
            printf("Escolha mais um atributo para comparar:\n");
            printf("1. PIB\n");
            printf("2. Área\n");
            printf("3. Quantidade de pontos turisticos\n");
            printf("4. Densidade populacional\n");
            printf("Digite sua escolha (1-4): \n");
            scanf("%d", &atributo2);

            switch (atributo2){
                case 1:
                    printf("Comparando PIB:\n");
                    if (pib1 > pib2) {
                        printf("%s com %.2f tem um PIB maior que %s com %.2f.\n", nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                        printf("%s venceu!\n",nomeCidade1);

                    } else if (pib1 <pib2) {
                        printf("%s com %.2f tem um PIB menor que %s com %.2f.\n",nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm o mesmo PIB.\n", nomeCidade1 ,nomeCidade2);
                    }
                    break;
                case 2: // Comparar área
                    printf("Comparando área:\n");
                    if (areaKm1 > areaKm2) {
                        printf("%s com %.2f km2 tem uma área maior que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (areaKm1 < areaKm2) {
                        printf("%s com %.2f km2 tem uma área menor que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma área.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                case 3: // comparar quantidade de pontos turisticos
                    printf("Comparando quantidade de pontos turisticos:\n");
                    if (pontosTuristicos1>pontosTuristicos2 ) {
                        printf("%s com %d tem mais pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (pontosTuristicos1 < pontosTuristicos2) {
                        printf("%s com %d tem menos pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma quantidade de pontos turisticos.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                case 4: // Comparar densidade populacional
                    printf("Comparando densidade populacional:\n");
                    if (densidade1>densidade2) {
                        printf("%s com %.2f tem uma densidade populacional maior que %s com %.2f .\n", nomeCidade1,densidade1  ,nomeCidade2 ,densidade2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else if (densidade1 < densidade2) {
                        printf("%s com %.2f tem uma densidade populacional menor que %s com %.2f .\n", nomeCidade1 ,densidade1 ,nomeCidade2 ,densidade2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else {
                        printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                default:
                    printf("Atributo inválido!\n");
                break;
            }
            printf("Comparando população:\n");
            if (populacao1>populacao2 ) {
                printf("%s com %d tem uma população maior que %s com %d.\n", nomeCidade1,populacao1  ,nomeCidade2 ,populacao2);
                printf("%s venceu!\n",nomeCidade1);
            } else if (populacao1 < populacao2) {
                printf("%s com %d tem uma população menor que %s com %d.\n", nomeCidade1 ,populacao1 ,nomeCidade2 ,populacao2);
                printf("%s venceu!\n",nomeCidade2);
            } else {
                printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
            }
            break;
            
        case 3: 
            printf("Escolha mais um atributo para comparar:\n");
            printf("1. População\n");
            printf("2. Área\n");
            printf("3. Quantidade de pontos turisticos\n");
            printf("4. Densidade populacional\n");
            printf("Digite sua escolha (1-4): \n");
            scanf("%d", &atributo2);

            switch (atributo2){
                case 1: // comparar populaçao
                    printf("Comparando população:\n");
                    if (populacao1>populacao2 ) {
                        printf("%s com %d tem uma população maior que %s com %d.\n", nomeCidade1,populacao1  ,nomeCidade2 ,populacao2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (populacao1 < populacao2) {
                        printf("%s com %d tem uma população menor que %s com %d.\n", nomeCidade1 ,populacao1 ,nomeCidade2 ,populacao2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                case 2: // Comparar área
                    printf("Comparando área:\n");
                    if (areaKm1 > areaKm2) {
                        printf("%s com %.2f km2 tem uma área maior que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (areaKm1 < areaKm2) {
                        printf("%s com %.2f km2 tem uma área menor que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma área.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                case 3: // comparar quantidade de pontos turisticos
                    printf("Comparando quantidade de pontos turisticos:\n");
                    if (pontosTuristicos1>pontosTuristicos2 ) {
                        printf("%s com %d tem mais pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (pontosTuristicos1 < pontosTuristicos2) {
                        printf("%s com %d tem menos pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma quantidade de pontos turisticos.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                case 4: // Comparar densidade populacional
                    printf("Comparando densidade populacional:\n");
                    if (densidade1>densidade2) {
                        printf("%s com %.2f tem uma densidade populacional maior que %s com %.2f .\n", nomeCidade1,densidade1  ,nomeCidade2 ,densidade2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else if (densidade1 < densidade2) {
                        printf("%s com %.2f tem uma densidade populacional menor que %s com %.2f .\n", nomeCidade1 ,densidade1 ,nomeCidade2 ,densidade2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else {
                        printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                default:
                    printf("Atributo inválido!\n");
                break;
        }
            printf("Comparando PIB:\n");// Comparar PIB
            if (pib1 > pib2) {
                printf("%s com %.2f tem um PIB maior que %s com %.2f.\n", nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                printf("%s venceu!\n",nomeCidade1);
            } else if (pib1 <pib2) {
                printf("%s com %.2f tem um PIB menor que %s com %.2f.\n",nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                printf("%s venceu!\n",nomeCidade2);
            } else {
                printf("%s e %s têm o mesmo PIB.\n", nomeCidade1 ,nomeCidade2);
            }
            break;
        case 4: // Comparar área
        printf("Escolha mais um atributo para comparar:\n");
        printf("1. População\n");
        printf("2. PIB\n");
        printf("3. Quantidade de pontos turisticos\n");
        printf("4. Densidade populacional\n");
        printf("Digite sua escolha (1-4): \n");
        scanf("%d", &atributo2);

        switch (atributo2){
            case 1: // comparar populaçao
                printf("Comparando população:\n");
                if (populacao1>populacao2 ) {
                    printf("%s com %d tem uma população maior que %s com %d.\n", nomeCidade1,populacao1  ,nomeCidade2 ,populacao2);
                    printf("%s venceu!\n",nomeCidade1);
                } else if (populacao1 < populacao2) {
                    printf("%s com %d tem uma população menor que %s com %d.\n", nomeCidade1 ,populacao1 ,nomeCidade2 ,populacao2);
                    printf("%s venceu!\n",nomeCidade2);
                } else {
                    printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
                }
                break;
            case 2: // Comparar PIB
                printf("Comparando PIB:\n");
                if (pib1 > pib2) {
                    printf("%s com %.2f tem um PIB maior que %s com %.2f.\n", nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                    printf("%s venceu!\n",nomeCidade1);
                } else if (pib1 <pib2) {
                    printf("%s com %.2f tem um PIB menor que %s com %.2f.\n",nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                    printf("%s venceu!\n",nomeCidade2);
                } else {
                    printf("%s e %s têm o mesmo PIB.\n", nomeCidade1 ,nomeCidade2);
                }
                break;
            case 3: // comparar quantidade de pontos turisticos
                printf("Comparando quantidade de pontos turisticos:\n");
                if (pontosTuristicos1>pontosTuristicos2 ) {
                    printf("%s com %d tem mais pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                    printf("%s venceu!\n",nomeCidade1);
                } else if (pontosTuristicos1 < pontosTuristicos2) {
                    printf("%s com %d tem menos pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                    printf("%s venceu!\n",nomeCidade2);
                } else {
                    printf("%s e %s têm a mesma quantidade de pontos turisticos.\n", nomeCidade1, nomeCidade2);
                }
                break;
            case 4: // Comparar densidade populacional
                printf("Comparando densidade populacional:\n");
                if (densidade1>densidade2) {
                    printf("%s com %.2f tem uma densidade populacional maior que %s com %.2f .\n", nomeCidade1,densidade1  ,nomeCidade2 ,densidade2);
                    printf("%s venceu!\n",nomeCidade2);
                } else if (densidade1 < densidade2) {
                    printf("%s com %.2f tem uma densidade populacional menor que %s com %.2f .\n", nomeCidade1 ,densidade1 ,nomeCidade2 ,densidade2);
                    printf("%s venceu!\n",nomeCidade1);
                } else {
                    printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
                }
                break;
            default:
                printf("Atributo inválido!\n");
            break;
        }
            printf("Comparando área:\n");
            if (areaKm1 > areaKm2) {
                printf("%s com %.2f km2 tem uma área maior que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                printf("%s venceu!\n",nomeCidade1);
            } else if (areaKm1 < areaKm2) {
                printf("%s com %.2f km2 tem uma área menor que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                printf("%s venceu!\n",nomeCidade2);
            } else {
                printf("%s e %s têm a mesma área.\n", nomeCidade1, nomeCidade2);
            }
            break;
        case 5: // comparar quantidade de pontos turisticos
            printf("Escolha mais um atributo para comparar:\n");
            printf("1. População\n");
            printf("2. PIB\n");
            printf("3. Area\n");
            printf("4. Densidade populacional\n");
            printf("Digite sua escolha (1-4): ");
            scanf("%d", &atributo2);

            switch (atributo2){
                case 1: // comparar populaçao
                    printf("Comparando população:\n");
                    if (populacao1>populacao2 ) {
                        printf("%s com %d tem uma população maior que %s com %d.\n", nomeCidade1,populacao1  ,nomeCidade2 ,populacao2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (populacao1 < populacao2) {
                        printf("%s com %d tem uma população menor que %s com %d.\n", nomeCidade1 ,populacao1 ,nomeCidade2 ,populacao2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                case 2: // Comparar PIB
                    printf("Comparando PIB:\n");
                    if (pib1 > pib2) {
                        printf("%s com %.2f tem um PIB maior que %s com %.2f.\n", nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (pib1 <pib2) {
                        printf("%s com %.2f tem um PIB menor que %s com %.2f.\n",nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm o mesmo PIB.\n", nomeCidade1 ,nomeCidade2);
                    }
                    break;
                case 3: //comparar area
                    printf("Comparando área:\n");
                    if (areaKm1 > areaKm2) {
                        printf("%s com %.2f km2 tem uma área maior que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (areaKm1 < areaKm2) {
                        printf("%s com %.2f km2 tem uma área menor que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma área.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                case 4: // Comparar densidade populacional
                    printf("Comparando densidade populacional:\n");
                    if (densidade1>densidade2) {
                        printf("%s com %.2f tem uma densidade populacional maior que %s com %.2f .\n", nomeCidade1,densidade1  ,nomeCidade2 ,densidade2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else if (densidade1 < densidade2) {
                        printf("%s com %.2f tem uma densidade populacional menor que %s com %.2f .\n", nomeCidade1 ,densidade1 ,nomeCidade2 ,densidade2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else {
                        printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                default:
                    printf("Atributo inválido!\n");
                break;
            }
            printf("Comparando quantidade de pontos turisticos:\n");
            if (pontosTuristicos1>pontosTuristicos2 ) {
                printf("%s com %d tem mais pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                printf("%s venceu!\n",nomeCidade1);
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("%s com %d tem menos pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                printf("%s venceu!\n",nomeCidade2);
            } else {
                printf("%s e %s têm a mesma quantidade de pontos turisticos.\n", nomeCidade1, nomeCidade2);
            }
            break;
        case 6: // Comparar densidade populacional
            printf("Escolha mais um atributo para comparar:\n");
            printf("1. População\n");
            printf("2. PIB\n");
            printf("3. Area\n");
            printf("4. Quantidade de pontos turisticos \n");
            printf("Digite sua escolha (1-4): \n");
            scanf("%d", &atributo2);

            switch (atributo2){
                case 1: // comparar populaçao
                    printf("Comparando população:\n");
                    if (populacao1>populacao2 ) {
                        printf("%s com %d tem uma população maior que %s com %d.\n", nomeCidade1,populacao1  ,nomeCidade2 ,populacao2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (populacao1 < populacao2) {
                        printf("%s com %d tem uma população menor que %s com %d.\n", nomeCidade1 ,populacao1 ,nomeCidade2 ,populacao2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                case 2: // Comparar PIB
                    printf("Comparando PIB:\n");
                    if (pib1 > pib2) {
                        printf("%s com %.2f tem um PIB maior que %s com %.2f.\n", nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (pib1 <pib2) {
                        printf("%s com %.2f tem um PIB menor que %s com %.2f.\n",nomeCidade1 ,pib1 ,nomeCidade2 ,pib2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm o mesmo PIB.\n", nomeCidade1 ,nomeCidade2);
                    }
                    break;
                case 3: //comparar area
                    printf("Comparando área:\n");
                    if (areaKm1 > areaKm2) {
                        printf("%s com %.2f km2 tem uma área maior que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (areaKm1 < areaKm2) {
                        printf("%s com %.2f km2 tem uma área menor que %s com %.2f km2.\n", nomeCidade1 ,areaKm1 ,nomeCidade2 ,areaKm2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma área.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                case 4: //pontos turisticos
                    printf("Comparando quantidade de pontos turisticos:\n");
                    if (pontosTuristicos1>pontosTuristicos2 ) {
                        printf("%s com %d tem mais pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                        printf("%s venceu!\n",nomeCidade1);
                    } else if (pontosTuristicos1 < pontosTuristicos2) {
                        printf("%s com %d tem menos pontos turisticos que %s com %d.\n", nomeCidade1 ,pontosTuristicos1 ,nomeCidade2 ,pontosTuristicos2);
                        printf("%s venceu!\n",nomeCidade2);
                    } else {
                        printf("%s e %s têm a mesma quantidade de pontos turisticos.\n", nomeCidade1, nomeCidade2);
                    }
                    break;
                default:
                    printf("Atributo inválido!\n");
                break;
            }
            printf("Comparando densidade populacional:\n");
            if (densidade1>densidade2) {
                printf("%s com %.2f tem uma densidade populacional maior que %s com %.2f .\n", nomeCidade1,densidade1  ,nomeCidade2 ,densidade2);
                printf("%s venceu!\n",nomeCidade2);
            } else if (densidade1 < densidade2) {
                printf("%s com %.2f tem uma densidade populacional menor que %s com %.2f .\n", nomeCidade1 ,densidade1 ,nomeCidade2 ,densidade2);
                printf("%s venceu!\n",nomeCidade1);
            } else {
                printf("%s e %s têm a mesma população.\n", nomeCidade1, nomeCidade2);
            }
            break;
        default:
            printf("Atributo inválido!\n");
            break;
    }
    float soma1, soma2;
    soma1 = populacao1 + areaKm1 + pontosTuristicos1 + densidade1 + pib1;
    soma2 = populacao2 + areaKm2 + pontosTuristicos2 + densidade2 + pib2;
    
    if (soma1 > soma2)
    {
        printf("%s Ganho com %.2f pontos no total\n",nomeCidade1 ,soma1);
        printf("É %s Perdeu com %.2f pontos no total\n",nomeCidade2 ,soma2);
    }
    else if (soma1 < soma2)
    {
        printf("%s Ganho com %.2f pontos no total\n",nomeCidade2 ,soma2);
        printf("É %s Perdeu com %.2f pontos no total\n",nomeCidade1 ,soma1);
    }
    else
    {
        printf("%s é %s empataram com %.2f pontos no total\n",nomeCidade1 ,nomeCidade2 ,soma1);
    }
    
    return 0;
}