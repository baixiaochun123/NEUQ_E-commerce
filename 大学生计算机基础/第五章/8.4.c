/*
 Name: 8.4.C
 Copyright: JFX
 Author: JFX
 Date: 30/31/23 09:38
 Description: ð�������㷨 
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    int a[n];
    int i,j,t;    
	printf("����10��100���ڵ�����");
    for(i=0;i<n;i++)
    {
		scanf("%d",&a[i]);
    }
    printf("\n");
    for(j=1;j<n;j++)//��ѭ��������������������ѭ����һ�ˡ�
    {
        for(i=0;i<n;i++)//���бȽϣ������򽻻�
        {
            if(a[i]>a[i+1])//����λ��
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
