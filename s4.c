#include <stdio.h>

typedef struct point{
	float x;
	float y;
	float z;
}point;


point *fun(point *first, point *second){
	point third;
	if((first -> x)>(second -> x))
		third.x=(first -> x);
	else
		third.x=(second -> x);

	if((first -> y)>(second -> y))
		third.y=(first -> y);
	else
		third.y=(second -> y);

	if((first -> z)>(second -> z))
		third.z=(first -> z);
	else
		third.z=(second -> z);

	point *sad=&third;
	return sad;
}


int main(){
	int n=2;
	point first, second;

	first.x=2;
	first.y=3;
	first.z=-1;

	second.x=1;
	second.y=2;
	second.z=4;

	point *third=fun(&first, &second);
	printf("%f\n%f\n%f\n", (third -> x), (third -> y), (third -> z));
	return 0;
}