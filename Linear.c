#include<stdio.h>

void main()
{
	int size;
	printf("Enter the size of Array: \n");
	scanf("%d",&size);
	
	int Array[size],i;
	
	printf("Enter the Array Elememts :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&Array[i]);
	}
	int key;
	printf("Enter the element to search:\n");
	scanf("%d",&key);
	//Linear Search
	
	for(i=0;i<size;i++)
	{
		if(Array[i] == key)
		{
			printf("The Elements is at : %d",i+1);
			break;
		}
	}
	
}
