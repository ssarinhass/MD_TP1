#include <stdio.h>
#include <math.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//Declara as variaveis que armazenaram as entradas e saidas;
	int m=0,n=0,q=0,p=0,i=0,j=0,s=0,y=0;
	

	printf("Digite o primeiro numero e o segundo numero \n");//Mostrara na tela para o usuario;
		scanf("%d %d",&n, &m);// A variavel n ira receber o inicio do intervalo e a m recebera o final do intervalo;
	
	printf("\n");//somente para dar espacemnto no codigo;
	
	printf("Digite a quantidade de pares ordenados \n");//Mostrara na tela a quantidade de pares ordenados a serem gerados;
		scanf("%d",&q);//ira reber e armazenar o valor digita pelo usuario;
		
	printf("\n");//somente para dar espacemnto no codigo;
	
	//fara a contagem;
	for(i=n;i<=m;i++){
		s++;
	}
	
	p=pow(s,2);//fara a contagem de pares ordenados a serem gerados;
		
	//fara o loop e mostrarar na tela os pares ordenados requeridos pelo usuario;
		for(j=n;j<=m;j++){
			for(i=n;i<=m;i++){
				printf("%d%d\n",j,i);
				y++;
				if(y==q){//para a execucao nesse ponto;
					break;
				}
	 		}	
	 			if(y==q){//para a execucao nesse ponto;
					break;
				}
		}
		
	printf("\n");
	
	//fara o loop e mostrara na tela 1 e os pares ordenados;
	if(q==p){
		printf("1\n");
		printf("\n");
		for(j=n;j<=m;j++){
			for(i=n; i<=m; i++){	
				printf("%d%d\n",j,i);
		
 			}	
		}
		
	}else{//fara o loop e mostrara na tela 0 e os pares ordenados;
		printf("0\n");
		printf("\n");
		for(j=n;j<=m;j++){
			for(i=n; i<=m; i++){	
				printf("%d%d\n",j,i);
		
 			}	
		}
	}
	return 0;
	
}
