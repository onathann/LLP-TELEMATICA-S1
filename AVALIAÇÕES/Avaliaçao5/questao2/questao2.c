#include <stdio.h>

void ler_arquivo(const char* nome) {
    FILE* arquivo;
    arquivo = fopen(nome, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int c;
    int linhas = 0;

    while ((c = fgetc(arquivo)) != EOF) {
        putchar(c);

        if (c == '\n') {
            linhas++;
        }
    }

    fclose(arquivo);

    printf("\nO arquivo tem %d linhas.\n", linhas);
}

int main() {
    char nomeArquivo[50];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    ler_arquivo(nomeArquivo);

    return 0;
}