#include <stdio.h>
#include <stdlib.h>
int main()
{
	int yas,salonno;
	printf("yasinizi giriniz:");
	scanf_s("%d", &yas);
	if (yas < 18)
	{
		printf("yasiniz sisteme girmek icin kucuk...\n");
	}
	else
	{
		printf("sisteme basarili bir sekilde giris yapilmistir..\n ");
		printf("lutfen girmek istediginiz salon numarasini giriniz(1,2,3);");
		scanf_s("%d", &salonno);
		switch (salonno) // parantez icine kontrol edilecek degiskeni yaziyoruz.
		{
		case 1: {printf("%d numarali salona giris yaptiniz.\n", salonno); } //salon no 1 ise yapilcaklari suslu parantezin icine yaziyoruz.
			   break; // break usteki durum dogruysa alttaki satirlara bakmayi onler.
		case 2: {printf("%d numarali salona giris yaptiniz.\n", salonno); }
			   break;
		case 3: {printf("%d numarali salona giris yaptiniz.\n", salonno); }
			   break;
		default: {printf("uygun bir salon numarasi girmediniz..\n"); } // hic bir case true degilse bu blok calisir.
			break;
		}
	}
	system("pause");
	return 0;
}
