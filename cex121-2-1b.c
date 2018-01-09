#include <stdio.h>
#include <string.h>
struct person{
	char name[40];
	int age;
	double height;
	double weight;
};
void main(){
	struct person ben;
	
	printf("your infomation\n ");
	printf("name ?");scanf("%s",ben.name);
    printf("age ?");scanf("%d",&ben.age);
	printf("height ?");scanf("%lf",&ben.height);
	printf("weight ?");scanf("%lf",&ben.weight);
	 
	 
	 printf("name=%s\n",ben.name);
	 printf("age = %d\n",ben.age);
	 printf("height=%.1f\n",ben.height);
	 printf("weight = %.1f\n",ben.weight);
}
	 
	 