#define _CRT_SECURE_NO_WARNINGS 1
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
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char arr[5] = { 'a', 'b', 'c' };//不完全初始化，剩余默认为0
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}