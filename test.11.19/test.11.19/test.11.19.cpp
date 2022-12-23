#define _CRT_SECURE_NO_WARNINGS 1
//int cmp(const void* e1, const void* e2)
//{
//
//}
//qsort(arr, sz, arr[0], cmp);
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[4];
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", ch);
//		if ((ch[0] == 'y' || ch[0] == 'Y' )&& (ch[1] == 'e' || ch[1] == 'E') &&( ch[2] == 's' || ch[2] == 'S'))
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
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[101];
//	int t = 0;
//	int n = 0;
//	int flag = 0;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		scanf("%d", &n);
//		gets_s(ch);
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = j; k < n; k++)
//			{
//				if(ch[j]==0)
//			}
//			//if (ch[j] == 0)
//			//{
//			//	flag += 1;
//			//}
//		}
//		if (flag == n)
//		{
//			printf("0");
//		}
//
//	}
//
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//int main()
//{
//	int n = 7;
//	//scanf("%d", &n);
//	int arr[7];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//	qsort(arr, sz, arr[0], cmp_int);
//	for (int j = 0; j < n; j++)
//	{
//		printf("%d", arr[j]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int  bubble_sort(int arr[], int sz)
//{
//	int sum = 0;
//	int m = 0;
//	int n = 0;
//	for (m = 0; m < sz - 1; m++)
//	{
//		int flag = 1;
//		for (n = m; n < sz - 1 - m; n++)
//		{
//			int temp = 0;
//			if (arr[n] > arr[n + 1])
//			{
//				temp = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = temp;
//				flag = 0;
//				sum += 1;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int t = 0;
//	int n = 0;
//	scanf("%d", &t);
//	int arr[500];
//	for (int i = 0; i < t; i++)
//	{
//		scanf("%d", &n);
//		int min = (n * (n - 1)) / 2 - 1;
//		for (int j = 0; j < n; j++)
//		{
//			scanf_s("%d", &arr[j]);
//		}
//		int ret = bubble_sort(arr, n);
//		if (ret <= min)
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
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int x = 0;
//	int y = 0;
//	x = 3 * n;
//	y = n;
//	if (k >= 3 * n)
//	{
//		printf("0");
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (k == x - 1)
//			{
//				printf("%d", y-n+1);
//			}
//			y++;
//			x--;
//		}
//	}
//	return 0;
////}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int t = 0;
//	int n = 0;
//	int count = 0;
//	int sum = 0;
//	char ch[100]={0};
//	scanf_s("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		scanf_s("%d", &n);
//		for (int m = 0; m < n; m++)
//		{
//			scanf_s("%c",&ch[m]);
//		}
//		int len = strlen(ch);
//		if (ch[len - 1] == '0')
//		{
//			for (int j = 0; j < len - 1; j++)
//			{
//				if (ch[j] != '0')
//				{
//					sum += ch[j];
//					count++;
//				}
//			}
//			printf("%d\n", sum + count);
//		}
//		else
//		{
//			for (int j = 0; j < len - 1; j++)
//			{
//				if (ch[j] != '0')
//				{
//					sum += ch[j];
//					count++;
//				}
//			}
//			printf("%d\n", sum + count + ch[len]);
//		}
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>
int main()
{
	int t = 0;
	int n = 0;
	int i = 0;
	int j = 0;
	int m = 0;
	int sum = 0;
	int count = 0;
	int str = 0;
	char ch[100];
	scanf_s("%d", &t);
	for (i = 0; i < t; i++)
	{
		scanf_s("%d", &n);
		for (j = 0; j < n; j++)
		{
			scanf_s("%c",&ch[j]);
		}
		ch[j] = '\0';
		str = strlen(ch);
		for (m = 0; m < str - 1; m++)
		{
			if (ch[m] != '0')
			{
				sum += ch[m] - 48;
				count++;
			}
		}
		sum += ch[m] - 48 + count;
		printf("%d", sum);
	}
	return 0;
}
//#include <stdio.h>
//int main()
//{
//	char ch[20];
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%c", &ch[i]);
//	}
//	printf("%s", ch);
//	return 0;
//}