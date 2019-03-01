#include <stdio.h>
#include <stdlib.h>
//Fonksiyon prototipleri, en basit tanimiyla, derleyiciye fonksiyonlarin dönüş değerini bildirdiğimiz tek satirlik kodlardir.Ve kodlar yukaridan asagiya dogru okundugu icin fonksiyonun prototipini yukarida tanimlamaliyiz.
int fak(int); //  fak isimli fonsiyonumuzun prototipi yazarak olusacak hatalardan kurtuluyoruz.
int main()
{
	printf("%d \n", fak(4));
	system("pause");
	return 0;
}
int fak(int sayi)
{
	int sonuc = 1;
	for (int i = sayi; i >=1 ; i--)
	{
		sonuc = sonuc * i;
	}
	return sonuc;
}
