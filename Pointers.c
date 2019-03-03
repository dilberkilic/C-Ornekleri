#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	/*
	Ana bellegimizde bulunan adreslerle islem yapmamiza olanak saglayan bir yapidir.Bellegi daha rahat sekilde kullanmamizi saglar.
	 pointerlar soyle tanimlanir => veritipi *degisken_ismi;
	 "&" bu isareti kullanarak degisken adreslerine ulasir.
	 "*" degerlerle islm yapilacaksa bu isaret kullanilir.
	*/
	int sayi = 100; // sai adinda bir degisken tanimlayip ona 100 degerini atiyoruz.
	int *sayiptr = &sayi; // sayi degiskenimiz int degerinde oldugu icin bunu isaret edecek pointeriminda degerini int yaptim.Boylece sayi degiskenimizin adresini sayiptr adli pointerimiza atadik.

	printf("%d\n", sayi);

	*sayiptr = *sayiptr * 2; // *pointer  adresteki degeri aliyor ve onu 2 ile carpiyor.

	printf("%d\n", sayi);

	printf("%d\n", *sayiptr); // pointerimizin degerini yazdirdik.

	printf("%d\n", sayiptr); // pointerimizin adresini gosterir.

	printf("%p\n", *sayiptr);  // %p adresimizdeki degeri 16  lık tabanda gosterir. 

	printf("%p\n", sayiptr); 

	sayi++; // sayiyi bir arttirdik 

	printf("%d\n", *sayiptr); // burda da arttirdigimiz degerin son halini ekranda gorduk.
	 
	char dizi[] = "hello world";
	char *diziptr = dizi; // pointerimiz dizimizdeki ilk elemanin adresini tutar.

	printf("%c\n", *diziptr); // ekrana ilk elemanı olan h yi yazar.

	printf("%c\n", *(diziptr+1)); // ekrana tuttugu degerden bir sonraki degeri yazar.

	printf("%c\n", diziptr[1]); // yukardakinle ayni mantik.

	printf("%s\n",dizi); // ekrana hello world yazar.

	printf("%s\n", diziptr+2); // 2 karakter sonrasini yazdiracak. yani llo world yazacak.

	printf("%p\n", dizi);  // dizimizin 16 lik sistemde adresini yazar.

	printf("%p\n", diziptr); // %p pointerlarin adresleri icin kullanilir.

	printf("%p\n", &sayi);  // sayi degiskenimizin adresini 16 lik sistemde yazar.

	system("pause");
	return 0;
}
