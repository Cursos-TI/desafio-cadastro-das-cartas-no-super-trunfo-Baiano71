#include <stdio.h>

int main (){

char aluno [50];
float nota;


printf("Digite o nome do aluno \n");
scanf("%s", &aluno);

printf("Digite a nota do aluno: \n");
scanf("%f", &nota);


printf("O aluno %s, tirou %f na prova", aluno, nota);


return 0;

}