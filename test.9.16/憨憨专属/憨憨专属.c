#define _CRT_SECURE_NO_WARNINGS 1
//void month_day(int year, int yearday, int* pmonth, int* pday)
//{
//	int i;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0) { days[2] = 29; }
//	for (i = 1; yearday - days[i] > 0; i++)
//	{
//		yearday -= days[i];
//	}
//	*pmonth = i;
//	*pday = yearday;
//}
//#include<stdio.h>
//int main(void)
//{
//	int day, month, year, yearday;
//	scanf("%d %d", &year, &yearday);
//	month_day(year, yearday, &month, &day);
//	printf("%d-%d-%d\n", year, month, day);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main() {
//    int n, len, i, e = 0, f = 0, g = 0;
//    scanf("%d", &n);
//    getchar();
//    while (n--)
//    {
//        char a[81];
//        gets(a);
//        len = strlen(a);
//        e = 0;
//        f = 0;
//        g = 0;
//        if (len < 6)printf("Your password is tai duan le.\n");
//        else if (len >= 6)
//        {
//            for (i = 0; i < len; i++)
//            {
//                if (a[i] >= '0' && a[i] <= '9' || a[i] == '.')e++;
//            }
//            for (i = 0; i < len; i++)   
//            {
//                if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') || a[i] == '.')f++;
//            }
//            for (i = 0; i < len; i++)
//            {
//                if ((!(a[i] >= 'a' && a[i] <= 'z')) && (!(a[i] >= 'A' && a[i] <= 'Z')) && (!(a[i] == '.')))g++;
//            }
//
//            if (e == len)printf("Your password needs zi mu.\n");
//            else if (f == len)printf("Your password needs shu zi.\n");
//            else if (g != 0)printf("Your password is tai luan le.\n");
//            else  printf("Your password is wan mei.\n");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//struct book 
//{
//    char name[50];
//    double price;
//};
//int main() 
//{
//    int n, i;
//    struct book max, min, stu;
//    scanf("%d", &n);
//    getchar();
//    for (i = 1; i <= n; i++)
//    {
//        //scanf("%s %lf\n", stu.name, &stu.price);
//        gets(stu.name);
//        scanf("%lf", &stu.price);
//        getchar();
//        if (i == 1)
//        {
//            max = stu;
//            min = stu;
//        }
//        else if (stu.price > max.price)
//        {
//            max = stu;
//        }
//        else if (stu.price < min.price)
//        {
//            min = stu;
//        }
//    }
//    printf("%.2lf, %s\n", max.price, max.name);
//    printf("%.2lf, %s\n", min.price, min.name);
//    return 0;
//}
//#include<stdio.h>
//struct stduent {
//    char name[50];
//    int a[3];
//    double aveage;
//};
//int main() {
//    int i, n;
//    while (~scanf("%d", &n))
//    {
//        struct stduent  stu[n];
//        for (i = 0; i < n; i++)
//        {
//            scanf("%s %d %d %d", stu[i].name, &stu[i].a[0], &stu[i].a[1], &stu[i].a[2]);
//            stu[i].aveage = (stu[i].a[0] + stu[i].a[1] + stu[i].a[2]) / 3.0;
//        }
//        for (i = n - 1; i >= 0; i--)
//        {
//            if (stu[i].aveage >= 60)
//                printf("%s %d %d %d %.2lf\n", stu[i].name, stu[i].a[0], stu[i].a[1], stu[i].a[2], stu[i].aveage);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//int main() {
//    int i, t, a[5], k=0;
//    for (i = 0; i < 5; i++)
//        scanf("%d", &a[i]);
//    for (i = 0; i < 5; i++)
//    {
//        if (a[i] < a[k])
//        {
//            k = i;
//            t = a[0];
//            a[0] = a[k];
//            a[k] = t;
//        }
//    }
//    for (i = 0; i < 5; i++)
//        printf("%4d", a[i]);
//    printf("\n");
//    printf("min=%d, weizhi=%d", a[0], k);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//struct student
//{
//    char name[30];
//    double s1, s2, s3, ave;
//};
//int main() {
//    int n, i, j, k;
//    struct student t;
//    char f[30];
//    scanf("%d", &n);
//    struct student stu[8];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%s %lf %lf %lf", stu[i].name, &stu[i].s1, &stu[i].s2, &stu[i].s3);
//        stu[i].ave = (stu[i].s1 + stu[i].s2 + stu[i].s3) / 3.0;
//    }
//    for (j = 0; j < n; j++)
//    {
//        for (k = 0; k < n - j - 1; k++)
//        {
//            if ((stu[k].ave < stu[k + 1].ave) && (fabs(stu[k].ave - stu[k + 1].ave)) > 1E-2)
//            {
//                t = stu[k];
//                stu[k] = stu[k + 1];
//                stu[k + 1] = t;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (stu[i].ave - stu[i + 1].ave <= 1E-2)
//        {
//            if (strcmp(stu[i].name, stu[i + 1].name) > 0)
//            {
//                strcpy(f, stu[i].name);
//                strcpy(stu[i].name, stu[i + 1].name);
//                strcpy(stu[i + 1].name, f);
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%s %.2lf\n", stu[i].name, stu[i].ave);
//    }
//    return 0;
//}