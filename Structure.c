#include <stdio.h>

struct personal{
    char Name[10];             // int => interger
    char Dep[10];              // struct personal --> char,char,int
    int salary;                
};

void main()
{
    printf("Enter the Number of Students");
    int size,i;
    scanf("%d",&size);
    
    struct personal student[size]; 
    
    for(i=0;i<size;i++)
    {
    printf("Please enter the Details of Student %d :\n 1.Name 2.Dep 3.Salary \n",i);
    scanf("%s",&s[i].Name);
    scanf("%s",&s[i].Dep);
    scanf("%d",&s[i].salary);
    }
   
     for(i=0;i<size;i++)
    {
    printf("Please enter the Details of Student %d :\n 1.Name 2.Dep 3.Salary \n",i);
   printf("Name: %s\n",s[i].Name);
    printf("Department: %s\n",s[i].Dep);
    printf("Salary: %d\n",s[i].salary);
    }
    
    
    
}

