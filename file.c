//#include<stdio.h>
//int main()
//{
//	FILE *ps;
//	ps=fopen("data.txt","w");
//	fprintf(ps, "hello i am rohan garud");
//	fclose(ps);
//}


// fscanf ()

//#include<stdio.h>
//int main()
//{
//	FILE *ps;
//	char data[100];
//	ps=fopen("data.txt","r");
//	while(fscanf(ps," %s ",data)!=EOF)
//	{
//	printf("%s ",data);
//	}
//			
//	rewind(ps);
//	while(fscanf(ps, "%s",data)!=EOF){
//    	printf("%s",data);
//	}
//}


#include<stdio.h>
int main()
{
	FILE *ps;
	ps=fopen("sy.txt","w");
	putc('h',ps);
	putc('e',ps);
	putc('l',ps);
	putc('l',ps);
	putc('o',ps);
}

