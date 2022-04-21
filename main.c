#include <stdio.h>

/*
 * Autor Alexandro Avena
 * Data 21/04/2022
 * versáo 0.1
 */

int main() {

    FILE *arq1;
    arq1 = fopen("1.txt","r");

    if(arq1 == NULL){
        printf("arquivo de entrada não encontrado!\n");

    }
        char linha[100];

    FILE *arq;
    arq = fopen("contratos1.txt","w"); //falta trocar a máscara do arquivo para aquela máscara que ele pega
    fprintf(arq,"ACT=4\n");
    fprintf(arq,"REASON=3\n");
    fprintf(arq,"EMAIL=/*endere;o de email*/ \n");

    while (fgets(linha, 100, arq1) !=NULL){

        fprintf(arq,"%s",linha);

    }
    fclose(arq);
    fclose(arq1);



    return 0;
}
