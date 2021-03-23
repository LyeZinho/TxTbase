#ifndef TXTBASE_H
#define TXTBASE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//////////////////////////////////////////////////////////////////////
/*
*   Cria um arquivio e escreve dados dentro 
*   caso abra um arquivo com dados dentro 
*   sobrescreve os dados anteriores
*   datawrite(diretorio, nome_do_arquivo, imput_dos_dados)
*/
//////////////////////////////////////////////////////////////////////
void DATAWRITE(char *diretorio, char *nome_data, char *data_vaules){


    FILE *arquivo;

    char txt[6] = ".txt";

    char modo[20] = "w+";

    strcat(nome_data, txt);

    strcat(diretorio, nome_data);

    arquivo = fopen(diretorio, modo);

    if (arquivo == NULL)
    {
        printf("Erro na criacao do arquivo");
    }

    fprintf(arquivo, "%s",data_vaules);

    fclose(arquivo);    
}





//////////////////////////////////////////////////////////////////////
/*
 * Lé os dados do arquivo selecionado e retorna a data_out
 * dataread(char *diretorio, char *nome_data, char *data_out)
 */
//////////////////////////////////////////////////////////////////////
void DATAREAD(char *diretorio, char *nome_data, char *data_out){

    FILE *arquivo;

    char txt[6] = ".txt";

    char modo[20] = "r";

    strcat(nome_data, txt);

    strcat(diretorio, nome_data);

    arquivo = fopen(diretorio, modo);

    if (arquivo == NULL)
    {
        printf("Erro ao abrir o arquivo");
    }

    rewind(arquivo);

    fscanf(arquivo, "%s",data_out);

    fclose(arquivo);
}
#endif
