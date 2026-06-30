//fseek()

//#include<stdio.h>
//int main()
//{
//	FILE *ab;
//   	ab=fopen("data.txt","r");
//   	fputs(" this is mansoon",ab);
//   	
//
//   	
//   	fseek(ab,0,SEEK_END);
//   	fputs("HELLO",ab);
//   	
//   	int length =ftell(ab);
//   	printf("%d","bytes",length);
//   	
//   	
//   	
//   	
//   	fclose(ab);
//	
//}


#include<stdio.h>
int main()
{
	FILE *ab;
   	ab=fopen("data.txt","r");
   	fputs(" this is mansoon",ab);
   	
   	fseek(ab,3,SEEK_SET);
   	fputs("HELLO",ab);
   	
   	fseek(ab,0,SEEK_END);
   	fputs("HELLO",ab);
   	
   	
   	
   	
   	fclose(ab);
	
}
