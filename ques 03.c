#include <stdio.h>
int main()
{   int n,i,sum=0;
    printf("sum of number of digits upto which we want odd numbers: %d", n);
	scanf("%d", &n);
	for(i=1 ; i<n ; i++)
	{
	    if(i%2 != 0)
	    {
	        sum+=i;
	    }
	}
	printf("sum of odd numbers between 1 to %d are: %d", n,sum);
	return 0;
}
