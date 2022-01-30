


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "student.h"
#include "studentlist.h"
#include "nutility.h"


#define			NLIST			1000

//self referential structure
struct Data {
	int x;
	struct Data* p; // Legal kullaným problem yok Karþýmýza çok çýkacak
};

int scmp(const void* vp1, const void* vp2)
{
	return cmp_student((const Student*)vp1, (const Student*)vp2);
}


#pragma region Nested structure
struct Neco {
	struct Data {
		int a, b, c;
	}dx, dy, dz;
	int x, y, z;
};
#pragma endregion


int main()
{
#pragma region test code1
	//randomize();

	//Student s;

	//while (1) {
	//	set_student_random(&s);
	//	print_student(&s);
	//	(void)getchar();
	//}
#pragma endregion

#pragma region test code2 
	//size_t n;

	//printf("kac ogrenci: ");
	//scanf("%zu", &n);
	//Student* pd = (Student*)malloc(n * sizeof(Student));
	//if (!pd)
	//{
	//	fprintf(stderr, "bellek yetersiz\n");
	//	return 1;
	//}

	//for (size_t i = 0; i < n; ++i)
	//{
	//	set_student_random(pd + i);
	//}

	//clock_t start = clokc();
	//qsort(pd, n, sizeof(*pd), &scmp);
	//clock_t end = clock();

	//printf("siralama bitti %f saniye\n", (double)(end - start) / CLOCKS_PER_SEC);
	//
	//(void)getchar();
	//for (size_t i = 0; i < n; ++i)
	//{
	//	print_student(pd + i);
	//}

	//free(pd);


#pragma endregion

#pragma region testcode1 for studentlist
	//Student s;
	//randomize();

	//for (int i = 0; i < 10; ++i)
	//{
	//	set_student_random(&s);
	//	print_student(&s);
	//	push_front(&s);
	//}
	//printf("\n");

	//printf("listede %zu ogrenci var\n", get_size());
	//print_list();

	//make_empty();

	//if (is_empty())
	//	printf("liste bos\n");
#pragma endregion

#pragma region testcode2 for studentlist

	//size_t n;
	//Student s;

	//printf("listeye kac ogrenci eklenecek: ");
	//scanf("%zu", &n);

	//randomize();

	//for (int i = 0; i < n; ++i)
	//{
	//	set_student_random(&s);
	// 	push_front(&s);
	//}
	//printf("listeden %zu ogrenci var\n", get_size());
	//_getch();
	//print_list();
#pragma endregion

#pragma region testcode3 for studentlist

	//size_t n;
	//Student s;

	//printf("kac ogrenci: ");
	//scanf("%zu", &n);

	//ListHandle list = create_List();

	//for (size_t i = 0; i < n; ++i)
	//{
	//	set_student_random(&s);
	//	push_front(list, &s);
	//}

	//while (!is_empty())
	//{
	//	printf("listede %zu ogrenci var\n", get_size(list));
	//	print_list(list);
	//	_getch(list);
	//	system("cls");
	//	pop_front(list);
	//}

#pragma endregion

 #pragma region Testcode ListHandle

	//ListHandle a[NLIST];

	//for (int i = 0; i < NLIST; ++i)
	//{
	//	a[i] = create_List();
	//}

	//randomize();
	//Student s;

	//for (int i = 0; i < NLIST; ++i)
	//{
	//	int n = rand() % 11 + 10;
	//	while (--n)
	//	{
	//		set_student_random(&s);
	//		push_front(a[i], &s);
	//	}
	//}

	//for (int i = 0; i < NLIST; ++i)
	//{
	//	printf(" % d.listede %zu ogrenci var\n", i + 1, get_size(a[i]));
	//	print_list(a[i]);
	//	(void)getchar();
	//	system("cls");
	//}


	//for (int i = 0; i < NLIST; ++i)
	//	destroy_list(a[i]);

#pragma endregion




	

}