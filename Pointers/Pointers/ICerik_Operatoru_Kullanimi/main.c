





int main()
{
	//int x = 12;
	//int* ptr = &x;
	////(&x)[0] = 23; //alttaki ile ayný anlam
	//*(&x + 0) = 23;

	////ptr[0] = 87; // alttaki ile ayný anlamda
	//*ptr = 87;

	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* ptr = a + 5;

	printf("x = %d\n", *ptr); // 5 indili elemaný ekrana yazdýrýr a dizisindeki.
	printf("x = %d\n", ptr[0]); // yukarýdaki ile ayný anlama gelir
	printf("x = %d\n", ptr[3]); // 8. indisdeki elemananý ekrana yazdýrýr. 
	printf("x = %d\n", ptr[-3]); // 2. indisdeki deðeri yazdýrýr 
	printf("x = %d\n", 3[ptr]); // hiçbir þey fark etmez.

}