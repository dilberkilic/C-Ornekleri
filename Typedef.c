#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//typedef ifadesini kullanarak C dilindeki veri türlerini temsil eden kelimeleri (int, char, float, vs.) farklı şekilde tanımlayabilirsiniz. Bu şekilde mevcut bir veri türü için yeni bir isim veya yeni bir veri türü oluşturabilirsiniz

typedef struct ogrenci
{
	int id;
	char *isim;
}OGR;
int main()
{
	struct ogrenci ogr1;
	OGR ogr2;

	ogr2.id = 10;
	ogr2.isim =(char*) "ahmet";

	int a;
	typedef int tamsayi; // int veri türü artık tamsayi ismiyle tutulmaya baslandi.
	tamsayi sayi1 = 45;


	typedef char karakter;
	karakter isim[] = "ahmet";

	printf("ogrenci bilgileri\nid:%d\nadi:%s\n", ogr2.id, ogr2.isim);


	system("pause");
	return 0;
}
