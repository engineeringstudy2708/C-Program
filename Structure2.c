#include<stdio.h>

struct cricket{              
	char Name[20];
	char Team[10];
	float Bat_avg;
} player[10];

void main(){
	//struct cricket player[10];
	int i;
	for(i=0;i<3;i++)
	{
		printf("Enter the Details of Player %d\n",(i+1));
		scanf("%s",&player[i].Name);
		scanf("%s",&player[i].Team);
		scanf("%f",&player[i].Bat_avg);
	}
	
	printf("The Player Details are: ");
	
	for(i=0;i<3;i++)
	{
		printf("\nThe Details of Player %d",(i+1));
		printf("\n%s",player[i].Name);
		printf("\n%s",player[i].Team);
		printf("\n%f",player[i].Bat_avg);
	}
	
	
}

