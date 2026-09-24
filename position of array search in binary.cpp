#include<stdio.h>
int main()
{
	int n,i,search;
	int low,high,mid,found=0;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the array elements in ascending order:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to search\n");
	scanf("%d",&search);
	low=0;
	high=n-1;
	while(low<=high)
	{
	mid=(low+high)/2;
	
		if(a[mid]==search)
		{
			found=1;
			break;
		}
		else if(search>a[mid])
		{
			low=mid+1; 
		}
		else
		{
			high=mid-1;
		}
	}
		if(found==1)
		{
			printf("The element is found array position =%d",mid);
		}
		else 
		{
			printf("The element is not found");
		}
		return 0;	
}
