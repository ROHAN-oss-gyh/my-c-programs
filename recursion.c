//recursion function

//#include<stdio.h>
//int fact(int p)
//{
//	if(p>1)
//	{
//		return p*fact(p-1);
//	}
//	else{
//		return 1;
//	}
//}
//int main()
//{
//	int n;
//	printf("enter positive number");
//	scanf("%d",&n);
//	printf("%d",fact(n));
//}

// sun no

//#include<stdio.h>
//int sum(int n)
//{
//	if(n>1)
//	{
//	      return n + sum(n - 1);	
//	}
//	else{
//		return 1;
//	}
//}
//int main()
//{
//	int n;
//	printf("enter a number");
//	scanf("%d",&n);
//	printf(" The sum of no is %d is",sum(n));
//	
//}
//

//square no

//#include <stdio.h>
//int Square(int n) 
//{
//    if (n == 0) {
//        return 0;
//    }
//     return Square(n - 1) + (2 * n - 1);
//}
//
//int main() {
//    int number, result;
//    
//    
//    printf("no:");
//    scanf("%d", &number);
//    
//    
//    if (number < 0) {
//        number = number;
//    }
//    
//
//    result = Square(number);
//    
//    printf(" Square : %d\n", result);
//    
//    
//}


//fibonacci
//#include <stdio.h>
//
//int fibonacci(int n)
// {
//    
//    if (n == 0) return 0;
//    if (n == 1) return 1; 
//    return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main() {
//    int p = 6;
//    printf("Fibonacci value position %d is %d\n", position, fibonacci(p));
//    return 0;
//}

// sum of digit no


#include <stdio.h>

int sumOfDigits(int n) {
    
    if (n == 0) {
        return 0;
    }
    
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int no = 9876;
    printf("Sum of digits of %d is %d\n", no, sumOfDigits(no));
    return 0;
}

