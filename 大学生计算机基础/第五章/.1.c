/*
 Name: 8.4.C
 Copyright: JFX
 Author: JFX
 Date: 30/31/23 09:38
 Description: 冒泡排序算法 
*/
#include<stdio.h>
#include <stdlib.h>
main()
{   int a[10];
    int i,j,t;
    printf("输入10个100以内的数：");
    for(i=0;i<10;i++)
    { 
       scanf("%d",&a[i]); 
    }
    printf("\n");
        for(j=1;j<10;j++)
        { 
            for(i=0;i<10;i++)
            {
			if (a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
            }
        }
        for(i=0;i<10;i++)
        printf ("a[%d]=%d\n",i,a[i]);
}
