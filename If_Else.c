#include <stdio.h>
#include <stdlib.h>
int main()
{
	int yas;
	printf("yasinizi giriniz:");
	scanf_s("%d", &yas);
  
  // if(yapilacak karsilastirma) { karsilastirma true ise yapilacak islem }
  // else if(yapilacak baska karsilastirma varsa) { karsilastirma true ise yapılcak islem}
  // else { false ise yapılaca islem}
  
	if (yas < 18) // eger yasin 18 den kucukse
	{
		printf("yasiniz sisteme girmek icin kucuk...\n"); // ekrana  yasiniz sisteme girmek icin kucuk desin.
	}
	else if (yas = 18) // eger yasin 18 ise
	{
		printf("sisteme basarili bir sekilde giris yapilmistir..\n "); // basarili bir sekilde giris yapildi densin.
	}
	else // değilse 
	{
		printf("sisteme basarili bir sekilde giris yapilmistir..\n "); // basarili bir sekilde giris yapildi densin.
	}
	}
	system("pause");
	return 0;
}
