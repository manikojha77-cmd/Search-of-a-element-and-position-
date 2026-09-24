#include<stdio.h>
int main()
{
	int n,i,search,found=0;
	printf("Enter the array size:");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int a[n];
	printf("Enter the element you want to search  ");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			found=1;
		break;	
		}	
	}
	if(found==1)
	{
		printf("Element is found position=%d",i);
	}
	else
	{
		printf("Element is not found.");
	}
	return 0;
}
