#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x = 15;
	do // bu dongude kosul ne olursa olsun dongu en az bir kez calismis olur.
	{
	if (x % 7 == 0)
	printf("%d ", x); 
	x++;
	} 
	while (x<80); 
	printf("\n");
	int y = 5;
	while (y<125) // while de kosula basta bakildigi icin dongu do whileda oldugu gibi en az bir kez calismaz.
	{
		if (y % 5 == 0) // 5 e bolunebilen sayilari bulur.
			printf("%d ", y);
		y++;
	}
	printf("\n");
	for (int z = 9; z < 758; z++)
	{
		if (z % 9 == 0) // 9 a bolunen sayıları bulur.
			printf("%d ", z);

	}
	system("pause");
	return 0;
}
