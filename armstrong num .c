#include <stdio.h>
#include <math.h>
main() {
    int num,rem,org_num,v,sum, c = 0 ;
    printf("enter the value:");
    scanf("%d",&num);
    org_num=num;
    v=org_num;
    while(num>0)
    {
        num=num/10;
        c++;
    }
    printf("no of digits %d\n",c);
    for (sum = 0; org_num>0; org_num=org_num/10) {
        rem= org_num%10 ;
        sum=sum+pow(rem,c);
    }
    printf("%d\n",sum);
    if(sum==v) {
        printf("it is a armstrong number");
    }
    else
        printf("not a armstrong number");
}