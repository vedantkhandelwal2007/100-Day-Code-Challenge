// Q55: Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a Number:");
	scanf("%d",&n);
	if (n>=1)
	{
	  if (n==2)
	  printf("2");
	  else
	  {
	   printf("2,3,");
	   for (i=4;i<=n;i++)
	    {
		   if (i%2!=0)
		    {
			   if (i%3!=0)
			    {
				    printf("%d,",i);
			    }
		    }
	    }
     }
   }
	return 0;
}
