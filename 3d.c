#include<stdio.h>
int main()
{
	

int marks[2][3][4]={{{1,2,3},{3,4,5},{5,6,7}},{{7,6,5},{5,4,3},{3,2,1}}};
int a,b,c;

for(a=0;a<2;a++)
{
	for(b=0;b<3;b++)
	{
		for(c=0;c<3;c++){
		printf("%d",marks[a][b][c]);
			
			
		}
		printf("\n");
		
	}
	printf("\n");
	
}
}
