/*
	Name: 8.1.C
	Copyright: JFX
	Author: JFX
	Date: 40/08/23 08:30
	Description: 
*/

#include<stdio.h>
int a[5],b[5],c[5],i;
main ()
{
    printf("�������һ������������ֵ\n");
	for(i=0;i<5;i++)
    {
        printf("��%d������",i+1);
		scanf("%d",&a[i]);
        printf("\n");
    }
    printf("������ڶ�������������ֵ\n");
    for(i=0;i<5;i++)
    {
        printf("��%d������",i+1);
		scanf("%d",&b[i]);
        printf ("\n");
    }
    for(i=0;i<5;i++)
    c[i]=b[i]+a[i];
    printf("a�����е�����: %d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
    printf("b�����е�����: %d %d %d %d %d\n",b[0],b[1],b[2],b[3],b[4]);
    printf("c�����е�����: %d %d %d %d %d\n",c[0],c[1],c[2],c[3],c[4]);
}
