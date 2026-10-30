#include<stdio.h>
#include<stdlib.h>
/*Call by Value*/
int addByvalue(int a,int b)
{
	int res;
	res=a+b;
	return res;
}

void swapByReference(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b,res;
	int *ptr;
	int *arr;
	int n,i,sum;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	/*Pointer Demonstration*/
	ptr = &a;
	printf("\nPointer Demonstration:");
	printf("\nValue of a =%d",*ptr);
	printf("\nAddress of a =%p",(void*)ptr);
	/*Call by value*/
	res = addByvalue(a,b);
	printf("\n\nCall by value:");
	printf("\nSum = %d",res);
	/*Call by reference*/
	swapByReference(&a,&b);
	printf("\n\nCall by reference:");
	printf("\nAfter swapping,first number=%d",a);
	printf("\nAfter swapping second number=%d",b);
	/*Dyanamic Memory Allocation*/
	printf("\n\nDyanamic Memory Allocation");
	printf("\nEnter the number of elements:");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("invalid number of elements.");
		return 1;
	}
	arr=malloc((size_t)n*sizeof(int));
	if(arr==NULL)
	{
		printf("Memory allocation failed.");
		return 1;
	}
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		sum= sum+arr[i];
	}
	printf("sum of dynamically allocated array =%d\n",sum);
	free(arr);
	return 0;
}