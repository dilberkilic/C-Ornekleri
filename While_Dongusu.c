#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 1;
	while (a < 11) // while(kosul) { yapilacak islemler yazilir } bu koşulda a sayisi 11 den kucuk oldugu surece susulu parantezin icindeki kod calisir.
	{
		printf("%d ", a);
		a++;
	}
	printf("\n"); // alt satira gecmeyi saglar.
  
	for (char c= 'A'; c < 91; c++) // A dan baslayarak Z ye kadar sayilari ekrana yazmamizi saglar. ASCII da A=65 sayi degerine denk gelirkene z=90 a denk gelir.
	{
		printf("%c ", c);
	}
	printf("\n");
  
	a = 'a';
	while (a<123) // ASCII da kucuk a=97 ve z=122 ye esittir.
	{
		printf("%c ", a);
		a++;
	}
  
	system("pause");
	return 0;
}
