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

   float DensidadePoluacional;
   float DensidadePoluacional2;

   float pibPcapital;
   float pibPcapital2;

   float SuperPoder;
   float SuperPoder2;

   int resultado;

   //iniciando var
   
   Populacao  = 0 ;
   Populacao2 = 0 ;
   
   AreaKm  = 0 ;
   AreaKm2 = 0 ;
   
   PIB  = 0;
   PIB2 = 0;
   
   NuPontoTuristico  = 0;
   NuPontoTuristico2 = 0;

   DensidadePoluacional  = 0;
   DensidadePoluacional2 = 0;

   pibPcapital  = 0;
   pibPcapital2 = 0;

   SuperPoder = 0;
   SuperPoder2 = 0;



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
   
   //Calculo de densidade populacional e pib para carta 1
   DensidadePoluacional = (float) Populacao / AreaKm;
   pibPcapital = (float) PIB / Populacao;
   printf ("Densidade Populacinal : %.2f \n", DensidadePoluacional) ;
   printf ("PIB per Capital : %.2f  \n", pibPcapital);

   

   
   //mostrando carta 2
   printf ("Carta 2: \n");
   printf ("Nome do estado  : %s  \n", estado2);
   printf ("Codigo da carta : %s  \n", CodCarta2);
   printf ("Nome da Cidade  : %s  \n", NomeCidade2);
   printf ("Populacao       : %i  \n", Populacao2);
   printf ("Area em KM      : %.2f Km \n", AreaKm2);
   printf ("PIB             : %.2f  \n", PIB2);
   printf ("Numero de pontos truristicos: %i  \n", NuPontoTuristico2); 
   
   //Calculo de densidade populacional e pib para carta 2
   DensidadePoluacional2 = (float) Populacao2 / AreaKm2;
   pibPcapital2 = (float) PIB2 / Populacao2;
   printf ("Densidade Populacinal : %.2f  \n", DensidadePoluacional2);
   printf ("PIB per Capital : %.2f  \n", pibPcapital2);


   //Batalha de Cartas  0 ganha carta1  1 ganha carta 2 
   printf ("\n");
   printf ("Batalha de cartas   0 Carta 1  1 Carta 2  :\n");

   if (Populacao > Populacao2){
    printf ("Carta 1 Ganhou Populacao  : %.i  \n", (Populacao));
   } else {
    printf ("Carta 2 Ganhou Populacao  : %.i  \n", (Populacao2));
   }

   if (AreaKm > AreaKm2){   
    printf ("Carta 1 Ganhou Area em KM   : %.2f \n", (AreaKm));
   } else {
    printf ("Carta 2 Ganhou Area em KM   : %.2f \n", (AreaKm2));
   }

   if (PIB > PIB2){   
    printf ("Carta 1 Ganhou PIB          : %.2f  \n", (PIB));
   } else {
    printf ("Carta 2 Ganhou PIB          : %.2f  \n", (PIB2));
   }
   
   if (NuPontoTuristico > NuPontoTuristico2){  
    printf ("Carta 1 Ganhou Numero de pontos truristicos: %i  \n", (NuPontoTuristico));
   } else {
    printf ("Carta 2 Ganhou Numero de pontos truristicos: %i  \n", (NuPontoTuristico2));
   }

   if (DensidadePoluacional > DensidadePoluacional2){     
    printf ("Carta 1 Ganhou Densidade Populacinal : %.2f \n", (DensidadePoluacional));
   } else {
    printf ("Carta 2 Ganhou Densidade Populacinal : %.2f \n", (DensidadePoluacional2));
   }
   
   if (pibPcapital > pibPcapital2){   
    printf ("Carta 1 Ganhou PIB per Capital : %.2f  \n", (pibPcapital));
   } else {
    printf ("Carta 2 Ganhou PIB per Capital : %.2f  \n", (pibPcapital2));
   } 
 
   //super
    SuperPoder = Populacao+AreaKm+PIB+NuPontoTuristico+pibPcapital/DensidadePoluacional;

    SuperPoder2 = Populacao2+AreaKm2+PIB2+NuPontoTuristico2+pibPcapital2/DensidadePoluacional2;
    
   if (SuperPoder > SuperPoder2){   
    printf ("Carta 1 Ganhou SuperPoder : %.2f  \n", (SuperPoder));
   } else {
    printf ("Carta 2 Ganhou SuperPoder : %.2f  \n", (SuperPoder2));
   }


   return 0;
}