#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void art(int*,int*); // pointerleri yazarken veri_tipi* seklinde cagiririz
int main()
{
	int c = 10,d=15;
	
	printf("%d %d\n", c, d);

	art(&c, &d);

	printf("%d %d\n", c, d);





	system("pause");

	return 0;
}
void art(int *a, int *b) // art adinda bir fonksiyon olusturduk ve fonskiyonun parametrelerini pointer olarak tanimladik
{
	*a=*a+5; // degerlerle islem yaptigimiz icin * isaretini kullandik
	(*b)++; 
	return;
}
