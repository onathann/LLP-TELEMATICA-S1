#include <stdio.h>
#include <ctype.h>

void ler_arquivo(const char* nome) {
    FILE* arquivo;
    arquivo = fopen(nome, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int c;
    int vogais = 0;

    while ((c = fgetc(arquivo)) != EOF) {
        putchar(c);

        c = tolower(c);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }

    fclose(arquivo);

    printf("\nO arquivo tem %d vogais.\n", vogais);
}

int main() {
    char nomeArquivo[50];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    ler_arquivo(nomeArquivo);

    return 0;
}