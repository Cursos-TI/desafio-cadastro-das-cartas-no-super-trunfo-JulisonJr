#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //Declaração dos dados.
    int codigoCep1, codigoCep2; //Codigo CEP
    int populacao1, populacao2; //População
    int Numpontosturi1, Numpontosturi2; //Número de pontos Turistico
    float PIB1, PIB2; //PIB
    float area1, area2; //Área
    char nome1[20], nome2[20]; //Nome das Cidades.
    float densidadePopulacional1, densidadePopulacional2; //Densidade Populacional
    float PIBporCapital1, PIBporCapital2;//PIB por Capital
    float superPoder1, superPoder2; //Super Poder
    int opcao;//variavel de resposta

    printf("________________________________________\n");
    printf("---------SUPER**TRUNFO-PAISES-----------\n");
    printf("________________________________________\n");
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Entrada de dados.
        //Dados da primeira Carta.
     printf("Dados da primeira Carta:");
     printf("Nome da cidade: ");
     scanf("%19s", nome1);
 
     printf("Área (Km²): ");
     scanf("%f", &area1);
 
     printf("Codigo CEP: ");
     scanf("%d", &codigoCep1);
 
     printf("População: ");
     scanf("%d", &populacao1);
 
     printf("Números de pontos turisticos: ");
     scanf("%d", &Numpontosturi1);
 
     printf("PIB: R$");
     scanf("%f", &PIB1);

        //Dados da segunda Carta.
    printf("Dados da Segunda Carta:");
    printf("Nome da cidade: ");
    scanf("%19s", nome2);

    printf("Área (Km²): ");
    scanf("%f", &area2);

    printf("Codigo CEP: ");
    scanf("%d", &codigoCep2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Números de pontos turisticos: ");
    scanf("%d", &Numpontosturi2);

    printf("PIB: R$");
    scanf("%f", &PIB2);

    // Verifica se a área é diferente de zero para evitar divisão por zero
    if (area1 != 0)
    {
        // Calcula a densidade populacional
        densidadePopulacional1 = (float)populacao1 / area1;

        // Calcula o PIB por capita
        if (populacao1 != 0)
        {
            PIBporCapital1 = PIB1 / (float)populacao1;
        }
        else
        {
            PIBporCapital1 = 0;
        }
    }
    else
    {
        densidadePopulacional1 = 0;
        PIBporCapital1 = 0;
    }

    //Calculo da segunda carta
    if (area2 != 0)
    {
        densidadePopulacional2 = (float)populacao2 / area2;

        if (populacao2 != 0)
        {
            PIBporCapital2 = PIB2 / (float)populacao2;
        }
        else
        {
            PIBporCapital2 = 0;
        }
    }
    else
    {
        densidadePopulacional2 = 0;
        PIBporCapital2 = 0;
    }

    // Cálculo do Super Poder para ambas as cartas
    superPoder1 = (populacao1 + Numpontosturi1 + PIB1 + densidadePopulacional1 + PIBporCapital1) / area1;

    superPoder2 = (populacao2 + Numpontosturi2 + PIB2 + densidadePopulacional2 + PIBporCapital2) / area2;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Saida de dados.
        // Exibição dos resultados
        // Os valores de cada carta.

    printf("### Valores*de*cada*carta!###\n");
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %d\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Números de pontos turisticos: %d\n", Numpontosturi1);
    printf("PIB por Capital: %.2f\n", PIBporCapital1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("Nivel de poder da Carta: %d\n", superPoder1);
    printf("------------------------------\n");
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %d\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Números de pontos turisticos: %d\n", Numpontosturi2);
    printf("PIB por Capital: %.2f\n", PIBporCapital2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("Nivel de poder da Carta: %d\n", superPoder2);
    printf("------------------------------\n");

    // Escolher o que quer comparar das cartas.

    printf("##### MENU*DE*COMPARAÇÃO#####");
    printf("1- Números de pontos turisticos.\n");
    printf("2- PIB.\n");
    printf("3- PIB por Capital.\n");
    printf("4- Densidade Populacional.");
    printf("###Sair###");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        //Para comparar os números de pontos turisticos.
        if (Numpontosturi1 > Numpontosturi2)
        {
            printf("Números de pontos turisticos: %s vence do %s\n", nome1, nome2);
        }
        else if (Numpontosturi2 > Numpontosturi1)
        {
            printf("Números de pontos turisticos: %s vence do %s\n", nome2, nome1);
        }
        else
        {
            printf("Números de pontos turisticos: Empate\n");
        }
        break;

    case 2:
        //Para comparar o PIB.
        if (PIB1 > PIB2)
        {
            printf("PIB: %s vence do %s \n", nome1, nome2);
        }
        else if (PIB2 > PIB1)
        {
            printf("PIB: %s vence do %s \n", nome2, nome1);
        }
        else
        {
            printf("PIB: Empate\n");
        }

        break;

    case 3:
        //Para comparar o PIB por Capital.
        if (PIBporCapital1 > PIBporCapital2)
        {
            printf("PIB por Capita: %s vence do %s \n", nome1, nome2);
        }
        else if (PIBporCapital2 > PIBporCapital1)
        {
            printf("PIB por Capital: %s vence do %s \n", nome2, nome1);
        }
        else
        {
            printf("PIB por Capital: Empate\n");
        }

        break;

    case 4:
        //Para comparar a Densidade Populaciona.(Ops: Aqui a carta que tiver o menor número e a que ganha.)
        if (densidadePopulacional1 < densidadePopulacional2)
        {
            printf("Densidade Populacional: %s vence do %s \n", nome1, nome2);
        }
        else if (densidadePopulacional2 < densidadePopulacional1)
        {
            printf("Densidade Populacional: %s vence do %s \n", nome2, nome1);
        }
        else
        {
            printf("Densidade Populacional: Empate\n");
        }

        break;
    //Caso o cliente não queira comparar as cartas.
    default:
        printf("###SAINDO!###");
        break;
    }

    return 0;
}
