/*	大文字・小文字の変換	*/
#include	<stdio.h>
#include	<ctype.h>

void main()
{
	char	str_i[256],str_o[356];
	int		i,j;

	/*	データ入力	*/
	printf("文字列を入力してください。");
	scanf("%s",str_i);
	
	/*	変換	*/
	for(i = 0,j = 0;str_i[i] != '\0';i++){
		if(isupper(str_i[i]))
			str_o[j++] = tolower(str_i[i]); 
		else if(islower(str_i[i]))
			str_o[j++] = toupper(str_i[i]);
		else
			str_o[j++] = str_i[i];
	}
	 //= '\0';
	printf("%s",str_o);
}
