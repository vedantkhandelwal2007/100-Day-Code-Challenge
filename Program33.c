// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main(){
  
    int num,temp,digit,n=0,sum=0;
    scanf("%d",&num);
  
    temp=num;
    while(temp>0){
      n=n+1;
      temp=temp/10;
    }
    temp=num;
    while(temp>0){
        digit=temp%10;
        int power=1,i=0;
        while(i<n){
          power=power*digit;
          i=i+1;
        }
        sum=sum+power;
        temp=temp/10;
    }
    if(sum==num)printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
