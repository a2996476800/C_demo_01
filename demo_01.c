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
//	//����
//	int arr[10] = { 0 };
//	//����
//	int i = 0;
//	for (i = 0;
//		i < 10;
//		i++)
//	{
//		scanf("%d", &arr[0]);
//	}
//	//�����ֵ
//	int max = arr[0];
//	//��ʣ�µ�Ԫ�غ�max�Ƚϣ��������
//	for (i = 1; i < 10;i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//���
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
//	printf("Ҫ�ú�ѧϰ��(0/1)?:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("�Ǿ�ȥ�������\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 30001)
//	{
//		printf("�ô���:%d\n", line);
//		line++;
//	}
//	if (line == 30001);
//	{
//		printf("�ú�offer\n");
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

//�ú����ķ�ʽ������

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
	//char arr[5] = { 'a', 'b', 'c' };//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}