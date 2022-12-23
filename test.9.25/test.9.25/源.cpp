#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//	char tele[20];
//
//};
//void Print(stu *s1)
//{
//	printf("%s\n", s1->name);
//	printf("%d\n", s1->age);
//	printf("%s\n", s1->id);
//	printf("%s\n", s1->tele);
//
//}
//int main()
//{
//	struct stu s1 = { "肖建华",20,"202208180147","1837997034" };
//	Print(&s1);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 2;
//	float b = 0;
//	b = (float)(1 / a);
//	printf("%f", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
////	int a = 34 / 5;
////	printf("%d\n", a);
////	return 0;
////}
//#include <stdio.h>
//int main()
//{
////	float x;
////	scanf_s("%.1f", &x);
////	printf("%f", x);
////	return 0;
//////}
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf_s("%d,%d", &a, &b);
//    if (a % b == 0)
//    {
//        printf("%d是%d的倍数", a, b);
//    }
//    else if (a % b != 0)
//    {
//        printf("%d不是%d的倍数", a, b);
//    }
//    else if (a!=0 && b == 0)
//    {   
//        printf("除数不能为%d", b);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x, a = 10;
//	scanf_s("%d", &x);
//	if ((x >= -58) && (x <= -40) || (x >= 40) && (x <= 58))
//	{
//		printf("%d", a);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char ch=0;
//    scanf_s("%s", &ch);
//    if (ch >= 'A' && ch <= 'Z')
//    {
//        printf("%c是大写字母", ch);
//    }
//    else if (ch >= '0' && ch <= '9')
//    {
//        printf("%d是数字字符", ch);
//    }
//    else if (ch >= 'a' && ch <= 'z')
//    {
//        printf("%c是小写字母", ch);
//    }
//    else
//    {
//        printf("%c是其他字符", ch);
//    }
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char  ch    ;
//    scanf_s("%c", &ch,50);
//    if (ch >= 'A' && ch <= 'Z')
//    {
//        printf("%c是大写字母", ch);
//    }
//    else if (ch >= '0' && ch <= '9')
//    {
//        printf("%d是数字字符", ch);
//    }
//    else if (ch >= 'a' && ch <= 'z')
//    {
//        printf("%c是小写字母", ch);
//    }
//    else
//    {
//        printf("%c是其他字符", ch);
//    }
//    return 0;
////}
//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	if (a % 4 == 0 && a % 100 != 0 || a%400==0)
//	{
//		printf("366");
//	}
//
//	else
//	{
//		printf("365");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	if (a > 90)
//	{
//		printf("gong xi ni kao le %d fen!", a);
//	}
//	else
//	{
//		printf("kao le %d fen bie xie qi!", a);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int A, B;
//	char ch;
//	scanf_s("%d%c%d", &A, &ch, &B);
//	if (B != 0)
//	{
//		switch (ch)
//		{
//		case'+':printf("%d+%d=%d", A, B, A + B); break;
//		case'-':printf("%d-%d=%d", A, B, A - B); break;
//		case'*':printf("%d*%d=%d", A, B, A * B); break;
//		case'/':printf("%d/%d=%d", A, B, A / B); break;
//		case'%':printf("%d%%%d=%d", A, B, A % B); break;
//		default:printf("ERROR"); break;
//		}
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	float price;
//	scanf_s("%f", &price);
//	if (price >= 400 && price < 800)
//	{
//		printf("最终价格是:%.2f", price - 100);
//	}
//	else if (price >= 800 && price < 1200)
//	{
//		printf("最终价格是:%.2f", price - 250);
//	}
//	else if (price >= 1200)
//	{
//		printf("最终价格是:%.2f", price - 400);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a, b, c, d;
//	scanf_s("%d,%d,%d,%d", &a, &b, &c, &d);
//	if (a > b && a > c && a > d)
//	{
//		printf("最大值是%d", a);
//	}
//	else if (b > a && b > c && b > d)
//	{
//		printf("最大值是%d", b);
//	}
//	else if (c > a && c > b && c > d)
//	{
//		printf("最大值是%d", c);
//	}
//	else if (d > a && d > b && d > c) 
//	{
//		printf("最大值是%d", d);
//	}
//
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	double i, x=1, pi = 0;
//	for (i = 1; 1 / (double)i <= 1e-4; i += 2)
//	{
//		pi += x / (double)i;
//		x = -x;
//	}
//	printf("%lf\n", pi / 4);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 2, b = -1, c = 2;
//	if (a < b)
//	{
//	if (b < 0)
//		c = 0;
//	else c++;
//	}
//	printf("%d\n", c);
//	return 0;
//}
//在这里给出函数被调用进行测试的例子。例如：

//#include <stdio.h>
//int max = 0, min = 0, total = 0;
//int fun(void);
//
//int main()
//{
//	int n;
//	n = fun();
//	n = fun();
//	n = fun();
//	printf("max=%d min=%d total=%d ave=%.1f", max, min, total, (float)total / n);
//
//}
//
///* 请在这里填写答案 */
//int fun(void)
//{
//	int a = 0;
//	static int n = 0;
//	while (1)
//	{
//		scanf("%d", &a);
//		if (a > 0)
//		{
//			total += a;
//			n++;
//			if (a > max)
//			{
//				max = a;
//			}
//			if (a < min)
//			{
//				min = a;
//			}
//
//		}
//		else
//		{
//			break;
//		}
//	}
//	return n;
//}
	//#include <stdio.h>
	//int main()
	//{
	//	int i = 0;
	//	int min = 0;
	//	int weizhi = 0;
	//	int j = 0;
	//	int arr[5];
	//	int tmp = 0;
	//	for (i = 0; i < 5; i++)
	//	{
	//		scanf_s("%d ", &arr[i]);
	//	}
	//	for (i = 0; i < 5; i++)
	//	{
	//		if (arr[j] > arr[i])
	//		{	
	//			j = i;	
	//		}
	//	}
	//	tmp = arr[j];
	//	arr[j] = arr[0];
	//	arr[0] = tmp;
	//	min = arr[0];
	//	weizhi = j;
	//	for (i = 0; i < 5; i++)
	//	{
	//		printf("%4d", arr[i]);
	//	}
	//	printf("\n");
	//	printf("min=%d,weizhi=%d", min, weizhi);
	//return 0;
	//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int x = 0;
//	scanf("%d", &n);
//	int arr[11];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	scanf("%d", &x);
//	for (i = 0; i < n; i++)
//	{
//		if (x == arr[i])
//		{
//			printf("%d", i);
//		}
//		if (i == 11)
//		{
//			printf("Not Exist!");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int t, m, i, j, k, b;
//	scanf("%d", &t);
//	for (k = 1; k <= t; k++)
//	{
//		b = 1;
//		scanf("%d", &m);
//		int a[m][m];
//		for (i = 0; i < m; i++)
//			for (j = 0; j < m; j++)
//				scanf("%d", &a[i][j]);
//		for (i = 0; i < m; i++)
//			for (j = 0; j < m; j++)
//				if (i > j && a[i][j] != 0)
//				{b = 0;}
//		if (b == 1){printf("YES\n");}
//		else{printf("NO\n");}
//	}
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	printf("%d", sizeof(unsigned long));
//	return 0;
//}
//
//#include<stdio.h>
//int main() {
//	int a[100][100], i, j, m, n, sum1=0, sum2=0, sum3=0, sum4=0;
//	scanf("%d %d", &m, &n);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < n; j++)
//			scanf("%d", &a[i][j]);
//	for (j = 0; j < n; j++) sum1 += a[0][j];
//	//for(i=0;j<n;j++)sum1+=a[0][j];
//	for (j = 0; j < n; j++) sum2 += a[m - 1][j];
//	//for(i==m-1;j<n;j++)sum2+=a[n-1][j];
//	for (i = 0; i < m; i++) sum3 += a[i][0];
//	//for(j=0;i<m;i++)sum3+=a[i][0];
//	for (i = 0; i < m; i++)sum4 += a[i][n - 1];
//	//for(j==n-1;i<m;i++)sum4+=a[i][m-1];
//	printf("%d", sum1 + sum2 + sum3 + sum4 - a[0][0] - a[0][n - 1] - a[m - 1][0] - a[m - 1][n - 1]);
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = 0;
//	int i = 0;
//	int j = 0;
//	for (i = pow(10,n-1); i <= pow(10,n)-1; i++)
//	{
//		num = 0;
//		j = i;
//		while (j)
//		{
//			num += pow(j % 10, n);
//			j = j / 10;
//		}
//		if (num == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	const char* p = "abcdefg";
//	printf("%s\n", p);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 2, b = -1, c = 2;
//	if (a < b)
//		if (b < 0)c = 0;
//		else c++;
//	printf("%d ", c);
//	return 0;
////}
//#include <stdio.h>
//struct stu
//{
//	char name[10];
//	char tel[20];
//	int age;
//}s1;
//int main()
//{
//	//struct stu s1 = { "肖建华","18379957034",15 };
//	//struct stu* p = &s1;
//	//printf("%s", (*p).name);
//	//scanf("%s", s1.name);
//	//printf("%d %d", s1.age,&s1.age);
//	//printf("%d %d", &s1, s1);
//	return 0;
////}
//struct stu
//{
//	char name[10];
//
//};
////#include <stdio.h>
//#include <stdio.h>
//struct stu {
//	char name[9];
//	int age;
//}p[5] = { "John",18,"Iris",19,"Mary",17,"Jack",16 };
//int main()
//{
//	printf("%s", p[2].name);
//	return 0;
////}
//#include <stdio.h>
//enum Color
//{
//	RED=1,
//	GREEN=2,
//	BLUE=4
//};
//int main()
//{
//	enum Color clr = GREEN;
//	printf("%d\n", clr);
//	//clr = 5;
//	//printf("%d\n", clr);
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#define N 10
//int n = N;
//void InsertValue(int arr[], int ele);//插入
//void Sort(int arr[]);//冒泡排序
//void CreatRandData(int arr[]);//随机生成十个三位数
//void print(int arr[]);//打印(输出)
//int main() 
//{
//	int a[ N + 1];
//	int x;
//	CreatRandData(a);
//	print(a);
//	Sort(a);
//	print(a);
//	printf("任意输入一个整数\n");
//	scanf("%d", &x);
//	InsertValue(a, x);
//	print(a);
//	return 0;
//}
//void CreatRandData(int arr[])
//{
//	int i = 0;
//	srand((int)time(NULL));
//	for (i = 0; i < N; i++)
//	{
//		arr[i] = rand() % (1000 - 100) + 100;
//	}
//}
//void Sort(int arr[])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < N - 1; i++)
//	{
//		int temp = 0;
//		for (j = 0; j < N - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//void InsertValue(int arr[], int ele)
//{
//	int j = 0;
//	for (j = n - 1; j >= 0; j--) 
//	{
//		if (arr[j] > ele)
//		{
//			arr[j + 1] = arr[j];
//		}
//		else
//		{
//			break;
//		}
//	}
//	n++;
//	arr[j + 1] = ele;
//}
//void print(int arr[])
//{
//	int i = 0;
//	printf("\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d,", arr[i]);
//	}
//	printf("\n");
//}
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	int n = 0;
//	double sum = 0;
//	scanf("%d", &n);
//	while (n != 0)
//	{
//		sum += i;
//		i++;
//		n--;
//	}
//	printf("%.0lf", sum);
//	return 0;
//}