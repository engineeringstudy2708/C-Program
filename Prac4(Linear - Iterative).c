#include<stdio.h>

int main()
{
	int size;
	printf("Enter the size: ");
	scanf("%d",&size);
	
	int Array[size],key,i;
	
	printf("Enter the Array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&Array[i]);
	}
	
	printf("Enter the Key\n:");
	scanf("%d",&key);
	//Linear Search logic
	int status=0;  // 0-> false
	
	for(i=0;i<size;i++)  //Visit all elements
	{
		if(key==Array[i])
		{
			status = 1; //1-> true
			printf("%d is present in the list...\n\n",key);
			printf("%d is at Position = %d ...",key,(i+1));
			break; // terminate the looping statement
		}
	}
	
	if(status == 0)
	{
	  printf("The Element is not found :%d ",key);	
	}
	
	
}
