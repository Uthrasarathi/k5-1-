#include<stdio.h>
#include<conio.h>
void main()
{
char s;
printf("\nRoman number are I,V,X,L,C,D,M\n");
scanf("%c",&s);
printf("\nnew : %c",s);
switch(s)
{
case 'I':
printf("\n1");
break;
case 'V':
printf("\n5");
break;
case 'X':
printf("\n10");
break;
case 'L':
printf("\n50");
break;
case 'C':
printf("\n100");
break;
case 'D':
printf("\n500");
break;
case 'M':
printf("\n1000");
break;
case '\0':
printf("\n0");
break;
}
getch();
}
