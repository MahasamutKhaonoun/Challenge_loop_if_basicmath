#include<stdio.h>
#include<math.h>
int n1, n2, N;
float average, total = 0, Ntotal = 0, sd = 0, SD;

float P_SD(float a) {
	float xi;
	xi = (a - average) * (a - average);
	return xi;

}
int main()
{
	scanf_s("%d %d", &n1, &n2);
	if (n1 == n2)
	{
		printf("%d", n1);
		average = n1;
		printf("\nAverage = %.1f", average);
		printf("\nSD = 0.00");
	}

	else if (n1 < n2)
	{
		N = n1;
		for (;N <= n2;N++)
		{
			printf("%d ", N);
			total = total + N;
			Ntotal = Ntotal + 1;
		}
		average = total / Ntotal;
		for (;n1 <= n2;n1++)
		{
			sd = sd + P_SD(n1);
		}
		SD = sqrt(sd / (Ntotal - 1));
		printf("\nAverage = %.1f", average);
		printf("\nSD = %.2f", SD);
	}
	else if (n1 > n2)
	{
		N = n1;
		for (;N >= n2;N--)
		{
			printf("%d ", N);
			total = total + N;
			Ntotal = Ntotal + 1;
		}
		average = total / Ntotal;
		for (;n1 >= n2;n1--)
		{
			sd = sd + P_SD(n1);
		}
		SD = sqrt(sd / (Ntotal - 1));
		printf("\nAverage = %.1f", average);
		printf("\nSD = %.2f", SD);
	}
	return 0;
}