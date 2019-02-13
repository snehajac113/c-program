#include<stdio.h>
void main()
{
        int rem,rev=0,num,temp;
        printf("enter a number");
        scanf("%d",&num);
        temp=num;
        while(num>0)
                {       
                        rem=num%10;
                        rev=rev*10+rem;
                        num=num/10;
                }
        if(rev==temp)
                printf("Palidrome");
        else
                printf("Not palidrome");        
}                
