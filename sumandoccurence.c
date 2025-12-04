#include<stdio.h>
#include<math.h>
int main() {
    int n1, sum=0,count=0,temp1,temp2,rem,n2,gcd,lcm;
    printf("enter the number:");
    scanf("%d",&n1);
    printf("the digit :");
    scanf("%d",&n2);
    temp1=n1;
    temp2=n2;
    while(n2!=0){
        rem=n2%n1;
        n1=n2;
        n2=rem;
    }
    gcd=n1;

    lcm=(temp1*temp2)/gcd;
    printf("the sum of digits is %d\n",gcd);
    printf("the occurrence of digit is %d\n",lcm);
    return 0;


    }