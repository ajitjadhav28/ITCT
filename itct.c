/* Author - Ajit Jadhav
 * Title  - Functions for ITCT practicals
 * Date   - 04/01/2016
 */

#include <math.h>
#include <string.h>
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
float entrophy(float *arrP, int l)
{
	float entr;
	entr=0;
	for(l = l-1; l>=0; l--)
	{
		entr += arrP[l]*info(arrP[l]);
	}
	return (entr*-1);
}

// efficiency for entrophy h and avgerage number 
// of bits
float efficiency(float h, int avgNumBits)
{
	return (2*h)/avgNumBits;
}
