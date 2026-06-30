//fputc()and fgetc()

//#include<stdio.h>
//int main()
//{
//	FILE *ab;
//	ab=fopen("file.txt","w");
//	fputc('a',ab);
//	fclose(ab);
//}


#include<stdio.h>
int main()
{
	FILE *ab;
	char s;
	ab=fopen("file.txt","r");
	while((s=fgetc(ab))!=EOF)
	{
		printf("%c",s);
	}fclose(ab);
}
