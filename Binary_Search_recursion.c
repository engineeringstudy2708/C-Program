#include<stdio.h>
int Bsearch(int arr[],int low,int high,int key)
{
	int mid = (low+high)/2;
	
	if(arr[mid] == key)
	   return mid;
	else if(arr[mid] > key)
	   Bsearch(arr,low,mid-1,key);
	else
	   Bsearch(arr,mid+1,high,key);
}
int main()
{
	int key,low=0,high=0,mid=0;
	int arr[8]={1,2,3,4,5,6,7,8};
	high = 7; // array.length - 1;
	
	printf("Enter the value to be search : ");
	scanf("%d",&key);
	
	int pos = Bsearch(arr,low,high,key);
	
	printf("The pos of element is %d",(pos+1));
}
