#include<stdio.h>
void main()
{       
        int arm=0,num,rem,temp;
        printf("Enter a number");
        scanf("%d",&num);
        temp=num;
        while(num>0)
                {
                        rem=num%10;
                        arm=rem*rem*rem+arm;
                        num=num/10;
                }
        if(temp==arm)
                printf("Armstrong");
        else
                printf("Not armstrong"); 
}       
