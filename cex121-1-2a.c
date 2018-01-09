#include <stdio.h>
#include <string.h>
struct person{
	char name[40];
	int age;
	double height;
	double weight;
};
void main(){
	struct person ben={"Dobaid J.Trump",71,188.2,107.5};
	 
	 
	 printf("name=%s\n",ben.name);
	 printf("age = %d\n",ben.age);
	 printf("height=%.1f\n",ben.height);
	 printf("weight = %.1f\n",ben.weight);
}
	 
	 