 #include<stdio.h>
 void main(void)
 {
 	double n,m;
	printf("n=");
	scanf("%lf",&n);
	printf("m=");
	scanf("%lf",&m);
	printf("%lf+%lf=%12.1lf\n",n,m,n+m);
	printf("%lf-%lf=%7.1lf\n",n,m,n-m);
	printf("%lf*%lf=%7.1lf\n",n,m,n*m);
	printf("%lf/%lf=%7.1lf\n",n,m,n/m);
 }