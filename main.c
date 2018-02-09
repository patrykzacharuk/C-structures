#include <stdio.h>
#include <stdlib.h>

typedef struct dane_osobowe{
	char imie[20];
	char nazwisko[20];
	int wiek;
}dane;

void xyu(dane *x, int n){
	int i, min=99;
	for(i=0; i<n; i++){
		if(x[i].wiek<min)
			min=x[i].wiek;
	}
	for(i=0; i<n; i++){
		if(x[i].wiek<min)
			printf("%s %s\n", x[i].imie, x[i].nazwisko);
	}
}

int main(){
	int n=5;
	dane *x=malloc(n*sizeof(dane));
	xyu(x, n);
	free(x);
	return 0;
}