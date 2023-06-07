#include <stdio.h>
#include <stdlib.h>


void ler_arquivo(const char* nome){

    FILE* arquivo;
    arquivo = fopen (nome,"rb");

    int c = getc(arquivo);

    

    while (c!=EOF){

        putchar (c);
        c = getc(arquivo);


       
    }


    fclose (arquivo);



}

void escrever_arquivo(const char* nome, const char* string){
    
    FILE* arquivo;
    arquivo = fopen (nome, "a+");

   
    fprintf(arquivo, string);
    
    fclose(arquivo);



}


int main(){
    char string [30], string2[1];
    char vazio;

    int teste; 
    
    while (1){

        printf("digite uma frase ou palavra: ");
        fgets(string, 30, stdin);
        vazio=(char)string[0];
        

        if (vazio == '0'){

            
            break;
        }
        
    
        
        
        escrever_arquivo("qualquer_coisa.txt", string);

        

        
        

       

        


                    }
return 0;

}

