#include <stdio.h>
#include <stdlib.h>

//Diziler bir degisken de briden fazla veri saklamak icin kullanilir.
// Gririlen veriler ayni turde olmalidir.
// veri_tipi dizi_ismi [boyut]; seklinde tanimlariz.
/* ornek verirsek ;

int sayilar[3]; 3 elemanlı bir dizi olusturduk. Diziler de elemanlara erismek icin endisler kullanilir ve 0 dan baslar suan ki dizimizin endisleri 0,1,2 dir.
int a= sayilar[0]; ilk elemana a yi atadik.
sayilar[1]=46, ikinci elemana 42 yi atadik.
sayilar[2]=0; son elemana 0 atadik.


*/

int main()
{
	int dizi[3]; // 3 elemanli bir dizi olusturduk.
	dizi[0] = 8;
	dizi[1] = 40;
	dizi[2] = 0; // sirasiyla degerlerini atadik.

	printf("%d\n",dizi[2]);
	printf("%d\n", dizi[1]);
	printf("%d\n", dizi[0]); // ve ekrana yazdirdik.

	float dizi2[] = { 2.40f,3.45f,7.00f }; // boyutu yazmadan bu sekilde de elemanları tanimlayabiliyoruz. sayilarin sonuna f yazmamizin nedeni onlari float turunde tanimlamamizdir.
	printf("%.2f\n", dizi2[0]);

	int a = dizi[2];
	printf("%d\n", a);

	char mesaj[5];
	printf("5 karekterli mesaj giriniz:");
	for (int i = 0; i < 5; i++) // for dongusunu kullanarak kullanicidan diziye eleman girilmesini sagladik.
	{
		scanf_s("%c", &mesaj[i]);

	}
	for (int i = 0; i < 5; i++)
	{
		printf("%c", mesaj[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
