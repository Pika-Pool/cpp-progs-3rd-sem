#include <stdio.h>

void absolute_int(int i)
{
	printf("|%d| = %d\n\n", i, ((i < 0) ? -i : i));
}

void absolute_float(float f)
{
	printf("|%.4f| = %.4f\n\n", f, ((f < 0) ? -f : f));
}

void absolute_longlong(long long ll)
{
	printf("|%I64d| = %I64d\n\n", ll, ((ll < 0 )? -ll : ll));
}

int main()
{
	int i;
	printf("Enter integer:\t");
	scanf("%d", &i);
	absolute_int(i);

	float f;
	printf("Enter float:\t");
	scanf("%f", &f);
	absolute_float(f);

	long long ll;
	printf("Enter long long:\t");
	scanf("%I64d", &ll);
	absolute_longlong(ll);

	return 0;
}
