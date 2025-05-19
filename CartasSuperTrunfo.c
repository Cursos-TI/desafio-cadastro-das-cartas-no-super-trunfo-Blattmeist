#include <stdio.h>

void Vencedora(int resultado) {
    // Verifica o valor do resultado
    if (resultado == 1) {
        // Se o resultado for 1
        printf("Carta 1\n");
    } else if (resultado == 0) {
        // Se o resultado for 0
        printf("Carta 2\n");
    } else {
        printf("Empate\n");
    }
}

int main() {

    //daqui prabaixo declaro todas as variavéis
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    char estado1, estado2;      
    char codigo1[5], codigo2[5];
    char cidade1[10], cidade2[10];

    //Aqui eu faço as regras de if e else


    printf("Super Trunfo de Cidades - Desafio Mestre\n");
    printf("\n");
    printf("Cadastre duas cartas para começar!\n");
    printf("\n");
    printf("Registre as cartas nesse modelo apresentado embaixo.\n");
    printf("\n");
    printf("Estado: C \n");
    printf("Código: C01\n");
    printf("Cidade: Fortal\n");
    printf("População: 400\n");
    printf("Área: 20\n");
    printf("PIB: 800\n");
    printf("Pontos Turísticos: 10\n");
    printf("\n");

    // Cadastro da Carta 1
    
    printf("Informe as informações da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf(" %s", codigo1);
    printf("Cidade: ");
    scanf(" %s", cidade1);
    printf("População: ");
    scanf(" %d", &populacao1);
    printf("Área: ");
    scanf(" %f", &area1);
    printf("PIB: ");
    scanf(" %f", &pib1);
    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos1);

    // Cadastro da Carta 2
    printf("\nInforme as informações da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf(" %s", codigo2);
    printf("Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área: ");
    scanf(" %f", &area2);
    printf("PIB: ");
    scanf(" %f", &pib2);
    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos2);

   
    //cálculo de Densidade e renda percapita

    float Densidade1 = (float) populacao1 / area1;
    float Densidade2 = (float) populacao2 / area2;
    float rp1 = pib1 / (float) populacao1;
    float rp2 = pib2 / (float) populacao2;

    //Aqui faço o calculo de super poder

    float super1 = (float) populacao1 + area1 + pib1 + pontos1 + rp1 + Densidade1;
    float super2 = (float) populacao2 + area2 + pib2 + pontos2 + rp2 + Densidade2;


    // Aqui exibo todas informações das cartas registradas

    printf("\nInformações da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d Mil pessoas.\n", populacao1);
    printf("Área: %.2f Km².\n", area1);
    printf("PIB: %.2f Milhões de reais.\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f Mil Pessoas por Km².\n", Densidade1);
    printf("Pib per capta: %.2f Mil reais por pessoa.\n", rp1);
    printf("\n");
    printf("A carta %s tem super poder de valor: %.2f\n", codigo1, super1 );


    printf("\nInformações da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d Mil pessoas.\n", populacao2);
    printf("Área: %.2f Km².\n", area2);
    printf("PIB: %.2f Milhões de reais.\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f Mil Pessoas por Km²\n", Densidade2);
    printf("PIB Per Capta: %.2f Mil reais por pessoa.\n", rp2);
    printf("\n");
    printf("A carta %s tem super poder de valor: %.2f\n", codigo2, super2);

    //Aqui eu faço as comparações

    int pop = (populacao1 == populacao2) ? -1 : (populacao1 > populacao2);
    int area = (area1 == area2) ? -1: (area1 > area2);
    int pib = (pib1 == pib2) ? -1: (pib1 > pib2);
    int pontos = (pontos1 == pontos2) ? -1: (pontos1 > pontos2);
    int dens = (Densidade1 == Densidade2) ? -1: Densidade1 < Densidade2;
    int rp = (rp1 == rp2) ? -1: (rp1 > rp2);
    int super = (super1 > super2) ? -1: (super1 > super2);


    //Aqui eu exibo os resultados

    printf("\n");
    printf("Vamos ver quais cartas foram as vencedoras!\n");
    printf("\n");
    printf ("no quesito População a vencedora é:");
    Vencedora(pop);
    printf ("no quesito Área a vencedora é:");
    Vencedora(area);
    printf ("no quesito PIB a vencedora é:");
    Vencedora(pib);
    printf ("no quesito Pontos Túristicos a vencedora é:");
    Vencedora(pontos);
    printf ("no quesito Densidade Populacional a vencedora é:");
    Vencedora(dens);
    printf ("no quesito PIB Per Capta a vencedora é:");
    Vencedora(rp);
    printf ("no quesito Super Poder a vencedora é:");
    Vencedora(super);
    

    printf ("\n");
    printf("Muito obrigado!\n");
    return 0;
    
}
