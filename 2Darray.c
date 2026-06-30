// 2D array

#include<stdio.h>
int main()
{
	int num[2][3]={{1,2,3},{4,5,6}};
	int r,c;
	for(r=0;r<2;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d",num[r][c]);
		}
		printf("\n");
		
	}
}
