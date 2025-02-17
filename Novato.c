#include <stdio.h>

int main (){

char cidade [50];
float temperatura;


printf("Digite o nome da cidade: \n");
scanf("%s", &cidade);

printf("Quantos graus está fazendo na sua cidade? \n");
scanf("%f", &temperatura);


printf("Na cidade de %s, está fazendo %f, graus de temperatura" cidade, temperatura);


return 0;

}