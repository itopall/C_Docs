





int main()
{
	//int x = 12;
	//int* ptr = &x;
	////(&x)[0] = 23; //alttaki ile ayn� anlam
	//*(&x + 0) = 23;

	////ptr[0] = 87; // alttaki ile ayn� anlamda
	//*ptr = 87;

	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* ptr = a + 5;

	printf("x = %d\n", *ptr); // 5 indili eleman� ekrana yazd�r�r a dizisindeki.
	printf("x = %d\n", ptr[0]); // yukar�daki ile ayn� anlama gelir
	printf("x = %d\n", ptr[3]); // 8. indisdeki elemanan� ekrana yazd�r�r. 
	printf("x = %d\n", ptr[-3]); // 2. indisdeki de�eri yazd�r�r 
	printf("x = %d\n", 3[ptr]); // hi�bir �ey fark etmez.

}