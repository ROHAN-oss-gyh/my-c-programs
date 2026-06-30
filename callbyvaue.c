#include<stdio.h>
int display(int p,int q)
{
	printf("\nbefore function call p=%d",p);
	printf("\nbefore function call q=%d",q);
	
	p=p+1;  //4+1=5
	q=q+1;  //5+1=6
	
	
	printf("\n after updation p=%d",p);
	printf("\n after updation q=%d",q);
}
int main()
{
	int a=4;
	int b=5;
	
	printf("\nbefore fun call a=%d",a);
	printf("\nbefore fun call b=%d",b);
	
	display(a,b);     // function call by a, b
	
	printf("\nafter updation a=%d",a);
	printf("\nafter updation b=%d",b);

}
