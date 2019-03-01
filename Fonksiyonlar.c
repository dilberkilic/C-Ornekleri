#include <stdio.h>
#include <stdlib.h>
// Fonksiyonlar => Programin icernde bazi islemleri defalarca yazmak yerine bir kere tanimlayip istegimiz kadar cagirdigimiz kod parcalaridir.
// veri_tipi fonksiyon_ismi () { } not olarak bir fonksiyonun icine baska fonksiyn tanimlayamazsiniz.Ve fonksiyonlar bir deger dondurmelidir.
//fonksiyonlar ikiye ayrilir 1.parametresiz fonksiyonlar bunlarin yapacagi islem bellidir. int toplama() {} gibi.
//2.parametreli fonksiyondur gelen parametrelere karsi farkli islemler yapar.
// fonksiyonu bir yerde cagirmak istedigimizde => fonksiyon_ismi();
int kareal(int sayi) // int veri tipinde kareal al adinda  parametreli fonksiyon olusturduk. 
{
	return sayi * sayi; // girilen sayinin karesini aldi.
}
float ort(int sayi1, int sayi2, int sayi3) // float veri turunde ort adinda parametreli fonksiyon olusturduk. 
{
	float toplam;
	toplam = sayi1 + sayi2 + sayi3;
	return  toplam / 3;
}
void isim(char a, char b, char c)
{
	printf("%c%c%c \n", a, b, c);
}
void mesaj()
{
	printf("HELLO ");
	isim('C', 'A', 'N'); // burada isim adli fonksiyonumuzu cagirdik.
	return;
}

int main()
{
	int kare;
	kare = kareal(9); // kareal isimli fonksiyonumuzu cagirdik ve ona 9 degerini atıyarak 9 un karesini almasini sagladik.
	printf("%d\n", kare);

	float sonuc;
	sonuc = ort(41, 28, 65); // ort isimli fonksiyonumuzu cagirip degerleri verdik.
	printf("%.1f\n", sonuc);

	mesaj(); // mesaj adli fonksiyonumuzu cagirdik.

	isim('E', 'D', 'A'); // isim adli fonksiyonumuzu cagirdik.

	system("pause");
	return 0;
}
