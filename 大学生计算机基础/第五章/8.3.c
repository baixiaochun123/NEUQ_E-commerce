/*
	Name: 8.3.C
	Copyright: JFX
	Author: JFX
	Date: 30/31/23 08:30
	Description: 
*/
#include<stdio.h>
#include<string.h>
#define N 20  //һ��Ҫ��# 
char a[N];
char X=' '; 
int i=0,k=0;
main ()
{
   printf("������һ��Ӣ�ľ���:\n");
   gets(a);
  for(i=0;i<strlen(a)-1;i++)
   {
   	if(X==a[i])
 	k++;
	}
	printf("���ʸ�����");
	printf("%d\n",k+1);
	printf("�ַ������ȣ�");
	printf("%d",strlen(a));
}
