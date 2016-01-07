/* Author - Ajit Jadhav
 * Title  - Functions for ITCT practicals
 * Date Started  - 04/01/2016
 */

#include <math.h>
#include "itct.h"

// log2f() function to calculate log of base 
// two to given value 
float log2f(float p)
{
	return (log10f(p)/log10f(2)); 
}

// returns information for probability p
float info(float p)
{
	return log2(1/p);
}

// calculates entrophy for given array arrP[] 
// and length of array is given by l
float entrophy(float P, int l)
{
	return ((P*info(P))*-1);
}

// calculates entrophy for given multidimentional array  
// arrP[][] and length of array is given by i, j
float entrophy_ij(float *arrP, int i, int j)
{
	float entr;
	int k, l;
	entr=0;
	for(k = 0; k < i; k++)
	{
		for(l = 0; l < j; l++)
			entr += *(arrP+k*j+l)*info(*(arrP+k*j+l));
	}
	return (entr*-1);
}

// efficiency for entrophy h and avgerage number 
// of bits
float efficiency(float h, int avgNumBits)
{
	return (2*h)/avgNumBits;
}
