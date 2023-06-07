#include <stdio.h>
#include <ctype.h>

void substituir_vogais(FILE* arquivo) {
    int c;

    while ((c = fgetc(arquivo)) != EOF) {
        c = tolower(c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            putchar('*');
        } else {
            putchar(c);
        }
    }
}

void ler_arquivo(const char* nome) {
    FILE* arquivo;
    arquivo = fopen(nome, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    substituir_vogais(arquivo);

    fclose(arquivo);
}

int main() {
    char nomeArquivo[50];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    ler_arquivo(nomeArquivo);

    return 0;
}