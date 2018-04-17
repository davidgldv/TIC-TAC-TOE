#include<stdio.h>
#include<stdlib.h>
#define N 3
void pintar();
int tablero [N][N];
int main (){

	pintar();
	
return 0;
}	
void pintar(){
	system("clear");
	for(int f=0 ; f<N  ; f++){
		printf("\n");
		for(int c=0 ; c<N ; c++){
			printf("| %i |",tablero[f][c] );
			}
		}	
printf("\n");
}
