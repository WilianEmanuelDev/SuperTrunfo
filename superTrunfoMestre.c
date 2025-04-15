#include <stdio.h>
#include <string.h>

int main()
{
    //*********variaveis para armazenar os dados da carta********* 
char estate1[50], estate2[50]; //nome do estado
char codeCard1[50], codeCard2[50];   //codigo da carta
char nameCity1[50], nameCity2[50];  //nome da cidade
int population1, population2;   //populacao
int area1, area2;   //area
float GDP1, GDP2;    //PIB
int tourist1, tourist2;     //numero de Pontos Turisticos
float density1, density2; //densidade demografica
int atribut1, atribut2;   //atributo a ser comparado

int cartaEscolhida; //variavel para escolher a carta
char adversary[50]; //variavel para armazenar a carta do adversario


//*******Cadastro da carta 1 e 2*******

printf("CADASTRANDO A PRIMEIRA CARTA\n");

printf("Digite uma letra de 'A' a 'H'(Representando um dos oito estados: Acre: A, Alagoas: B, Amapá: C, Amazonas: D, Bahia: E, Ceará: F, Espírito Santo: G, Minas Gerais: H): \n");
scanf("%s", estate1);

printf("Digite o codigo da carta: \n");
scanf("%s", codeCard1);

printf("Digite o nome da cidade: \n");
scanf("%s", nameCity1);

printf("Digite a populacao: \n");
scanf("%d", &population1);

printf("Digite os KMs Quadrados da Área: \n");
scanf("%d", &area1);

printf("Digite o PIB: \n");
scanf("%f", &GDP1);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &tourist1);

density1 = (float)population1 / area1; //calculo da densidade demografica carta 1

printf("\n");
printf("CADASTRANDO A SEGUNDA CARTA\n");
printf("\n");

printf("Digite uma letra de 'A' a 'H'(Representando um dos oito estados: Acre: A, Alagoas: B, Amapá: C, Amazonas: D, Bahia: E, Ceará: F, Espírito Santo: G, Minas Gerais: H): \n");
scanf("%s", estate2);

printf("Digite o codigo da carta: \n");
scanf("%s", codeCard2[50]); 

printf("Digite o nome da cidade: \n");
scanf("%s", nameCity2);

printf("Digite a populacao: \n");
scanf("%d", &population2);

printf("Digite os KMs Quadrados da Área: \n");
scanf("%d", &area2);

printf("Digite o PIB: \n");
scanf("%f", &GDP2);

printf("Digite o número de pontos turísticos: \n");
scanf("%d", &tourist2);

density2 = (float)population2 / area2; //calculo da densidade demografica carta 2

printf("\n");
printf("Cartas cadastradas com sucesso!\n");
printf("\n");

printf("CARTA 1\n"); //Exibe os dados da primeira carta
printf("Estado: %s\n", estate1);
printf("Código da Carta: %s%s\n", estate1, codeCard1);
printf("Nome da Cidade: %s\n", nameCity1);
printf("População: %d\n", population1);
printf("Área: %d\n", area1);
printf("PIB: %.2f\n", GDP1);
printf("Número de Pontos Turísticos: %d\n", tourist1);
printf("Densidade demografica: %.2f\n", density1);
printf("\n");
printf("CARTA 2\n"); //Exibe os dados da segunda carta
printf("Estado: %s\n", estate2);
printf("Código da Carta: %s%s\n", estate2, codeCard2[50]);
printf("Nome da Cidade: %s\n", nameCity2);
printf("População: %d\n", population2);
printf("Área: %d\n", area2);
printf("PIB: %.2f\n", GDP2);
printf("Número de Pontos Turísticos: %d\n", tourist2);
printf("Densidade demografica: %.2f\n", density2);
printf("\n");

//*******menu para escolha de qual carta utilizar*******
printf("Escolha a carta a ser utilizada:\n");
printf("A carta 1 é: %s\n", nameCity1);
printf("A carta 2 é: %s\n", nameCity2);
printf("\n");
printf("Digite 1 para a carta 1 ou 2 para a carta 2: ");

scanf("%d", &cartaEscolhida);

cartaEscolhida == 1 ? printf("A carta 1 foi escolhida!\n"), strcpy(adversary, nameCity2) : printf("A carta 2 foi escolhida!\n"), strcpy(adversary, nameCity1); // armazenar a carta do adversario

//********menu para escolher qual atributo usar********

printf("Escolha o primeiro atributo a ser comparado:\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Numero de pontos turisticos\n");
printf("5 - Densidade demografica\n");
printf("Digite o numero do Primeiro atributo a ser comparado: ");
scanf("%d", &atribut1);
printf("digite o segundo atributo a ser comparado:\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Numero de pontos turisticos\n");
printf("5 - Densidade demografica\n");
printf("Digite o numero do segundo atributo a ser comparado: ");
scanf("%d", &atribut2);

printf("\n");
printf("Atributos escolhidos: %d e %d\n", atribut1, atribut2);
printf("\n");
printf("Comparando os atributos...\n");

float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    
    valor1_carta1 = (atribut1 == 1) ? population1 :
                    (atribut1 == 2) ? area1 :
                    (atribut1 == 3) ? GDP1 :
                    (atribut1 == 4) ? tourist1 : density1;

    valor1_carta2 = (atribut1 == 1) ? population2 :
                    (atribut1 == 2) ? area2 :
                    (atribut1 == 3) ? GDP2 :
                    (atribut1 == 4) ? tourist2 : density2;

    valor2_carta1 = (atribut2 == 1) ? population1 :
                    (atribut2 == 2) ? area1 :
                    (atribut2 == 3) ? GDP1 :
                    (atribut2 == 4) ? tourist1 : density1;

    valor2_carta2 = (atribut2 == 1) ? population2 :
                    (atribut2 == 2) ? area2 :
                    (atribut2 == 3) ? GDP2 :
                    (atribut2 == 4) ? tourist2 : density2;
    
    // Exibir os valores escolhidos
    printf("\nComparação:\n");
    printf("%s: %.2f X. %s: %.2f\n", nameCity1, valor1_carta1, nameCity2, valor1_carta2);
    printf("%s: %.2f X. %s: %.2f\n", nameCity1, valor2_carta1, nameCity2, valor2_carta2);

    // Ideia das vitorias
    int vitorias_carta1 = 0, vitorias_carta2 = 0;
    
    if ((atribut1 == 5 && valor1_carta1 < valor1_carta2) || (atribut1 != 5 && valor1_carta1 > valor1_carta2))
        vitorias_carta1++;
    else if (valor1_carta1 != valor1_carta2)
        vitorias_carta2++;

    if ((atribut2 == 5 && valor2_carta1 < valor2_carta2) || (atribut2 != 5 && valor2_carta1 > valor2_carta2))
        vitorias_carta1++;
    else if (valor2_carta1 != valor2_carta2)
        vitorias_carta2++;

    // Mostra resultado final pro usuario
    printf("\nResultado Final:\n");
    if (vitorias_carta1 > vitorias_carta2)
        printf("%s venceu!\n", nameCity1);
    else if (vitorias_carta1 < vitorias_carta2)
        printf("%s venceu!\n", nameCity2);
    else
        printf("Empate!\n");

printf("Obrigado por jogar!\n");

return 0;
}