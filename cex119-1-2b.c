#include<stdio.h>
int eval(int);
int eval(int n){
	if(n>=60) return 1;
	return 0;
}
void main(){
	int n;
	n=80;
	if (eval(n)){
		printf("“_”%d : ‡Ši\n",n);
	}
		else {printf("“_”%d : •s‡Ši\n",n);
	}
	n=56;
	if (eval(n)){
		printf("“_”%d : ‡Ši\n",n);
	}
		else{ printf("“_”%d : •s‡Ši\n",n);
	}
}
	
	