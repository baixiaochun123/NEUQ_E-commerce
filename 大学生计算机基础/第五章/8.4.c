/*
 Name: 8.4.C
 Copyright: JFX
 Author: JFX
 Date: 30/31/23 09:38
 Description: 冒泡排序算法 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    int a[n];
    int i,j,t;    
	printf("输入10个100以内的数：");
    for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
    }
    printf("\n");
    for(j=1;j<n;j++)//外循环控制排序趟数，比内循环少一趟。
    {
        for(i=0;i<n;i++)//进行比较，逆序则交换
        {
            if(a[i]>a[i+1])//互换位置
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
    return 0;
}
