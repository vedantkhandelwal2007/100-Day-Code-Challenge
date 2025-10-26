//Q59: Count even and odd numbers in an array.
//
///*
//Sample Test Cases:
//Input 1:
//6
//1 2 3 4 5 6
//Output 1:
//Even=3, Odd=3
//
//Input 2:
//4
//2 4 6 8
//Output 2:
//Even=4, Odd=0
//
//*/

#include <stdio.h>

int main()
{
	int n;
	printf("Enter number of elements: ");
    scanf("%d", &n);
    int num[n], i,cnte=0,cnto=0;

    for (i=0;i<n;i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for (i=0;i<n;i++)
    {
        if (num[i]>0)
		{
		if(num[i]%2==0)
        {
        	cnte=cnte+1;
		}
		else
		{
			cnto=cnto+1;
		}
	}
    }

    printf("Count of even Number is: %d\nCount of odd Number is: %d", cnte,cnto);

    return 0;
}


