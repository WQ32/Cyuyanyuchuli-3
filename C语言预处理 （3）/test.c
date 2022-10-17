#include <stdio.h>

// C语言
// C语言实现数据结构
// C++
// 高级数据结构
// Linux系统: 网络+网络编程
// MySQL

//// define定义常量，后面要不要加分号?
//
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//	// 结果可能能打印出来
//	// #define MAX 100;
//	// 实则它是错的,他其实相当于 MAX;;就多了；这个空语句
//	// 它的值相当于是 100；放在一些程序里是会报错的，语法错误
//	return 0;
//}

////定义宏    -  不会出现递归
//
//#define SQUARE(X) X*X
//
//int main()
//{
//	int ret = SQUARE(5);   // 这里等价于 5*5
//	printf("%d\n", ret);   // 结果25
//	return 0;
//}

//// 宏是将传的参数完全替换，而不是传参
//
//#define SQLARE(X) X*X
//#define SQLARET(X) X+X
//int main()
//{
//	int ret = SQLARE(5 + 1);
//	printf("%d\n", ret);      // 结果为 11
//	// 把5+1整体传过去，就变成了 5+1*5+1 = 11
//	//要得到 6*6
//	//就改变宏  #define SQLARE(X) (X)*(X)
//	int a = 5;
//	int ret1 = 10 * SQLARET(a);
//	printf("%d\n", ret1);      // 结果为 55
//	//把 a 传过去后，ret1 = 10 * 5 + 5
//	//要得到100
//	//就改变宏  #define SQLARET(X) ((X)+(X))
//	return 0;
//}

// 注意：当预处理器搜索#define定义的符号时，字符串常量的内容并不被搜索
// 如果要替换的内容是表达式，要注意使用括号


//// 把宏的参数插入字符串中  
//// #他会将宏要替换的参数形成字符串，可以插入到字符串中
//// 这里 #X 就形成 "a"
//
//#define PRINT(X) printf("the value of "#X" is %d\n",X)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	// 打印  the value of a is 10
//	PRINT(b);
//	//打印   the value of b is 20
//	return 0;
//}

// ##可以把位于他两边的符号合成一个符号，允许从分离的片段中创建标识符

#define CAT(X,Y) X##Y
int main()
{
	int wangzhang = 99;
	// printf("%d\n", wangzhang);
	printf("%d\n", CAT(wang, zhang));
	return 0;
}