// Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main(){
    int num,i=2,count=0;
    scanf("%d",&num);
  
    if(num<=1){
      printf("Not prime");
      return 0;
    }
    while(i<num){
        if(num%i==0){
          count=1;
          break;
        }
        i=i+1;
    }
    if(count==0)printf("Prime");
    else printf("Not prime");
    return 0;
}
