#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
// Dinamik veriler kullanicinin bellegi istedigi gibi kullanmasini saglar.
int main()
{

	int *ptr =(int*) malloc(1300100100*sizeof(int)); // malloc(); istenilen miktarda alan olusturulmasini saglar .

	int *p =(int*) calloc(10, sizeof(int)); // calloc(); olusturulcak alani bize temizleyerek verir.

	if (ptr == NULL) 
	{
		printf("hafiza dolu!\n");
	}
	else
		printf("yer tahsisi yapildi. \n");

	//free(ptr); istedigimiz veriyi bilgisayardan silmemizi saglar

	realloc(ptr, 15 * sizeof(char)); // onceden ayrilan alani buyutup kucultmeyi saglar.

	if (p == NULL) 
	{
		printf("hafiza dolu!\n");
	}
	else
		printf("yer tahsisi yapildi. \n");

	printf("%p\n", p);

	printf("%p\n", ptr);

	system("pause");
	return 0;
}
