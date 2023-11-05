
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

//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	if (m % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//
//
//int main()
//{
//	int age = 180;
//
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age < 26)
//		printf("青年\n");
//	else if (age >= 26 && age < 40)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("老不死\n");
//	
//	
//	if (age >= 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能谈对象\n");
//	}
//	return 0;
// }



//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	return 0;
//}


//输出1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期四\n");
//		break;
//	case 6:
//		printf("星期五\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	default:
//		printf("请输入1-7的数字\n");
//		break;
//	}
//	//case决定入口，break决定出口
//	return 0;
//}


//int main()
//{
//	int i = 1;
	//在while循环中，break用于永久的终止循环
	
	//在while循环中，continue用于跳过本次循环conticue后面的代码
	//直接去判断部分，看是否进行下一次循环


	/*while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}*/


	/*while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}*/

	/*return 0;
}*/

//EOF - end of file - 文件结束标志
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	//ctrl+z - getchar 读取结束
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认密码(Y/N):>");
//	//清理缓冲区
//	//getchar();//处理'\n'
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//
//		putchar(ch);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d\n", i);
//	}
//	return 0;
//}
//不可在循环体内修改循环变量


//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//int main(0)
//{
//	for (;;)
//	{
//		//判断部分的省略 - 判断部分恒为真 - 易死循环
//		printf("hehe\n");
//	}
//
//
//	return 0;
//})

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//计算n的阶乘
//int main()
//{ 
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
// }

//计算1！+2！+……+10！
//int main()
//{ 
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//计算n的阶乘之前，将ret的值初始化为1
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
// }
//优化算法
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n
//折半/二分查找法
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素个数
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("已找到：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
// }

//#include <windows.h>
//int main()
//{
//	char arr1[] = "welcome to synu!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


int main()
{
	int i = 0;
	char password[20] = { 0 };
	//假设正确密码为字符串"123456"
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功");
		    break;
		}
		else {
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	
	return 0;
}