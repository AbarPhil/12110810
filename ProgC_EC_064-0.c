#include <stdio.h>
#include <time.h>
#include <string.h>

void mudaLinha(void);
void meuCarimbo(void);

int main() 
{
	/* 
		-----------------------
		| Bons, Feios e Maus. |
		-----------------------
	*/
	
	// Solu‡„o mais 'bonita' para o exerc¡cio anterior
	
    char primeira_string	[50] 	= "Programação em ";
    char segunda_string		[50] 	= "C/C++ - ";
	char terceira_string	[50]	= "Fundamentos!";
    char resultado			[150];  // 150 ‚ a soma do tamanho das string's

    // 'Copia' a primeira string para a var vel resultado
    strcpy(resultado, primeira_string);
    
    // 'Concatena' a segunda string com a vari vel resultado
    strcat(resultado, segunda_string);

    // 'Concatena' a terceira string com a vari vel resultado
    strcat(resultado, terceira_string);
	
	mudaLinha();
	printf("Primeira string: %s\n", primeira_string);
	mudaLinha();
	
    printf("Segunda string:  %s\n", segunda_string);
	mudaLinha();
	
	printf("Terceira string: %s\n", terceira_string);
    mudaLinha();
	
	printf("Resultado final da concatenação: %s\n", resultado);
	mudaLinha();
	meuCarimbo();

    return 0;
}

void mudaLinha(void){
	
		printf("\n"); // muda de linha
	}

	void meuCarimbo(void)
	{
		time_t tempo_atual = time(NULL);
		struct tm *tempo_local = localtime(&tempo_atual);
		char data_hora[64];
		strftime(data_hora, sizeof(data_hora), "%d-%m-%Y %H:%M:%S", tempo_local);
		printf("\n[Eduardo Coelho] - [ %s ]", data_hora);
		mudaLinha();
	}