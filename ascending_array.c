#include <stdio.h>
int main()
{
	int n,arr[n],i,j,temp;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		printf("Enter value for arr[%d] :\n ", i);
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("The values after sorted in ascending order\n");
	for(i=0; i<n; i++)
	{
		printf(" %d",arr[i]);
	}
}
