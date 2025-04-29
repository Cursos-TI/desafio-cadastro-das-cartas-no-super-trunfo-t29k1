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
   int opisao;
   
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

// Menu Inicial   
   printf ("Selecione a Opisao \n");
   printf (" 1 - Inicia Jogo \n");
   printf (" 2 - Regras Do Jogo \n");
   printf (" 3 - Sair \n");
   scanf ("%i", &opisao);

//switch do menu
   switch (opisao)
{
case 1:
       //caregamento manual dos dados carta 1
   printf ("Iniciando Jogo: \n");
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
   printf ("PIB per Capital : %.2f  \n\n\n", pibPcapital2);

//menu de Batalha
   printf ("Escolha Qual Atributo Que quer usar para a Batalha\n");
   printf (" 1 -Populacao\n");
   printf (" 2 -Area em Km\n");
   printf (" 3 -PIB\n");
   printf (" 4 -Numero de pontos Turisticos\n");
   printf (" 5 -Densidade Demografica\n");
   scanf ("%i", &opisao);


//Switch da Batalha   
switch (opisao)
{
case 1:   
    if (Populacao > Populacao2)
    {
      printf("Carta 1 Ganho :%s \n",NomeCidade);
      printf("Carta 1 Ganhou Com :%i \n",Populacao);        
    } else if (Populacao < Populacao2)
    {
      printf("Carta 2 Ganho :%s \n",NomeCidade2);
      printf("Carta 2 Ganhou Com :%i \n",Populacao2);        
    } else if (Populacao = Populacao2)
    {
     printf("As Cartas Empato :%s - %s \n",NomeCidade,NomeCidade2);
     printf("As Cartas Empato :%i - %i \n",Populacao,Populacao2); 
    }   
    break;
    case 2:
    if (AreaKm > AreaKm2)
    {
      printf("Carta 1 Ganho :%s \n",NomeCidade);
      printf("Carta 1 Ganhou Com :%.2f \n",AreaKm);        
    } else if (AreaKm < AreaKm2)
    {
      printf("Carta 2 Ganho :%s \n",NomeCidade2);
      printf("Carta 2 Ganhou Com :%.2f \n",AreaKm2);        
    } else if (AreaKm = AreaKm2)
    {
     printf("As Cartas Empato :%s - %s \n",NomeCidade,NomeCidade2);
     printf("As Cartas Empato :%.2f - %.2f \n",AreaKm,AreaKm2); 
    }   
    break;
    case 3:
    if (PIB > PIB2)
    {
      printf("Carta 1 Ganho :%s \n",NomeCidade);
      printf("Carta 1 Ganhou Com :%.2f \n",PIB);        
    } else if (PIB < PIB2)
    {
      printf("Carta 2 Ganho :%s \n",NomeCidade2);
      printf("Carta 2 Ganhou Com :%.2f \n",PIB2);        
    } else if (PIB = PIB2)
    {
     printf("As Cartas Empato :%s - %s \n",NomeCidade,NomeCidade2);
     printf("As Cartas Empato :%.2f - %.2f \n",PIB,PIB2);
    }    
    break;
    case 4:
    if (NuPontoTuristico > NuPontoTuristico2)
    {
      printf("Carta 1 Ganho :%s \n",NomeCidade);
      printf("Carta 1 Ganhou Com :%i \n",NuPontoTuristico);        
    } else if (NuPontoTuristico < NuPontoTuristico2)
    {
      printf("Carta 2 Ganho :%s \n",NomeCidade2);
      printf("Carta 2 Ganhou Com :%i \n",NuPontoTuristico2);        
    } else if (NuPontoTuristico = NuPontoTuristico2) 
    {
     printf("As Cartas Empato :%s - %s \n",NomeCidade,NomeCidade2);
     printf("As Cartas Empato :%i - %i \n",NuPontoTuristico,NuPontoTuristico2); 
    }   
    break;
    case 5:
    if (DensidadePoluacional < DensidadePoluacional2)
    {
      printf("Carta 1 Ganho :%s \n",NomeCidade);
      printf("Carta 1 Ganhou Com :%.2f \n",DensidadePoluacional);        
    } else if (DensidadePoluacional > DensidadePoluacional2)
    {
      printf("Carta 2 Ganho :%s \n",NomeCidade2);
      printf("Carta 2 Ganhou Com :%.2f \n",DensidadePoluacional2);        
    } else if (DensidadePoluacional = DensidadePoluacional2)
    {
     printf("As Cartas Empato :%s - %s \n",NomeCidade,NomeCidade2);
     printf("As Cartas Empato :%.2f - %.2f \n",DensidadePoluacional,DensidadePoluacional2); 
    }    
    break;

default:
    printf (" Entrada invalida \n");
        
    break;
}


break;
case 2:
    printf ("Ganha o Atributo da Carta que for maior na Comparacao \n");
    printf ("Exeto Densidade Demografica Ganha que tiver menor valor \n");
    break;
case 3:
    printf (" Saindo \n");
    break;
default:
    printf (" Entrada invalida \n");
    break;
} 

   //super
//    SuperPoder = Populacao+AreaKm+PIB+NuPontoTuristico+pibPcapital/DensidadePoluacional;
//
//   SuperPoder2 = Populacao2+AreaKm2+PIB2+NuPontoTuristico2+pibPcapital2/DensidadePoluacional2;
//    
//   if (SuperPoder > SuperPoder2){   
//    printf ("Carta 1 Ganhou SuperPoder : %.2f  \n", (SuperPoder));
//   } else {
//    printf ("Carta 2 Ganhou SuperPoder : %.2f  \n", (SuperPoder2));
//   }


   return 0;
}