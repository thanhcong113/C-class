#include <stdio.h>
#include <stdlib.h>
int str_to_int(char*);
int str_to_int(char *p){
	char *ep=p;
	while(*ep!='\0'){
		ep++;
	}
	return(ep-p);

}
void main(){
	int len;
	char s[]="ABCDEFGHIJKMNOPQRSTUVWXYZ";
	len=str_to_int(s);
	//printf("•¶Žš—ñ‚Í\"%s\" ‚Å‚·.\n",s);
	//str_to_int(s);
	printf("•¶Žš—ñ‚Í\"%s\"‚Ì’·‚³‚Í%d ‚Å‚·.\n",s,len);
}
	