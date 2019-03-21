#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
//Struct farkli veri tiplerini aralarinda belirli bir iliski bulunmak sartiyla bir arada tutabilmemizi saglar.
// eger pointe cagircaksak . yerine ->  isaretini kullaniriz 
//struct isim { } ; bunu yaparak derleyiciyi bilgilendirmis oluruz .
struct kullanici
{
	char ad[30];
	char soyad[30];
	int yas;
	double boy;
};
int main()
{
	struct kullanici hesap1; // bu tanimi direk struct yapimizin sonundada tanimlayabiliriz. ... } kullanici ; gibi 

	printf("adinizi soyadinizi yasinizi ve boyunuzu giriniz:");
	scanf("%s", &hesap1.ad); // buralarda "." kullanarak cagirdik.
	scanf("%s", &hesap1.soyad);
	scanf("%d", &hesap1.yas);
	scanf("%lf",&hesap1.boy);

	printf("adiniz:%s\nsoyadiniz:%s\nyasiniz:%d\nboyunuz:%.2f\n", hesap1.ad, hesap1.soyad, hesap1.yas, hesap1.boy);
	printf("devam etmek icin bir tusa basiniz...");

	system("pause");
	return 0;
}
