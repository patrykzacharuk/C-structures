#include <stdio.h>
#include <stdlib.h>

typedef struct car{
	char manufacturer[20];
	float avgUrban;
	float avgRural;
}car;

void cheapest(car *arr, int n){
	int i;
	float avg=9999, buf;
	for(i=0; i<n; i++){
		if(buf=((arr[i].avgUrban+arr[i].avgRural)/2) < avg)
			avg=buf;
	}
	for(i=0; i<n; i++){
		if(buf=((arr[i].avgUrban+arr[i].avgRural)/2) <= avg)
			printf("%s\n", arr[i].manufacturer);
	}
}

int main(){
	int n=9; 
	car *arr=malloc(n*sizeof(car));
	cheapest(arr, n);
	free(arr);
	return 0;
}