
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
////}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//char arr[5] = { 'a', 'b', 'c' };//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
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
//	int b = a++;//���ú��
//	//int a = 10;
//	//int b = ++a;//�ȼӺ���
//	printf("%d\n%d\n", b, a);
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14 ;//ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}
//


//int main()
//{
//	int a = 2;
//	int b = 0;//�루������
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
//	int c = a || b;//�򣨲�����
//	printf("%d\n", c);
//	return 0;
////}
////
//
////��Ŀ����������
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
//    max = a > b ? a : b;//���ϴ���ȼ�
//	printf("%d\n", max);
//
//	return 0;
//}
////
//
////���ű��ʽ�����Ÿ�����һ�����ʽ
//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//���ű��ʽ���Ǵ����������μ����
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[5]);//�±�
//
//	return 0;
//}


////�������ò�����
//int main()
//{
//	//���ú�����ʱ�򣬺�����ߵģ������Ǻ������ò�����
//	printf("hehe\n");
//	printf("%d\n", 100);
//
//	return 0;
//}

//
//int main()
//{
//	//����Ƶ��ʹ�õ����ݣ�����ڼĴ���
//	register int num = 100;
//	return 0;
//}


//define��includeΪԤ����ָ��
//
//typedef unsigned int u_int;//�ض���
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
//	static int a = 1;//static���ξֲ��������ı��˾ֲ��������������ڣ������ϸı��˱����Ĵ洢���ͣ�
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
//extern int g_val;//ȫ�ֱ��������������ж���ʹ��
////static���ε�ȫ�ֱ���ֻ�����Լ�����Դ�ļ��ڲ�ʹ��
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

//#define max 100000//���峣��

//int main()
//{
//	printf("%d", max);
//	return 0;
//}

//#define ADD(X,Y) ((X)+(Y))//�����
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


//ָ�� ���� ��ַ
//int main()
//{
//	int a = 0;
//
//	int* pa = &a;
//
//	*pa = 20;//�����ò��� *pa����ͨ��pa��ߵĵ�ַ�ҵ�a
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
//	//ָ���С��ͬ
//	//32λ 32bit-4byte
//	//64λ 64bit-8byte
//	return 0;
//}
//
//����ѧ������
//struct stu
//{
//	char name[20];//��Ա����
//	int age;
//	double score;
//};
//
////����������
//struct book
//{
//	char name[20];
//	float price;
//	char id[30];
//};
//
//int main()
//{
//	struct stu s = { "����", 20, 85.5 };//�ṹ��Ĵ������ʼ��
//	printf("1��%s %d %lf\n", s.name, s.age, s.score);//�ṹ�����.��Ա����
//
//	struct stu* ps = &s;
//	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps-> score);//��ͷ������Ϊ�ṹ��ָ�룬�Ҳ����Ϊ��Ա������
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