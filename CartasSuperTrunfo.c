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
    int codigoCep;
    int populacao;
    int Numpontosturi;
    float PIB;
    float area;
    char nome[20];

    printf("________________________________________\n");
    printf("---------SUPER**TRUNFO-PAISES-----------\n");
    printf("________________________________________\n");
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Entrada de dados.
    printf("Nome da cidade: ");
    scanf("%19s", nome);

    printf("Área (Km): ");
    scanf("%f", &area);

    printf("Codigo CEP: ");
    scanf("%d", &codigoCep);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Números de pontos turisticos: ");
    scanf("%d", &Numpontosturi);

    printf("PIB: R$");
    scanf("%f", &PIB);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Saida de dados.
    printf("\nDados da Cidade\n");
    printf("Nome: %s\n", nome);
    printf("Área: %.2f Km\n", area);
    printf("Codigo CEP: %d\n", codigoCep);
    printf("População: %d\n", populacao);
    printf("Números de pontos turisticos: %d\n", Numpontosturi);
    printf("PIB: R$%.2f\n", PIB);

    return 0;
}
