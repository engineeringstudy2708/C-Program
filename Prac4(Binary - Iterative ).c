#include<stdio.h>

int main()
{
	int size;
	printf("Enter the Array size: ");
	scanf("%d",&size);
	
	int Array[size],key,i;
	printf("Condition: Enter the Sorted Array Only .\n");
	printf("Enter the Array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&Array[i]);
	}
	
	printf("Enter the Key\n:");
	scanf("%d",&key);
	
	//Binary Search Logic
	int low=0,high=size-1,key_pos,mid;
	
	while(low<=high)
	{
	   mid = (low+high)/2;
	   
	   if(Array[mid] == key)
	   {                        
	   	 key_pos = mid;
	   	 break;
	   }
	   else if(Array[mid] > key)
	   {
	   	 high = mid - 1;
	    }
		else
		{
			 low = mid+1;
		}	
	}
	
	printf("The element index id %d",key_pos);
	
	return 0;
}














/* int l=0;
	int h=size-1;
	
	int mid,pos;
	while(l<=h)
	{
		mid = (l+h)/2;
		if(A[mid] == key)
		{
		//pos=mid;
		printf("The position is :%d",mid+1);
		break;	
		}
		else if(A[mid] < key)
		{
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	}
	
	//printf("The position is %d",pos);
	*/
