/*
	Name: 9.3.c 
	Copyright:JFX
	Author: 冀凤献 
	Date: 11/04/23 14:21
	Description: 用子程序进行冒泡法排序 
*/
#include<stdio.h>
int SR(int a[]) //输入 
    {
    int i;
    for(i=0;i<10;i++)
    { 
	printf("第%d个数：",i+1);   
    scanf("%d",&a[i]); 
    }
    }  
int PX(int a[])
    {
	int i,k,t;
	for(i=1;i<10;i++)  //排序 
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
int SC(int a[])  //输出 
{   int k;
    for(k=0;k<10;k++)
    printf ("a[%d]=%d\n",k,a[k]);
}
main()
{
    int a[10];
    printf("输入10个100以内的数：\n");
    SR(a);
    PX(a);
    SC(a);
}

