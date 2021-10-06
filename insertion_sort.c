#include<stdio.h>

void insertionSort(int * a , int n){
    int key , j;
    for(int i=1 ; i<=n-1 ; i++){    
        key = a[i];
        j=i-1;
        while(j>=0 && a[j]>key){     
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main(){
    int n;
    scanf("%d" , &n);
    int a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &a[i]);
    }
    insertionSort(a , n);
    for(int i=0 ; i<n ; i++){
        printf("%d " , a[i]);
    }
    return 0;
}

// input - 12 2 34 45 1
// output - 1 2 12 34 45
