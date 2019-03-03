#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>// string.h fonksiyonlarini kullanmak icin kutuphaneyi cagirdik.
int main()
{
	char dizi1[30] = {"hello world"};
	char dizi2[20] = {"c programlama"};
	printf("dizi1=%d\ndizi2=%d\n", strlen(dizi1), strlen(dizi2)); //strlen(dizi); dizideki eleman adedini bulur.
	//strcpy(dizi1, dizi2); 2. dizinin elemanlaini 1. diziye kopyalar
	//strncpy(dizi1, dizi2, 10); 2. dizinin ilk 10 elemanini 1. diziye kopyalar
	//strcat(dizi1, dizi2); ilk dizinin sonuna 2. dizinin elemanlarini ekler
	//int deger =strcmp(dizi1, dizi2); Iki metni karsilastirir. Ayni ise 0 doner. Farkli ise ve string1 in degeri daha buyukse pozitif deger, string1 in degeri daha kucukse negatif deger doner. Buyukluk degerleri ASCII degerlerine gore hesaplanir.
	//printf("%s\n%d", dizi1,deger);
	system("pause");
	return 0;
}
