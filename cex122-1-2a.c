#include <stdio.h>
#include <string.h>
#define NUM 3
typedef struct {
	
	char name[40];
	int age;
	double height;
	double weight;
	
}PersonData;
void main(){
PersonData data[]={
	           {"Mary Poppins",28,173.8,48.9},
		       {"Betty Boop",22,150.2,50.3},
			   {"Mickey Mouse",18,160.7,60.4}};
int i;
double avg_age=0,avg_height=0.0,avg_weight=0.0;
for(i=0;i<NUM;i++){
	avg_age +=data[i].age;
	avg_height +=data[i].height;
	avg_weight +=data[i].weight;
}
avg_age/=NUM;
avg_height/=NUM;
avg_weight/=NUM;
printf("メンバー:");
for(i=0;i<NUM;i++){
	printf("\"%s\" ",data[i].name);
}
printf("\n");
printf("平均年齢:%.1f\n",avg_age);
printf("平均身長:%.1f\n",avg_height);
printf("平均体重:%.1f\n",avg_weight);
}