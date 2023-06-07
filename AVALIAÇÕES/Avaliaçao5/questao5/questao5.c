#include <stdio.h>
#include <ctype.h>

void ler_arquivo(const char* nome, char caractere) {
    FILE* arquivo;
    arquivo = fopen(nome, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int c;
    int repeticao = 0;

    while ((c = fgetc(arquivo)) != EOF) {
        c = tolower(c);

        if (c == tolower(caractere)) {
            repeticao++;
        }
    }

    fclose(arquivo);

    printf("\nO caractere '%c' aparece %d vezes.\n", caractere, repeticao);
}

int main() {
    char nomeArquivo[50];
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite o caracter desejado: ");
    scanf(" %c", &caractere);

    ler_arquivo(nomeArquivo, caractere);

    return 0;
}