#include <stdlib.h>
#include <stdio.h>

typedef struct xyu{
	int **arr;
	int n;
	int m;
}xyu;

void *allocateMem(){
	xyu str;
	printf("n:\n");
	scanf("%d", &str.n);
	printf("m:\n");
	scanf("%d", &str.n);
	str.arr=malloc(str.n*sizeof(int));
	int i;
	for (int i = 0; i < str.n; i++){
		str.arr[i]=malloc(str.m*sizeof(int));
	}
	xyu *st=&str;
	return st;
}

void *freeMem(xyu *str){
	int i;
	for(i=0; i<(str -> n); i++)
		free(str->arr[i]);
	free(str->arr);
}

int main(){
	xyu *str=allocateMem();
	freeMem(str);
	return 0;
}