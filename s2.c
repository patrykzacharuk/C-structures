#include <stdio.h>
#include <stdlib.h>

typedef struct ppl{
	char fName[20];
	char lName[20];
	float income;
}ppl;

void average(ppl *arr, int n){
	int i;
	float avg, sum=0;
	for(i=0; i<n; i++){
		sum=sum+arr[i].income;
	}
	avg=sum/i;
	for(i=0; i<n; i++){
		if(arr[i].income>avg)
			printf("%s %s\n", arr[i].fName, arr[i].lName);
	}
}

int main(){
	int n=5;
	ppl *arr=malloc(n*sizeof(ppl));
	average(arr, n);
	free(arr);
	return 0;
}