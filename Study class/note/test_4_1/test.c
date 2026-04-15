#define _CRT_SECURE_NO_WARNINGS

//1.字面常量
//2.const修饰的常变量
//define定义的标识符常量
//4.枚举常量
#include <stdio.h>
//
//int main()
//{
//	30;
//	3.14;
//	'w';//字符
//	"abc";
//	const int a = 10;//在C语言中，const修饰的a，本质是变量，但是不能直接修改，有常量的属性	。
//	a = 20;
//	printf("%d\n", a);//20
//
//	const int n = 10;
//	int arr[10] = {0}；//不能当常量来使用	
//
//	return 0;
//}	


//#define MAX 100
//#define STR "abcdef"
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	MAX = 200;//err 标识符常量不能被修改
//	return 0;
//}

//枚举常量
//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
////性别
//enum SEX
//{
//	MALE,//枚举常量
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	//三原色
//	//Red Green Blue
//	int num = 10;
//	enum Color c = RED;
//	MALE = 30;//err
//	GREEN = 20;//err	
//
//	return 0;
//}
//

#include <string.h>
//int main()
//{

	//char 字符类型 
	//'a' 
	//char ch = 'w';
	//字符串
	//C语言中有没有字符串类型呢？  - 没有
	//char arr1[] = "abcdef";	
	//char arr2[] = { 'a','b','c','d','e','f','\0' };

	//int len = strlen("abc");//求字符串长度的一个函数，string length
	//printf("%d\n", len);

	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	
	//return 0;
//} 


//转义字符
//三字母词
//??) --> ]
//??( --> [

//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//%zu - 打印sizeof的返回值

//int main()
//{
//	//printf("%s\n","(are you ok??)");
//	// (are you ok]   在部分环境会发生
//	//printf("%c\n", '\'');
//
//	//printf("\a");
//	//printf("%d\n",strlen("swt p"));
//	//printf("%s\n", "\628");
//
//
//	return 0;
//}


//选择语句

//int main()
//{
//	int input = 0;
//	printf("是否执行程序 ？");
//		scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("执行完毕\n");
//	}
//	else
//	{
//		printf("未执行\n");
//	}
//	
//	printf("结束进程");
//	return 0;
//}

//执行加载代码
//int main()
//{
//	int line = 0;
//	printf("执行程序\n");
//	
//	while(line<100)
//	{
//		printf("程序执行中... %d%% \n", line);
//		line++;
//	}
//	if(line == 100)
//	{
//		printf("加载完成\n");
//	}
//	else
//	{
//		printf("加载失败\n");
//	}
//
//	printf("结束进程\n");
//
//	return 0;
//}

//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
////求两个任意整数和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//输入
//	scanf("%d %d", &num1, &num2 );
//	//求和
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	//打印
//	printf("%d\n", sum);
//
//
//	return 0;
//}


int main()
{

	int arr[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
		printf("%d\n", arr[10]);


	return 0;
}



