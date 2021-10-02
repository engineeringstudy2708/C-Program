#include <stdio.h>

struct personal{
    char Name[10];             // int => interger
    char Dep[10];              // struct personal --> char,char,int
    int salary;                
}s1,s2;

void main()
{
    //struct personal s1;  // int s1 = 0; 
    //struct personal s2;   
    
    printf("Please enter the Details of Student1:\n 1.Name 2.Dep 3.Salary \n");
    scanf("%s",&s1.Name);
    scanf("%s",&s1.Dep);
    scanf("%d",&s1.salary);
    
    printf("Please enter the Details of Student2:\n 1.Name 2.Dep 3.Salary \n");
    scanf("%s",&s2.Name);
    scanf("%s",&s2.Dep);
    scanf("%d",&s2.salary);
    
    printf("Name: %s\n",s1.Name);
    printf("Department: %s\n",s1.Dep);
    printf("Salary: %d\n",s1.salary);
    
    printf("Name: %s\n",s2.Name);
    printf("Department: %s\n",s2.Dep);
    printf("Salary: %d\n",s2.salary);
    
}

