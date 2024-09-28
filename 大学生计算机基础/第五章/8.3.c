/*
	Name: 8.3.C
	Copyright: JFX
	Author: JFX
	Date: 30/31/23 08:30
	Description: 
*/
#include<stdio.h>
#include<string.h>
#define N 20  //一定要带# 
char a[N];
char X=' '; 
int i=0,k=0;
main ()
{
   printf("请输入一个英文句子:\n");
   gets(a);
  for(i=0;i<strlen(a)-1;i++)
   {
   	if(X==a[i])
 	k++;
	}
	printf("单词个数：");
	printf("%d\n",k+1);
	printf("字符串长度：");
	printf("%d",strlen(a));
}
