/*
	Name: 9.3.c 
	Copyright:JFX
	Author: ������ 
	Date: 11/04/23 14:21
	Description: ���ӳ������ð�ݷ����� 
*/
#include<stdio.h>
int SR(int a[]) //���� 
    {
    int i;
    for(i=0;i<10;i++)
    { 
	printf("��%d������",i+1);   
    scanf("%d",&a[i]); 
    }
    }  
int PX(int a[])
    {
	int i,k,t;
	for(i=1;i<10;i++)  //���� 
        {
            for(k=0;k<10-i;k++)
            if (a[k]>a[k+1])
            {
                t=a[k];
                a[k]=a[k+1];
                a[k+1]=t;
            }
        }
    }
int SC(int a[])  //��� 
{   int k;
    for(k=0;k<10;k++)
    printf ("a[%d]=%d\n",k,a[k]);
}
main()
{
    int a[10];
    printf("����10��100���ڵ�����\n");
    SR(a);
    PX(a);
    SC(a);
}

