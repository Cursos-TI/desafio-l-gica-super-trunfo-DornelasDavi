#include <stdio.h>

int main() { 
    // Declaração das variáveis para armazenar as informações da primeira carta
    char estado[4]; 
    char codigodacarta[4];
    char nomedacidade[50];
    int populacao, pontosturisticos;
    float area, pib, densidade, PIBpercapita;

    // Declaração das variáveis para armazenar as informações da segunda carta
    char estado2[4]; 
    char codigodacarta2[4];
    char nomedacidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidade2, PIBpercapita2;
    
    printf("Cadastro de Cartas do Jogo Super Trunfo (cidades) \n");
    printf("\n");

    // Cadastro da primeira carta
    printf("Digite o Nome do Estado (Uma letra de 'A' a 'H' representando um estado): \n");
    scanf("%s", estado);
    printf("Digite o Código da Carta (A letra do estado seguida de um número de 01 a 04, ex: A01, B03): \n");
    scanf("%s", codigodacarta);
    printf("Digite o Nome da Cidade (Apenas o primeiro nome, ex: Rio de Janeiro -> Rio): \n");
    scanf("%s", nomedacidade);
    printf("Digite o Número de Habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area);
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos);
    
    // Cálculo da densidade populacional e PIB per capita da Primeira Carta
    densidade = (float) populacao / area;
    PIBpercapita = (float) (pib * 1000000000) / populacao;

    // Cadastro da segunda carta
    printf("Cadastre a Sua Segunda Carta: \n");
    printf("\n");
    printf("Digite o Nome do Estado (Uma letra de 'A' a 'H' representando um estado): \n");
    scanf("%s", estado2);
    printf("Digite o Código da Carta (A letra do estado seguida de um número de 01 a 04, ex: A01, B03): \n");
    scanf("%s", codigodacarta2);
    printf("Digite o Nome da Cidade (Apenas o primeiro nome, ex: Rio de Janeiro -> Rio): \n");
    scanf("%s", nomedacidade2);
    printf("Digite o Número de Habitantes: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosturisticos2);
    printf(" \n");

    // Cálculo da densidade populacional e PIB per capita da Segunda Carta
    densidade2 = (float) populacao2 / area2;
    PIBpercapita2 = (float) (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    float super_poder1 = populacao + area + pib + pontosturisticos + PIBpercapita + (1.0 / densidade);
    float super_poder2 = populacao2 + area2 + pib2 + pontosturisticos2 + PIBpercapita2 + (1.0 / densidade2);

    
    // Exibição das informações da primeira carta
    printf("Carta 1 \n");
    printf("\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita);
    printf("Super Poder da Carta 1: %.2f\n", super_poder1);
    printf("\n");
    
    // Exibição das informações da segunda carta
    printf("Carta 2 \n");
    printf("\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBpercapita2);
    printf("Super Poder da Carta 2: %.2f\n", super_poder2);
    printf("\n");
    
    
    // Comparação das cartas com if e else

    
    printf("Comparação das cartas\n");
    // Comparação das cartas por População
    printf("Carta 1 - %s (%s): %d \n", nomedacidade, estado, populacao);
    printf("Carta 2 - %s (%s): %d \n", nomedacidade2, estado2, populacao2);
    if (populacao > populacao2){
    printf("Carta 1 (População - (%s)) venceu!\n", nomedacidade);
    } else{
    printf("Carta 2 (População - (%s)) venceu!\n", nomedacidade2);
    }

    // Comparação por Pontos Turísticos
    printf("Carta 1 - %s (%s): %d \n", nomedacidade, estado, pontosturisticos); 
    printf("Carta 2 - %s (%s): %d \n", nomedacidade2, estado2, pontosturisticos2);
    if (pontosturisticos > pontosturisticos2){
    printf("Carta 1 (Pontos Turísticos - (%s)) venceu!\n", nomedacidade);
    } else{
    printf("Carta 2 (Pontos Turísticos - (%s)) venceu!\n", nomedacidade2);
    }

    // Comparação por Área
    printf("Carta 1 - %s (%s): %.2f \n", nomedacidade, estado, area); 
    printf("Carta 2 - %s (%s): %.2f \n", nomedacidade2, estado2, area2);
    if (area > area2){
    printf("Carta 1 (Área - (%s)) venceu!\n", nomedacidade);
    } else{
    printf("Carta 2 (Área - (%s)) venceu!\n", nomedacidade2);
    }

    // Comparação por PIB
    printf("Carta 1 - %s (%s): %.2f \n", nomedacidade, estado, pib); 
    printf("Carta 2 - %s (%s): %.2f \n", nomedacidade2, estado2, pib2);
    if (pib > pib2){
    printf("Carta 1 (PIB - (%s)) venceu!\n", nomedacidade);
    } else{
    printf("Carta 2 (PIB - (%s)) venceu!\n", nomedacidade2);
    }

    // Comparação por Densidade Populacional
    printf("Carta 1 - %s (%s): %.2f \n", nomedacidade, estado, densidade); 
    printf("Carta 2 - %s (%s): %.2f \n", nomedacidade2, estado2, densidade2);
    if (densidade > densidade2){
    printf("Carta 1 (Densidade Populacional - (%s)) venceu!\n", nomedacidade);
    } else{
    printf("Carta 2 (Densidade Populacional - (%s)) venceu!\n", nomedacidade2);
    }

    // Comparação por PIB per capita
    printf("Carta 1 - %s (%s): %.2f \n", nomedacidade, estado, PIBpercapita); 
    printf("Carta 2 - %s (%s): %.2f \n", nomedacidade2, estado2, PIBpercapita2);
    if (PIBpercapita > PIBpercapita2){
    printf("Carta 1 (PIB per capita - (%s)) venceu!\n", nomedacidade);
    } else{
    printf("Carta 2 (PIB per capita - (%s)) venceu!\n", nomedacidade2);
    }

    // Comparação por Super poder
    printf("Carta 1 - %s (%s): %.2f \n", nomedacidade, estado, super_poder1); 
    printf("Carta 2 - %s (%s): %.2f \n", nomedacidade2, estado2, super_poder2);
    if (super_poder1 > super_poder2){
    printf("Carta 1 (Super Poder - (%s)) venceu!\n", nomedacidade);
    } else{
    printf("Carta 2 (Super Poder - (%s) ) venceu!\n", nomedacidade2);
    }
    
return 0;
}

