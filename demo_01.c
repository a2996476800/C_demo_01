
#include <stdio.h>
///*
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = 0;
//	sum = a + b;
//	printf("sum = %d\n", sum);
//
//
//	return 0;
//}
//*/
//
//int main()
//{
//	//数组
//	int arr[10] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0;
//		i < 10;
//		i++)
//	{
//		scanf("%d", &arr[0]);
//	}
//	//找最大值
//	int max = arr[0];
//	//拿剩下的元素和max比较，大则更新
//	for (i = 1; i < 10;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//输出
//	printf("max = %d\n", max);
//	return 0;
//}
//
//
//
//int main()
//{
//	printf("%s\n""C:\\Project\\C\\demo_01.c");
//	printf("\a\a\a\a\a\a\a");
//	return 0;
////}
//
//
//int main()
//{
//	int input = 0;
//	printf("要好好学习吗(0/1)?:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("拿offer\n");
//	}
//	else
//	{
//		printf("那就去卖红薯吧\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 30001)
//	{
//		printf("敲代码:%d\n", line);
//		line++;
//	}
//	if (line == 30001);
//	{
//		printf("拿好offer\n");
//	}
//	return 0;
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//用函数的方式解决求和

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int num4 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum1 = Add(num1, num2);
//	printf("sum1 = %d", sum1);
//	scanf("%d%d", &num3, &num4);
//	int sum2 = Add(num1, num2);
//	printf("sum2 = %d", sum2);
//	return 0;
////}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//char arr[5] = { 'a', 'b', 'c' };//不完全初始化，剩余默认为0
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int b = a++;//先用后加
//	//int a = 10;
//	//int b = ++a;//先加后用
//	printf("%d\n%d\n", b, a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14 ;//强制类型转换
//	printf("%d\n", a);
//	return 0;
//}
//


//int main()
//{
//	int a = 2;
//	int b = 0;//与（交集）
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}
//
//
//int main()
//{
//	int a = 2;
//	int b = 0;
//	int c = a || b;//或（并集）
//	printf("%d\n", c);
//	return 0;
////}
////
//
////三目条件操作符
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//    max = a > b ? a : b;//与上代码等价
//	printf("%d\n", max);
//
//	return 0;
//}
////
//
////逗号表达式：逗号隔开的一串表达式
//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左向右依次计算的
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//下标
//
//	return 0;
//}


////函数调用操作符
//int main()
//{
//	//调用函数的时候，函数后边的（）就是函数调用操作符
//	printf("hehe\n");
//	printf("%d\n", 100);
//
//	return 0;
//}

//
//int main()
//{
//	//大量频繁使用的数据，存放在寄存器
//	register int num = 100;
//	return 0;
//}


//define与include为预处理指令
//
//typedef unsigned int u_int;//重定义
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}


//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
////}
//
//void test()
//{
//	static int a = 1;//static修饰局部变量，改变了局部变量的生命周期（本质上改变了变量的存储类型）
//	a++;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
////
//
//extern int g_val;//全局变量在整个工程中都可使用
////static修饰的全局变量只能在自己所在源文件内部使用
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//

//extern Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sunm = %d\n", sum);
//
//	return 0;
//}

//#define max 100000//定义常量

//int main()
//{
//	printf("%d", max);
//	return 0;
//}

//#define ADD(X,Y) ((X)+(Y))//定义宏
//
//int main()
//{
//	printf("%d\n", 4*ADD(2, 3));
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%p\n", &a);
//	return 0;
//}


//指针 就是 地址
//int main()
//{
//	int a = 0;
//
//	int* pa = &a;
//
//	*pa = 20;//解引用操作 *pa就是通过pa里边的地址找到a
//
//	printf("%d\n", a);
//
//	return 0;
//}
//

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//指针大小相同
//	//32位 32bit-4byte
//	//64位 64bit-8byte
//	return 0;
//}
//
//创建学生类型
//struct stu
//{
//	char name[20];//成员变量
//	int age;
//	double score;
//};
//
////创建书类型
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct stu s = { "张三", 20, 85.5 };//结构体的创建与初始化
//	printf("1：%s %d %lf\n", s.name, s.age, s.score);//结构体变量.成员变量
//
//	struct stu* ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps-> score);//箭头左侧必须为结构体指针，右侧必须为成员变量名
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int m = Max(a, b);
//	printf("%d\n", m);
//
//	return 0;
//}


int main()
{
	int m = 0;
	scanf("%d", &m);
	if (m % 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}//