#include <stdio.h>
#include <stdlib.h>
int main()
{
	int sayi = 0;
	while (true) // boyle yazarsanız dongu sonsuz olur. For icin ise sonsuz dongu = for( ; ; ;) { } yazilarak yapilir.
	{
		
		sayi++;

		if (sayi % 3 == 0)
			continue; // continue istenmeyen adimlarin atlanmasini saglar burada 3 e bolunen sayıları almayacak. 

		if (sayi > 50)
		{
			break; // break donguden istenilen bri anda cikmamizi saglar burda sayi 50 den buyuk oldugunda program sonlanacak demek.
		}
	
		printf("%d ", sayi);
	}
	system("pause");
	return 0;
}
