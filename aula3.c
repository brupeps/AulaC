#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("Entre o valor para montar a tabuada: ");
	scanf("%i",&x);
	for(y=0;y<=10;y=y+1){
		printf("%i vezes %i e igual a %i\n",x,y,x*y);	
	}
	
}
