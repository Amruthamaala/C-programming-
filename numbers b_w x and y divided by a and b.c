#include<stdio.h>
void main()
{
int x,y,a,b,i;
printf("enter the values of X,y,a,b");
scanf("%d%d%d%d",&x,&y,&a,&b);
for(i=x;i<=y;i++)
{
if(i%a==0&&i%b==0)
printf("\n%d",i);

}


}