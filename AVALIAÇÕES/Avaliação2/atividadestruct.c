#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;
    float altura;



}dados_pessoais;

main(){
    dados_pessoais pessoa;

    printf ("Digite seu nome: ");
    scanf ("%[^\n]", &pessoa.nome);

    printf ("digite sua idade: ");
    scanf ("%d", &pessoa.idade);

    printf ("digite sua altura: ");
    scanf ("%f", &pessoa.altura);


    FILE *arquivo2;

    arquivo2=fopen("infos.txt", "a");

    fprintf (arquivo2, "%s, %d, %.2f\n", pessoa.nome, pessoa.idade, pessoa.altura);

    fclose (arquivo2);



}