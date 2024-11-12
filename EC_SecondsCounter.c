#include <stdio.h>
#include <time.h>

void mudaLinha(void);
void meuCarimbo(void);

int main()
{
	int h=0, m=0, s=0;
	int totalsec=0;

	mudaLinha();
	meuCarimbo();
	mudaLinha();
	
	printf("Horas: ");
	scanf("%d", &h);
	printf("Minutos: ");
	scanf("%d", &m);
	printf("Segundos: ");
	scanf("%d", &s);
	
	h = (h * 60) * 60;
	m = m * 60;
	
	totalsec = h + m + s;
	
	mudaLinha();
	
	printf("Total de segundos desde a meia noite: %d", totalsec);
	mudaLinha();
	
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