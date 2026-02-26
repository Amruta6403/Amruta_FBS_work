//Write a C program to add two integers and display the result


//no argument no return type


//#include <stdio.h>
//void add()
//{
//	int a,b,sum;
//	printf("enter the value of a and b");
//	scanf("%d%d",&a ,&b);
//	sum=a+b;
//	printf("sum=%d",sum);
//}
//int main()
//{
//
//
//add();
//
//return 0;
//}
//


//Arguments, No Return Value

//#include <stdio.h>
//
//void add(int a, int b)
//{
//    int sum = a + b;
//    printf("Sum = %d", sum);
//}
//
//int main()
//{
//    int x, y;
//    printf("Enter two numbers: ");
//    scanf("%d %d", &x, &y);
//
//    add(x, y);
//    return 0;
//}





//No Arguments, Return Value
//#include <stdio.h>
//
//int add()
//{
//    int a, b;
//    printf("Enter two numbers: ");
//    scanf("%d %d", &a, &b);
//
//    return a + b;
//}
//
//int main()
//{
//    int result = add();
//    printf("Sum = %d", result);
//    return 0;
//}


//with argument with return type


#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    result = add(x, y);
    printf("Sum = %d", result);

    return 0;
}

