#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char texto[200];
    int tam;

    printf("Digite o texto a ser traduzido: (ate 200 caracteres)\n");
    gets(texto);

    tam=strlen(texto);

    for(int i=0; i<tam; i++){
        if ((texto[i] == 'r') && (texto[i+1] != ' ') && (texto[i+1] != '/0') && (texto[i+1] != 'r')){
            texto[i] = 'l';
        }

        if ((texto[i] == 'r') && (texto[i+1] != ' ') && (texto[i+1] != '/0') && (texto[i+1] == 'r')){
                texto[i] = 'l';

                for (int j=i+1; j<tam; j++){
                    texto[j]=texto[j+1];
                }

        }
    }


    printf("\nTexto traduzido: %s", texto);

    return 0;
}
