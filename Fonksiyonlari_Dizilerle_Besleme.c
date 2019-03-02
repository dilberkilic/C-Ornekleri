#include <stdio.h>
#include <stdlib.h>
int minimum(int dizi[]); // asagida tanimladigimiz fonksiyonumuzu burda prototip olarak tanimladik.
int main()
{
	int notlar[6] = { 55,10,38,93,64,88 }; // 6 elemanli bir dizi olusturduk.
	int enkucuk;
	enkucuk = minimum(notlar);
	printf("DIZIDEKI NOTLARDAN EN KUCUK OLANI :%d\n", enkucuk);
	system("pause");
	return 0;
}
int minimum(int dizi[]) // fonksiyonun parametresini dizi olarak ayarladik.
{
	int enkucuk;
	enkucuk = dizi[0];
	for (int i = 1; i <6 ; i++) 
	{
		if (dizi[i] < enkucuk) 
		{
			enkucuk = dizi[i];
		}
	}
	return enkucuk;
}
