#include <stdio.h>
#include <string.h>
struct person{
	char name[40];
	int age;
	double height;
	double weight;
};
void main(){
	struct person ben1={"Mary Poppins",28,173.8,75.2};
		struct person ben2={"Betty Boop",22,150.2,55.3};;
	printf("member 2 infomation\n ");
	 printf("name=%s\n",ben2.name);
	 printf("age = %d\n",ben2.age);
	 printf("height=%.1f\n",ben2.height);
	 printf("weight = %.1f\n",ben2.weight);
	 
	 ben2=ben1;
	 	printf("member 2 infomation\n ");
	 printf("name=%s\n",ben2.name);
	 printf("age = %d\n",ben2.age);
	 printf("height=%.1f\n",ben2.height);
	 printf("weight = %.1f\n",ben2.weight);
}
	 
	 