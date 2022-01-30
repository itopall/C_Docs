#define _CRT_SECURE_NO_WARNINGS



#include "date.h"
#include "nutility.h"
#include <time.h>
#include <stdlib.h>

#define			SIZE		100

void set_date_array(Date* p, size_t size)
{
	while (size--)
		set_date_random(p++);
}

void print_date_array(const Date* p, size_t size)
{
	while (size--)
		print_date(p++);
}

int dcmp(const void* vpx, const void* vpy)
{
	return cmp_date((const Date*)vpx, (const Date*)vpy);
}

int main()
{
#pragma region Test code 1
	//Date x; 

	//set_date(&x, 2, 4, 1987);
	//print_date(&x);
	//set_month(&x, 7);
	//print_date(&x);
	/*set_date_today(&x);
	print_date(&x);
	set_date_str(&x, "24-07-1998");
	print_date(&x)*/;
#pragma endregion

#pragma region TEst code 2
	//randomize();
	//Date mydate;

	//for (int i = 0; i < 100; ++i)
	//{
	//	set_date_random(&mydate);
	//	print_date(&mydate);
	//}
#pragma endregion

#pragma region Test Code 3
	//Date mydate; 

	//printf("Dagum tarihinizi giriniz: ");
	//scan_date(&mydate);
	//print_date(&mydate);
#pragma endregion

#pragma region Test Code 4
	//size_t n;

	//printf("kac tarih: ");
	//scanf("%zu", &n);
	//Date* pd = (Date*)malloc(n * sizeof(Date));
	//if (!pd)
	//{
	//	printf("bellek yetersiz!\n");
	//	return 1;
	//}

	//randomize();
	//set_date_array(pd, n);

	//clock_t start = clock();
	//qsort(pd, n, sizeof(Date), &dcmp);
	//clock_t end = clock();
	//printf("siralama bitti sure %f saniye\n", (double)(end - start) / CLOCKS_PER_SEC);
	//(void)getchar();
	//print_date_array(pd, n);

	//free(pd);

#pragma endregion

#pragma region Test Code 5
	//Date mydate;

	//print_date(set_date_today(&mydate));
	//printf("yilin %d. gunu\n", get_year_day(&mydate));

#pragma endregion

#pragma region Test code 6
	//Date bdate;
	//Date todays_date;

	//printf("dogum tarihinizi girin: ");
	//scan_date(&bdate);
	//printf("Dogum tarihiniz: ");
	//print_date(&bdate);
	//set_date_today(&todays_date);
	//printf("Bugunun tarihi: ");
	//print_date(&todays_date);
	//int days = date_diff(&todays_date, &bdate);

	//printf("bugun hayatinizin %d. gunu\n",days);
#pragma endregion

#pragma region test code  7
	Date tdate;
	Date future_date;

	set_date_today(&tdate);
	printf("Bugunun tarihi: ");
	print_date(&tdate);

	for (int i = 1; i < 10000000; ++i)
	{
		printf("%d gun sonra ", i);
		ndays_date(&future_date, &tdate, i);
		print_date(&future_date);
	}
	
#pragma endregion





}