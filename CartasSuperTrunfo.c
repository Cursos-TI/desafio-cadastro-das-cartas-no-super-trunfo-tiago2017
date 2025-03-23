

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>

int main(){

// váriaveis utilizadas no jogo   

char estado [20], codigo [5], cidade [20];
int populacao, pontosturisticos;
float area, PIB;

    printf("CADASTRE AS CARTAS DE SUPERTRUNFO A SEGUIR\n");  //CABEÇALHO 
    printf("\n"); //espaço

// inicia aqui um questionário com os dados inseridos pelo usuário


    printf("AVISO: Não utilize espaços nos nomes das cidades e use o ponto no lugar da virgula para as quantidades.\n"); 
    printf("\n"); //espaço  

    printf("Insira o nome do estado: \n");  
    scanf("%s", &estado);



    printf("Digite o código da carta: \n");
    scanf("%s", &codigo);



    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);



    printf("OS DADOS A SEGUIR PERTENCEM A CIDADE \n"); //CABEÇALHO
 

    printf("Digite a quantidade da população  : \n");
    scanf("%i", &populacao);



    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%i", &pontosturisticos);



    printf("Digite o tamanho da área : \n");
    scanf("%f", &area);



    printf("Digite o valor do PIB: \n");
    scanf("%f", &PIB);



// aqui termina os questionário


    printf("DADOS INSERIDOS. SEGUE A CARTA CADASTRADA: \n"); //CABEÇALHO
    printf("\n"); //espaço 

    printf("\n"); //espaço

// aqui segurirá a impressão dos dados cadastrados

    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População: %i hab \n", populacao);
    printf("Pontos turísticos: %i \n", pontosturisticos);
    printf("Área (km²): %.2f  \n", area);
    printf("PIB (R$ bilhões): %.2f \n", PIB);

    return 0;
}
