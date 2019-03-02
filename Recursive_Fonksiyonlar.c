#include <stdio.h>
#include <stdlib.h>
// Recursive fonksiyonlar kendini tekrar cagira bilen fonksiyonlardir.
//Daha az kod ile benzer isler yapilabilir.
// Veriler uzerinde gezinmek icin cok kullanisli bir cozum sunar.

int fak(int);

int recursive(int); // asagida tanimladigimiz recursive adli fonksiyonu cagirdik(recursive fonksiyonlari recursive diye cagirmiyoruz ben recursive fonksiyonlari isledigimim icin oyle yazdim.),

int recursivetoplama(int say) // recursivetoplama adinda bir fonksiyon tanimladik.Bu fonksiyonun amaci 0 dan girigimiz sayiya adar olan sayilarin toplamini bulmak.
{
	if (say == 0) 
	{
		return 0;
	}
	return say + recursivetoplama(say - 1); // kendilerini tekar cagira bilen fonksiyonlar dedigimiz de bundan bahsettik.
}
int main()
{
	printf("%d\n", recursivetoplama(5)); // 5,4,3,2,1,0 sayilarinitoplar ve ekrana yazar.
	printf("%d \n", recursive(6));
	system("pause");
	return 0;
}
int recursive(int sayi) // bu da faktoriyel almamizi saglar. Altta ki fonksiyondan tek farki kendini cagirmasi . 
{
	if (sayi == 1)
	{
		return 1;
    }
	return sayi *recursive(sayi - 1); // burda fonksiyon kendini cagirmistir.
}
int fak(int sayi) // faktoriyel almamizi saglayan bir fonksiyon olusturduk.
{
	int sonuc = 1;
	for (int i = sayi; i >= 1; i--) // 1 den girdigimiz sayiya kadar bir dongu kurduk.
	{
		sonuc = sonuc * i;
	}
	return sonuc;
}
