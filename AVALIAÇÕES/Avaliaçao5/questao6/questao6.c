#include <stdio.h>
#include <ctype.h>

void ler_arquivo(const char* nome) {
    FILE* arquivo;
    arquivo = fopen(nome, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int ocorrencia[26] = {0}; 

    int c;

    while ((c = fgetc(arquivo)) != EOF) {
        c = tolower(c);

        if (c >= 'a' && c <= 'z') {
            ocorrencia[c - 'a']++;
        }
    }

    fclose(arquivo);

    for (int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, ocorrencia[i]);
    }
}

int main() {
    char nomeArquivo[50];

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    ler_arquivo(nomeArquivo);

    return 0;
}