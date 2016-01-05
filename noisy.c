/* Title - Entrophy and Capacity of noisy channel
 * Date  - 04/01/2016 
 */
#include <stdio.h>
#include "itct.h"

int main()
{
	float matx[3][3], Py[3], Px[3];
	float entphy_py, entphy_px, capa;
	int i, j;
	entphy_px = entphy_py = capa = 0;
	printf("Enter input matrix\n");
	for (i = 0; i < 3; ++i)
	{
		Py[i] = Px[i] = 0;
		for (j = 0; j < 3; ++j)
		{
			scanf("%f",&matx[i][j]);
		}
	}

	for (i = 0; i < 3; ++i)
	{
		
		for ( j = 0; j < 3; ++j)
		{
			Px[i] += matx[i][j];

		}
	}

	for(j=0; j < 3; j++)
	{
		for(i=0; i<3; i++)
			Py[i] += matx[i][j];
	}

	printf("P(X)\t-\n");
	for (i = 0; i < 3; ++i)
		{
			printf("%f\t", Px[i]);
		}
	printf("\nP(Y)\t-\n");
	for (i = 0; i < 3; ++i)
		{
			printf("%f\t", Py[i]);
		}
			entphy_py += entrophy(Py,3);
			entphy_px += entrophy(Px,3);
	printf("\nEntrophy of P(X)\t=\t%f\n", entphy_px);
	printf("Entrophy of P(Y)\t=\t%f\n", entphy_py);
	capa = log10f(3)/log10f(2);
	printf("Capacity \t= \t%f\n", capa);
	return 0;
}
