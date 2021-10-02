#include<stdio.h>

int main()
{
	int key,i,status=0;
	int arr[8]={2,6,7,8,9,1,3,4};
	
	printf("Enter the element to be search: ");
	scanf("%d",&key);
	
	for(i=0;i<8;i++)
	{
		if(key==arr[i])
		{
			printf("%d is found in list...\n",key);
			printf("%d is at %d ...",key,(i+1));
			status = 1;
			break;
		}
	}
	if(status==0){
	 printf("%d is not in list...",key);
	}
	
}
