//Q60: Count positive, negative, and zero elements in an array.
//
///*
//Sample Test Cases:
//Input 1:
//5
//-1 0 1 2 -2
//Output 1:
//Positive=2, Negative=2, Zero=1
//
//*/

#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
    scanf("%d", &n);
    int num[n], i,cntp=0,cntn=0,cntz=0;

    for (i=0;i<n;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for (i=0;i<n;i++)
    {
        if (num[i]>0)
        {
        	cntp=cntp+1;
		}
		else if (num[i]==0)
		{
			cntz=cntz+1;
		}
		else if (num[i]<0)
		{
			cntn=cntn+1;
		}
    }

    printf("Count of Positive Number is: %d\nCount of Negative Number is: %d\nCount Zero: %d", cntp,cntn,cntz);

    return 0;
}


