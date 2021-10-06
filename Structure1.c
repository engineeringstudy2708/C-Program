#include <stdio.h>

struct personal{
    char Name[10];             
    char Dep[10];            
    int salary;                
};

void main()
{
	int size;
	printf("Enter the size of person:");
	scanf("%d",&size);
	
    struct personal person[size];
    int i;
    
    for(i=0;i<size;i++)
    {
        printf("Please enter the details of students %d\n",i+1);
        scanf("%s",&person[i].Name);
        scanf("%s",&person[i].Dep);
        scanf("%d",&person[i].salary);
    }
    
    printf("The Details of Person are: \n");
    for(i=0;i<size;i++)
    {
        printf("\nThe details of students %d",i+1);
        printf("\n\t %s",person[i].Name);
        printf("\n\t %s",person[i].Dep);
        printf("\n\t %d",person[i].salary);
    }
    
}

