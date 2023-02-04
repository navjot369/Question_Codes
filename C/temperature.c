#include <stdio.h>
/*
int main()
{
	float bs, da, hr, ts;
	printf("Enter basic salary:");
	scanf("%f", &bs);
	da = 0.4 * bs;
	hr = 0.2 * bs;
	ts = bs + da + hr;
	printf("Gross salary:%f", ts);
	
}*/

int main()
{
	float faren, c;
	scanf("%f", &faren);
	c = (5* (faren - 32))/9;
	printf("%f", c);
}
