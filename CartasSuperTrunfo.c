#include <stdio.h>
#include <string.h>

int main(){

    char estado_1, estado_2;
    char codigo_1[20];
    char codigo_2[20];
    char nome_cidade_1[50];
    char nome_cidade_2[50];
    int populacao_1, populacao_2, num_pontos_turisticos_1, num_pontos_turisticos_2;
    float area_1, area_2, pib_1, pib_2;


    printf("------------------------------------------\n");
    printf("                SUPER TRUNFO              \n");
    printf("------------------------------------------\n");

    printf("\n");

    printf("------------------------------------------\n");
    printf("          CADASTRE SUAS CARTAS:           \n");
    printf("                 CARTA 1                  \n");
    printf("------------------------------------------\n");

    printf("\n"); 

    printf("- Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    printf("DIGITE O ESTADO: \n");
    scanf("%c", &estado_1);

    printf("- Codigo da Carta: A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03). \n");
    printf("DIGITE O CODIGO DA CARTA: \n");
    scanf("%s", &codigo_1);

    getchar();

    printf("DIGITE O NOME DA CIDADE: \n");
    fgets(nome_cidade_1, 50, stdin);
    nome_cidade_1[strcspn(nome_cidade_1,"\n")] =0;

    printf("DIGITE A POPULACAO: \n");
    scanf("%d", &populacao_1);

    printf("DIGITE A AREA: \n");
    scanf("%f", &area_1); 

    printf("DIGITE O PIB: \n");
    scanf("%f", &pib_1);

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &num_pontos_turisticos_1);

    printf("------------------------------------------\n");
    printf("          CADASTRE SUAS CARTAS:           \n");
    printf("                 CARTA 2                  \n");
    printf("------------------------------------------\n");

    printf("\n"); 

    printf("- Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). \n");
    printf("DIGITE O ESTADO: \n");
    scanf(" %c", &estado_2);

    printf("- Codigo da Carta: A letra do estado seguida de um numero de 01 a 04 (ex: A01, B03). \n");
    printf("DIGITE O CODIGO: \n");
    scanf("%s", &codigo_2);

    getchar();

    printf("DIGITE O NOME DA CIDADE: \n");
    fgets(nome_cidade_2, 50, stdin);
    nome_cidade_2[strcspn(nome_cidade_2,"\n")] = 0;

    printf("DIGITE A POPULACAO: \n");
    scanf("%d", &populacao_2);

    printf("DIGITE A AREA: \n");
    scanf("%f", &area_2); 

    printf("DIGITE O PIB: \n");
    scanf("%f", &pib_2);

    printf("DIGITE O NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &num_pontos_turisticos_2);

    printf("\n"); 

    printf("---------------------------------------------------------\n");
    printf("                        CARTA 1                          \n");
    printf("---------------------------------------------------------\n");
    printf("            ESTADO: %c\n", estado_1);
    printf("            CODIGO: %s\n", codigo_1);
    printf("            NOME DA CIDADE: %s\n", nome_cidade_1);
    printf("            POPULACAO: %d\n", populacao_1);
    printf("            AREA: %.2f\n", area_1);
    printf("            PIB: %.2f\n", pib_1);
    printf("            NUMERO DE PONTOS TURISTICOS: %d\n", num_pontos_turisticos_1);
    printf("---------------------------------------------------------\n");

    printf("\n"); 

    printf("---------------------------------------------------------\n");
    printf("                         CARTA 2                         \n");
    printf("---------------------------------------------------------\n");
    printf("            ESTADO: %c\n", estado_2);
    printf("            CODIGO: %s\n", codigo_2);
    printf("            NOME DA CIDADE: %s\n", nome_cidade_2);
    printf("            POPULACAO: %d\n", populacao_2);
    printf("            AREA: %.2f\n", area_2);
    printf("            PIB: %.2f\n", pib_2);
    printf("            NUMERO DE PONTOS TURISTICOS: %d\n ", num_pontos_turisticos_2);
    printf("--------------------------------------------------------\n");
    
    return 0;
}