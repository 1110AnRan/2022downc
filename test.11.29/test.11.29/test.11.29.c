#define _CRT_SECURE_NO_WARNINGS 1
//距离函数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float arr[3][2] = { 0 };
//	int i = 0;
//	int j = 0;
//	float sum = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			scanf("%f", &arr[i][j]);
//		}
//	}
//	sum += sqrt((arr[0][0] - arr[1][0]) * (arr[0][0] - arr[1][0]) + (arr[0][1] - arr[1][1]) * (arr[0][1] - arr[1][1]));
//	sum += sqrt((arr[0][0] - arr[2][0]) * (arr[0][0] - arr[2][0]) + (arr[0][1] - arr[2][1]) * (arr[0][1] - arr[2][1]));
//	sum += sqrt((arr[1][0] - arr[2][0]) * (arr[1][0] - arr[2][0]) + (arr[1][1] - arr[2][1]) * (arr[1][1] - arr[2][1]));
//	printf("%.2f", sum);
//	return 0;
//}
//质数筛
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int arr[101] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > 1)
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
//闰年展示
//#include <stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int count = 0;
//	int arr[344]= { 0 };
//	scanf("%d %d", &x, &y);
//	int i = 0;
//	int j = 0;
//	for (i = x; i <= y; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			count++;
//			arr[j] = i;
//			j++;
//		}
//	}
//	printf("%d\n", count);
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//歌唱比赛
//#include <stdio.h>
////float judeg_ave(int (*arr)[], int sz)
////{
////			
////}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int arr[100][20] = { 0 };
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		//float ret =judge_ave(arr,m);
//		for(j)
//	}
//	return 0;
//}
//计算阶乘
//#include <stdio.h>
//int fun(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fun(n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//	printf("%d", ret);
//	return 0;
//}
//赦免战俘
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
	//int n = 0;
	//scanf("%d", &n);
	//double  num = pow(2, n);
	//int arr[1024][1024] = { 0 };
	//int i = 0;
	//int j = num - 1;
	//while (j >= 0)
	//{
	//	arr[i][j] = 1;
	//	i++;
	//	j--;
	//}
	//for (i = 0; i <= num - 1; i++)
	//{
	//	for (j = 0; j <= num - 1; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}
//	return 0;
//}
//#include <stdio.h>
//#include <math.h>
//#define m 100
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = pow(2, n);
//	int arr[m][m] = { 0 };
//	//int i = 0;
//	//int j = num - 1;
//	////副对角线
//	//while (j >= 0)
//	//{
//	//	arr[i][j] = 1;
//	//	i++;
//	//	j--;
//	//}
//	////最后一行
//	//i = num - 1;
//	//j = 0;
//	//while (j <= num - 1)
//	//{
//	//	arr[i][j] = 1;
//	//	j++;
//	//}
//	////最后一列
//	//i = num - 1;
//	//j = num - 1;
//	//while (i >= 1)
//	//{
//	//	arr[i][j] = 1;
//	//	i--;
//	//}
//	////
//	int i = 0;
//	int j = num - 1;
//	while (i <= num/2)
//	{
//		arr[i][j] = 1;
//		arr[i + num / 2][j - num / 2] = 1;
//		arr[i + num / 2][j] = 1;
//		i++;
//		j--;
//	}
//	i = 1;
//	j = num - 1;
//	while (i <= num/2)
//	{
//		arr[i][j] = 1;
//		arr[i + num / 2][j] = 1;
//		arr[i + num / 2][j - num / 2] = 1;
//		i++;
//	}
//	i = num / 2 - 1;
//	j = num / 2 + 1;
//	while (j <= num - 2)
//	{
//		arr[i][j] = 1;
//		arr[i + num / 2][j - num / 2] = 1;
//		arr[i + num / 2][j] = 1;
//		j++;
//	}
//	//printf("%d %d", i, j);
//	for (i = 0; i <= num - 1; i++)
//	{
//		for (j = 0; j <= num - 1; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include <stdio.h>
//#define n 1000
//#include <stdlib.h>
//struct stu
//{
//	char name[8];
//	int grades[3];
//	int total;
//}s[n];
//int cmp_by_total(const void* e1, const void* e2)
//{
//	return (((struct stu*)e2)->total - ((struct stu*)e1)->total);
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%s %d %d %d", s[i].name, &s[i].grades[0], &s[i].grades[1], &s[i].grades[2]);
//		s[i].total = s[i].grades[0] + s[i].grades[1] + s[i].grades[2];
//	}
//	qsort(s, m, sizeof(s[0]), cmp_by_total);
//	printf("%s %d %d %d", s[0].name, s[0].grades[0], s[0].grades[1], s[0].grades[2]);
//	return 0;
//}