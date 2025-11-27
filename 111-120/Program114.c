//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include<stdio.h>
#include<string.h>
int length(char *s)
{
    int n=strlen(s);
    int maxlen=0;
    int last[256];
    for(int i=0;i<256;i++)
    {
        last[i]=-1;
    }
    int max=0,start=0;
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        if(last[c]>=start)
        {
            start=last[c]+1;
        }
        last[c]=i;
        maxlen=i-start+1;
        if(maxlen>max)
        {
            max=maxlen;
        }
    }
    return max;
}
int main(){
    char s[100];
    printf("Enter a string: ");
    scanf("%s",s);
    int ans=length(s);
    printf("Result: %d",ans);
}
