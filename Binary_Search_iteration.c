#include<stdio.h>
// Take Sorted Array

int main()
{
	int key,low=0,high=0,mid=0,status=0;
	int arr[8]={1,2,3,4,5,6,7,8};
	high = 7; // array.length - 1;
	
	printf("Enter the value to be search : ");
	scanf("%d",&key);
	
	while(low<=high)
	{
		mid=(low+high)/2;
		
		if(arr[mid] == key)
		{
			printf("The key is found at %d",(mid+1));
			status=1;
			break;
		}                          // 1,2,3,4,5,6,7,8
		else if(arr[mid] > key)
		{
			high = mid-1;
		}
		else{
			low = mid+1;
		}
	}
	if(status==0){
		printf("The Key is not found");
	}
}
