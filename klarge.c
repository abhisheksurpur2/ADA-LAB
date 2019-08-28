#include<stdio.h>
int i,j,temp,max;
int klarge(int arr[],int n,int k)
{
	for(i=0;i<k;i++)
	{
		max=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(arr[max]<arr[j])
			{
				max=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[max];
		arr[max]=temp;
	
		
		printf("%d",arr[i]);
	}
		
		
}
int main()
{	int arr[30],n,k,n2;
printf("\nenter no of ele");
scanf("%d",&n);
printf("\nenter the array ele");
for(i=0;i<n;i++)

	scanf("%d",&arr[i]);

printf("enter the kth ele");
scanf("%d",&k);
n2=klarge(arr,n,k);
printf("\nthe kth small ele is ");
printf("%d",n2);
}
