#include <stdio.h>
#include "itct.h"

int main()
{
	float Px[1][2], Py[1][2], PxPy[2][2], PyPx[2][2];
	float entPx, entPy, entPxPy, entPyPx, sum;
	int i, j, k;
	entPy = entPx = entPyPx = entPxPy = sum = 0;
	
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			PxPy[i][j] = PyPx[i][j] = 0;
			if(i == 0)
				Px[i][j] = Py[i][j] = 0;
		}
	}

	printf("Enter input matrix for P(x) - \n");
	for (i=0; i<1; i++)
	{
		for (j=0; j<2; j++)
		{
			scanf("%f", &Px[i][j]);
		}
	}
			
	printf("Enter input matrix for P(Y/X) - \n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			scanf("%f", &PyPx[i][j]);
		}
	}

	entPx = entrophy_ij(Px,1,2);
	entPyPx = entrophy_ij(PyPx,2,2);

	printf("P(x) -\n");
	for (i=0; i<1; i++)
	{
		printf("\n");
		for (j=0; j<2; j++)
		{
			printf("%f\t",Px[i][j]);
		}
	}

	printf("\nP(Y/X) -\n");
	for (i=0; i<2; i++)
	{
		printf("\n");
		for (j=0; j<2; j++)
		{
			printf("%f\t",PyPx[i][j]);
		}
	}

	printf("\nH(x) = %f\n",entPx);
	printf("H(Y/X) = %f\n",entPyPx);
	return 0;
}