#include <stdio.h>

void loc()
{
	for (int i = 0; i < 81; i++)
	{
		if ((i/9)%3+1==i%3+1)
		{
			continue;
		}
		printf("A=%d,B=%d\n", (i / 9) + 1,i%9+1);
	}
}