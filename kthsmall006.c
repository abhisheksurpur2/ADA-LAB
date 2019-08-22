#include<stdio.h>
int i,j,temp,min;
int ksmallest(int arr[],int n,int k)
{
	for(i=0;i<k;i++)
	{
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if(arr[min]>arr[j])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[j]=temp;
	}
		return arr[k-1];
		
		
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
n2=ksmallest(arr,n,k);
printf("\nthe kth small ele is ");
printf("%d",n2);
}