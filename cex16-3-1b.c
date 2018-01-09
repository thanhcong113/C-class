#include <stdio.h>
void main(void)
{
	int x,y,z;
	  printf("x=");
		scanf("%d",&x);
		printf("y=");
		scanf("%d",&y);
		printf("z=");
		scanf("%d",&z);
		if (x>y&&x>z&&y>z) printf (" %d %d %d\n",x,y,z);
		else if (x>y&&y<z&&x>z) printf (" %d %d %d\n",x,z,y);
		else if (x<y&&y<z) printf (" %d %d %d\n",z,y,x);
		else if(x<y&&x<z&&y>z) printf (" %d %d %d\n",y,z,x);
		else if(y>x&&x>z) printf (" %d %d %d\n",y,x,z);
		else if(z>x&&x>y) printf (" %d %d %d\n",z,x,y);
}
		
		