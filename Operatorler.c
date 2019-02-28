#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a;
	a = 5;
	int b = 9; 
  
	a = b; // programlarda okuma sagdan sola dogru oldugu icin b deki deger a ya atanir boylece b=9 ve a=9 olur.
  
	printf("%d-%d\n", a, b); // ciktisi 9-9 olur.
  
	int x = 7, y = 6, z = 3, sayi1 = 8, sayi2 = 3;
  
	x = y = z; // dedigim gibi z deki deger y ye ordaki deger de x e atanir sonuc z=3 y=3 x=3 olur.
  
	printf("%d-%d\n", x, y); // ciktisi 3-3 olur.
  
	printf("sayi1 in sayi2 ye modu:%d\n", sayi1%sayi2); // mod alinirken % ifadesi kullanilir. 
  
	int deger = 4;
	deger *= 3; // deger=deger*3; buda aynidir.
  
	printf("degerimiz:%d\n", deger);
  
	int q = 6, w = 3, e;
	e = q++; // Ilk once q nun degerini e ye atiyacak bu drumda e=6 olucak sonra q bir articak (q++) q= 7 olucak .
  
	printf("karsilastirma:%d\n", say1 <= say2); // eger say1 say2 ye esit veya kucuk olursa ekranda 1 yazicak bu da true(dogru) demek.
	printf("karsilastirma:%d\n", say1 == say2); // eger say1 ve say2 esitse 1 yazicak degilse 0 yazicak.
	printf("karsilastirma:%d\n", say1 != say2); // != isareti esit degil demektir.
	printf("mantiksal:%d\n", say1 != say2 || say1 < say2); // ||  isaret veya demektir mantiktada oldugu gibi bir tane drumun true olmasi ifadeyi true yapar.
	printf("mantiksal:%d\n", say1 == say2 && say1 < say2); // && bu isaret ise ve demektir her iki drumunda saglandigi drumda true olur. 
	system("pause");
	return 0;			
}
