/*
	Name: 9.2.c 
	Copyright:JFX
	Author: ������ 
	Date: 11/04/23 14:21
	Description: ���Զ��庯������ʽ�������������漶 
*/
#include<stdio.h>
#include<math.h>
double Ss(double a,double b,double c) 
{
  double p,s;
  p=(a+b+c)/2; 
  s=sqrt(p*(p-a)*(p-b)*(p-c));
  return s;
}
main()
{
    double a,b,c,x;
    printf("���������߱߳�:\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    x=Ss(a,b,c);
    printf("%lf",x);  
}




