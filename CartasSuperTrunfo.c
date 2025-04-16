#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
int main ()
{
   //var
   char estado      [30];
   char estado2     [30];
   
   char CodCarta    [5];
   char CodCarta2   [5];
   
   char NomeCidade  [30];
   char NomeCidade2 [30];
   
   int Populacao;
   int Populacao2;
   
   float AreaKm;
   float AreaKm2;
   
   float PIB;
   float PIB2;
   
   int NuPontoTuristico;
   int NuPontoTuristico2;

   //caregamento manual dos dados carta 1
   printf ("Carta 1: \n");

   printf ("Digite nome do Estado: \n");
   scanf ("%s", estado);

   printf ("Digite o Codigo da Carta: \n");
   scanf ("%s", CodCarta);

   printf ("Digite o Nome da Cidade: \n");
   scanf ("%s", NomeCidade);

   printf ("Digite tamanho da Poulacao: \n");
   scanf ("%i", &Populacao);

   printf ("Digite a Area em Km: \n");
   scanf ("%f", &AreaKm);

   printf ("Digite o PIB: \n");
   scanf ("%f", &PIB);

   printf ("Digite o Numero de pontos Turisticos: \n");
   scanf ("%i", &NuPontoTuristico);

   //caregamento manual dos dados carta 2
   printf ("Carta 2: \n");

   printf ("Digite nome do Estado: \n");
   scanf ("%s", estado2);
 
   printf ("Digite o Codigo da Carta: \n");
   scanf ("%s", CodCarta2);
 
   printf ("Digite o Nome da Cidade: \n");
   scanf ("%s", NomeCidade2);
 
   printf ("Digite tamanho da Poulacao: \n");
   scanf ("%i", &Populacao2);
 
   printf ("Digite a Area em Km: \n");
   scanf ("%f", &AreaKm2);
 
   printf ("Digite o PIB: \n");
   scanf ("%f", &PIB2);
 
   printf ("Digite o Numero de pontos Turisticos: \n");
   scanf ("%i", &NuPontoTuristico2);
 
   

   //mostrando carta 1
   printf ("Carta 1: \n");
   printf ("Nome do estado  : %s  \n", estado);
   printf ("Codigo da carta : %s  \n", CodCarta);
   printf ("Nome da Cidade  : %s  \n", NomeCidade);
   printf ("Populacao       : %i  \n", Populacao);
   printf ("Area em KM      : %.2f Km \n", AreaKm);
   printf ("PIB             : %.2f  \n", PIB);
   printf ("Numero de pontos truristicos: %i  \n", NuPontoTuristico); 
   
   
   //mostrando carta 2
   printf ("Carta 2: \n");
   printf ("Nome do estado  : %s  \n", estado2);
   printf ("Codigo da carta : %s  \n", CodCarta2);
   printf ("Nome da Cidade  : %s  \n", NomeCidade2);
   printf ("Populacao       : %i  \n", Populacao2);
   printf ("Area em KM      : %.2f Km \n", AreaKm2);
   printf ("PIB             : %.2f  \n", PIB2);
   printf ("Numero de pontos truristicos: %i  \n", NuPontoTuristico2); 
   

   return 0;
}