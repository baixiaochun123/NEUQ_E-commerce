/*
	Name: 8.2.C
	Copyright: JFX
	Author: JFX
	Date: 30/30/23 08:30
	Description: 
*/
#include<stdio.h>
#include<string.h>
#define N 20  //һ��Ҫ��# 
char a[N];
char X; 
int i=0;
main ()
{
   printf("input a string:");
   gets(a);
   printf("input a char:");
   scanf("%c",&X);
  for(i=0;i<strlen(a);i++)
   {
   	if(X==a[i])
   	{
	printf("�±꣺%d",i);
	return 0;  //return 0���÷� ������� 
    }
    }
    printf("�±꣺-1");
    return 0;
}
