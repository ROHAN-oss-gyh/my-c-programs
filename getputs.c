//gets
//puts

#include<stdio.h>
int main()
{
	char str[100];
	printf("enter string");
	gets(str);
	
	
	printf(":");
	puts(str);
	
	int len=strlen(str);

    printf("%s",strupr(str));
    printf("%s",strlwr(str));
    
}

