#define _CRT_SECURE_NO_WARNINGS 1
//#define N 100
//#include <stdio.h>
//int main()
//{
//	//int arr[N][N] = { 0 };
//	//int n = 0;
//	//scanf("%d", &n);
//	//int i = 0;
//	//int j = 0;
//	//int count = 0;
//	//for (count = 0; count < n / 2; count++)
//	//{
//	//	for (i = 0; i < n; i++)
//	//	{
//	//		for (j = 0; j < n; j++)
//	//		{
//	//			if (arr[i][j] == 0)
//	//			{
//	//				arr[n - i - 1][2 - j - 1] = 1;
//	//			}
//	//		}
//	//	}
//	//}
//	//for (i = 0; i < n; i++)
//	//{
//	//	for (j = 0; j < n; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//
//	return 0;
//}
// 5
//#include <stdio.h>
//int main()
//{
//	char ch[10000];
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < n; i++) 
//	{
//		scanf("%c", &ch[i]);
//		if (ch[i] == 'D')
//		{
//			count++;
//		}
//	}
//	if (count > n / 2)
//	{
//		printf("Dream");
//	}
//	else if (count == n / 2)
//	{
//		printf("Friendship");
//	}
//	else
//	{
//		printf("Whohowlong");
//	}
//	return 0;
//}
// 9
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch1[100];
//	char ch2[] = "hello";
//	char* p1 = ch1;
//	gets(ch1);
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int len1 = strlen(ch1);
//	for (i = 0; i < len1; i++)
//	{
//		if (ch1[i] == ch2[j])
//		{
//			count++;
//			j++;
//		}
//	}
//	if (count ==  5)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}
// 7
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr1[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr1[j] >= arr1[i] - 5)
//			{
//				arr2[i]++;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", arr2[i]);
//		if (i != n - 1)
//		{
//			printf(" ");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n, m, a, b;
//	scanf("%d %d %d %d", &n, &m, &a, &b);
//	int money1 = a;
//	int money2 = b;
//	int ret1 = 1;
//	int ret2 = m;
//	while (ret1 < n)
//	{
//		ret1 += 1;
//		money1 += a;
//	}
//	while (ret2 < n)
//	{
//		ret2 += m;
//		money2 += b;
//	}
//	if (money1 > money2)
//	{
//		printf("%d", money2);
//	}
//	else if (money1 < money2)
//	{
//		printf("%d", money1);
//	}
//	else
//	{
//		printf("%d", money1);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[3][3] = { 0 };
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("YES");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int t = 0;
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	int ret = 0;
//	scanf("%d", &t);
//	int i = 0;
//	int j = 1;
//	for (i = 0; i < t; i++)
//	{
//		count = 0;
//		ret = 0;
//		scanf("%d", &n);
//		m = n;
//		while (m)
//		{
//			count++;
//			m = m / 10;
//		}
//		for (j = 1; j <= count; j++)
//		{
//			ret += j;
//		}
//		if (n % 10 == 1)
//		{
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("%d\n", ret += (n % 10 - 1) * 10);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#define N 1000
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[N][N] = { 0 };
//	int i = 0;
//	int j = 0;
//	int num = 0;
//	while (j < n)
//	{
//		arr[n - i - 1][j] = 1;
//		j++;
//	}
//	j = 0;
//	for (num = 1; num <= n / 2; num++)
//	{
//		while (i < n - 1)
//		{
//			arr[i + 1][j] = 1;
//			i++;
//		}
//		i = 0;
//		j += 2;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}