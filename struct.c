//struct 

//#include<stdio.h>
//struct emp{
//        int id;
//		char name[100];
//			
//}e1;
//int main()
//{
//	e1.id=101;
//	strcpy(e1.name,"xyz");
//	
//	printf("id=%d",e1.id);
//	printf("\n name=%s",e1.name);
//}

#include<stdio.h>
struct emp{
        int id;
		char name[100];
			
}e1;
int main()

{
	

printf("Enter employee ID");
    scanf("%d", &e1.id);
    
    /
    printf("Enter employee name: ");
    scanf("%s", e1.name); 
    
    
    printf("\n--- Employee Details ---");
    printf("\nid=%d", e1.id);
    printf("\nname=%s", e1.name);
    
    return 0;
}
