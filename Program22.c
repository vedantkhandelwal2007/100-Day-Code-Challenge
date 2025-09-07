// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main()
{
	int cp,sp;
	printf("Enter Cost Price: %d",cp);
	scanf("%d",&cp);
	
	printf("Enter Selling Price: %d",sp);
	scanf("%d",&sp);
	
	int profit,loss,profitper,lossper;
	
	if (sp>cp) 
	{
    profit=sp-cp;
    profitper=(profit*100)/cp;
    printf("Profit = %d %%",profitper);
	}
	
		
	 else if (cp > sp) 
	 {
        loss = cp - sp;
        lossper = (loss * 100) / cp;
        printf("Loss = %d %%", lossper);
    }
		
	else if (sp==cp)
		{
		printf("NO PROFIT NO LOSS");}
		
	return 0;
}
