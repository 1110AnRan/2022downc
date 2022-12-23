#define _CRT_SECURE_NO_WARNINGS 1
//D
//#include <stdio.h>
//int main()
//{
//	printf("I like ACM");
//	return 0;
//}
//A
//#include <stdio.h>
//int main()
//{
//	long a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c)!=EOF)
//	{
//
//		if (a == b + c || b == a + c || c == a + b)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}
//B
//#include <stdio.h>
//int main()
//{
//	int t = 0;
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	scanf("%d", &t);
//	for (i = 0; i < t; i++)
//	{
//		scanf("%d", &j);
//		for (n = 0; n < j; n++)
//		{
//			int arr[j] = { n };
//		}
//	}
//	return 0;
//}
////C
//#include <stdio.h>
//int main()
//{
//	char arr[8][8] = { 0 };
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < 8; i++)
//	{
//		scanf("%d", &arr[i] + 1);
//	}
//	for (i = 0; i < 8; i++)
//	{
//		for (j = 0; j < 8; j++)
//		{
//			if (arr[i][j] == 'R')
//			{
//				count++;
//			}
//		}
//		if (count == 8)
//		{
//			printf("R");
//		}
//		for (j = 0; j < 8; j++)
//		{
//			if (arr[i][j] == 'B')
//			{
//				count++;
//			}
//		}
//		if (count == 8)
//		{
//			printf("B");
//		}
//	}
//	return 0;
//}
//H
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int t;
//	int n;
//	int m = 0;
//	int i = 0;
//	int j = 0;
//	double count = 0;
//	scanf("%d", &t);
//	for (i = 0; i < t; i++)
//	{
//		scanf("%d", &n);
//		count = 0;
//		m = n;
//		while (m != 0)
//		{
//			if (m / 10 != 0)
//			{
//				count++;
//			}
//			m = m / 10;
//		}
//		printf("%.0f\n", n - pow(10, count));
//	}
//	return 0;
//}

