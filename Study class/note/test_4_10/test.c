#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef unsigned int uint;
//int main()
//{
//	unsigned int unm1 = 1;
//	uint num2 = 0;
//
//
//	return 0;
//}

//void test()
//{
//	static int b = 1;//修饰局部变量
//	b++;
//	printf("%d ", b);
//}
//
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	
//	}
//
//	return 0;
//}

//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add();
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}

//标识符常量
#define NUM 100



int main()
{
	printf("%d\n", NUM);
	int n = NUM;
	printf("%d\n", n);
	int arr[NUM] = {0};

	return 0;
}