#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int cmp_float(const void * e1, const void * e2) 
//{
//	return (*(int *)e1 - *(int *)e2);
//}
//int main()
//{
//	int arr[5] = { 2 , 1 , 5 , 3 , 4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int i = 0;
//	int j = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] >= 2)
//		{
//			for (j = 2; j < sqrt(arr[i]); j++)
//			{
//				if (arr[i] % j == 0)
//				{
//					break;
//				}
//			}
//			if (j > sqrt(arr[i]))
//			{
//				printf("%d ", arr[i]);
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		for (a = 1; a <= m; a++)
//		{
//			for (b = 1; b <= m; b++)
//			{
//				if (a + b == m && m % a == 0)
//				{
//					/*printf("%d %d\n", a, b);*/
//					//for (j = 0; j <= b / a; j++)
//					//{
//					//	if (a * j == b)
//					//	{
//					//		printf("%d %d", a, b);
//					//	}
//					//}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch1[1001][1000001];
//	char ch2[] = "kfccrazythursdayvme50";
//	int t = 0;
//	scanf("%d", &t);
//	getchar();
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < t; i++)
//	{
//		gets_s(ch1[i]);
//		int len = strlen(ch1[i]);
//		for (j = 0; j < len; j++)
//		{
//
//		}
//
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		sum += 1 * (100 - m)*0.01 - 1 *  m*0.01;
//	}
//	sum = sum * 100;
//	if (sum >= 0)
//	{
//		printf("%0.f", sum);
//	}
//	else
//	{
//		printf("What¡äs up");
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1958; i < 2022; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			sum += 366;
//		}
//		else
//		{
//			sum += 365;
//		}
//	}
//	sum = sum + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 2;
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	int arr[4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (x = 1; x <=arr[0]&&x<=arr[1]&&x<=arr[3]; x++)
//	{
//		for (y = 1; y <=arr[0]&&y<=arr[2]&&y<=arr[3]; y++)
//		{
//			for (z = 1; z <=arr[1]&&z<=arr[2]&&z<=arr[3]; z++)
//			{
//				if (x + y == arr[0] && x + z == arr[1] && y + z == arr[2] && x + y + z == arr[3])
//				{
//					printf("%d %d %d", x, y, z);
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int x = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int z = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		ret = x;
//		for (j = 0; j <= x; j++)
//		{
//			z = j;
//			while (z)
//			{
//				if (z % 10 == 6)
//				{
//					ret--;
//				}
//				z = z / 10;
//			}
//		}
//		printf("%d", ret);
//	}
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}
int fun(int sz1, int sz2)
{
	if (sz1 > sz2)
	{
		return sz2;
	}
	else
	{
		return sz1;
	}
}
int main()
{
	int arr1[100];
	int arr2[100];
	int m, t;
	scanf("%d %d", &m, &t);
	int i = 0;
	int j = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < t; i++)
	{
		scanf("%d", &arr2[i]);
	}
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);
	qsort(arr2, sz2, sizeof(arr2[0]), cmp_int);
	int ret = fun(sz1, sz2);
	int count = 0;
	for (i = 0; i < ret; i++)
	{
		if (arr1[i] >= arr2[i])
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}