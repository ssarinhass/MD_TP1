#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int m=0,n=0,q=0,i=0,j=0,s=0,p=0;
	

	printf("Digite o %d numero e o %d numero \n",n=i+1,m=i+2);
		scanf("%d %d",&n, &m);
	
	printf("\n");
	
	printf("Digite a quantidade de elementos \n");
		scanf("%d",&q);
	printf("\n");
	
	for(i=n;i<=m;i++){
		s++;
	}
	
	p=pow(s,2);
	if(q==p){
		printf("1\n");
		printf("\n");
		for(j=n;j<=m;j++){
			for(i=n; i<=m; i++){	
				printf("%d%d\n",j,i);
		
 			}	
		}
		
	}else{
		printf("0\n");
		printf("\n");
		for(j=n;j<=m;j++){
			for(i=n; i<=m; i++){	
				printf("%d%d\n",j,i);
		
 			}	
		}
		return 0;
	}
	return 0;
}
