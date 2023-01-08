#include <iostream>
#include <stdio.h>
#include <unistd.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese"); 
puts("=============INSERINDO ELEMENTO==============");	



	//line [tabela1] coluna[tabela2]
	int matriz[2][2];
	int encontrado = 0;
	
	for(int linha = 0; linha <2; linha ++)
	{
		printf("%d\370 Linha:\n", linha+1);
		
		//inserção na tabela 2
		for(int coluna = 0; coluna < 2; coluna++)
		{
			printf("informe valor da %d\370coluna: ", coluna+1);
			scanf("%d",&matriz[linha][coluna]);		
		}		
	}system("cls");

//=====================================================================
puts("==============EXIBINDO ELEMENTO===============");	



	for(int linha = 0; linha <2; linha ++)
	{
			printf("\n%d\370 Linha:\n", linha+1);
			for(int coluna = 0; coluna < 2; coluna++)
		{
				printf("%d\370 Coluna: %d \n",coluna+1, matriz[linha][coluna]);
		}
	}

//=========================================================================
puts("==============BUSCANDO ELEMENTO================");	

		int busca;
		bool record = false;
		
		
		puts("\nBuscar Elemento: ");
		scanf("%d",&busca);
/*--------------------------------------------------------------------*/			
		for(int linha = 0; linha < 2; linha++)
		{
			for(int coluna = 0; coluna < 2; coluna++)
			{		
				if(busca == matriz[linha][coluna])
				{
				record = true;											
				}				
			}
		}
/*--------------------------------------------------------------------*/	
		if (record == true)
		{
			puts("Encontrado"); 
		}	
		if (record == false)
		{
		
		puts("Elemento não encontrado\n");
		}
		sleep(1);		
system("cls");	
/*--------------------------------------------------------------------*/	
	for(int linha = 0; linha <2; linha ++)
	{
			printf("\n%d\370 Linha:\n", linha+1);
			for(int coluna = 0; coluna < 2; coluna++)
		{
				printf("%d\370 Coluna: %d \n",coluna+1, matriz[linha][coluna]);
		}
	}

//=====================================================================
puts("===============REMOVENDO ELEMENTO==================");	


	puts("\nRemover Elemento Coluna: ");
		scanf("%d",&busca);
			
/*--------------------------------------------------------------------*/					
		for(int linha = 0; linha < 2; linha++)
		{
			for(int coluna = 0; coluna < 2; coluna++)
			{
				if(busca == matriz[linha][coluna])
				{
					matriz[linha][coluna] = matriz[linha][coluna] - busca;
					puts("\nElemento removido.");
					encontrado = 1;								
				} 
										
			}
		
		}
		if (!encontrado)
		{
			puts("Elemento não encontrado\n");		
			
		}sleep(1);
		system("cls");
/*--------------------------------------------------------------------*/		
	for(int linha = 0; linha <2; linha ++)
	{
			printf("\n%d\370 Linha:\n", linha+1);
			for(int coluna = 0; coluna < 2; coluna++)
		{
				printf("%d\370 Coluna: %d \n",coluna+1, matriz[linha][coluna]);
		}
	}	
		
	
//================================================================================
puts("===============ALTERANDO ELEMENTO ==================");	



		
		int aux=0;
 		puts("\nAlterar Elemento Coluna: ");
		scanf("%d",&busca);	
		
		
		for(int linha = 0; linha < 2; linha++)
		{
			for(int coluna = 0; coluna < 2; coluna++)
			{
				if(busca == matriz[linha][coluna])
				{	
					puts("\nNovo Elemento no indice: ");
					scanf("%d", &aux);
					matriz[linha][coluna] = matriz[linha][coluna] - busca; 
					matriz[linha][coluna] += aux;
					encontrado = 1;
					
				}
			}
			
		}
				if(!encontrado)
				{
					puts("Não encontrado.");
				}

	sleep(1);
	system("cls");	
		
	for(int linha = 0; linha <2; linha ++)
	{
		printf("\n%d\370 Linha:\n", linha+1);
		for(int coluna = 0; coluna < 2; coluna++)
		{
			printf("%d\370 Coluna: %d \n",coluna+1, matriz[linha][coluna]);
		}
	}

	return 0;
}
