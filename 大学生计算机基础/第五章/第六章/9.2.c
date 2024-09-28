/*
	Name: 9.2.c 
	Copyright:JFX
	Author: 冀凤献 
	Date: 11/04/23 14:21
	Description: 用自定义函数的形式，计算三角形面级 
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
    printf("请输入三边边长:\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    x=Ss(a,b,c);
    printf("%lf",x);  
}




