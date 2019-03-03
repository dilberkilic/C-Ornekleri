#define _CRT_SECURE_NO_WARNINGS // eger visual stdio da calisiyorsaniz scanf fonksiyonunu scanf_s yazmak yerine scanf yazmak icin bunu tanmliyoruz.
#include <stdio.h>
#include <stdlib.h>
// sabit degiskenler program tarafindan degistirilmez mesela pi sayisi hep 3.14 tur. Ve sabit degiskenlerin veri turu kisitlamasi yoktur her turlu veri tipinde degisken tanimlayabiliriz.
//‘const’ anahtar kelimesi ile
//‘#define’ onislemci bildirimi ile

#define SIZE 10 

int main()
{
	const int BOYUT = 10; 
	char dizi1[BOYUT];
	char dizi2[SIZE];
	printf("adinizi ve spoyadinizi  giriniz:");
	scanf("%s", dizi1);
	//gets_s(dizi1, BOYUT);
	printf("merhaba=%s,Sitemize hosgeldiniz..\n", dizi1);
	system("pause");
	return 0;
}
