/*Serve o presente para estudar o comportamento do casting de um inteiro para char*/

#include <stdio.h>

int main(void)
{
char aux; 
int i;

for (i=0;i<128;i++){
	aux=(char)i;
	printf("%c\n",aux );
}
return 0;
}
