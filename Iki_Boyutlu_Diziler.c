#include <stdio.h>
#include <stdlib.h>
// iki boyutlu dizilerde veri_tipi dizi_ismi [Satir][Sutun];
// int notlar[4][3];  4 satirlik 3 sutunluk bir dizi olusturduk.
// float fiyatlar[][2]={2.54,6.58,6.45,6.24} burda 2 satirlik ve 2 sutunluk dizi olusturduk.

int main() 
{
	int dizi[2][3]; // 2 satirlik 3 sutunluk bir dizi olusturduk.
	printf("lütfen verileri giriniz..\n");
	for (int i = 0; i < 2; i++) // kullacidan verileri girmesi için for olusturduk.
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%d", &dizi[i][j]);
		}
	}
	printf("dizimizin elemanlari:");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("dizi[%d][%d]=%d\n",i,j,dizi[i][j]);
		}
	}
	system("pause");
	return 0;
}
