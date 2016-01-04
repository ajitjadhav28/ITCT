/*  Calculating probability of each character in 
 *  string and entrophy of complete string.
 */

#include <stdio.h>
#include "itct.h"

int main()
{
	char ipString[25], chr;
	int i,j,count,len,flag[25];
	float prob[25],entr;

	printf("Enter input string \n");
	scanf("%s",&ipString);

	len = strlen(ipString);
	printf("String Lenght %d\n",len);
	for (i = 0; i < len; ++i)
	{
		chr = ipString[i];
		count = 0;
		for (j = 0; j < len; ++j)
		{
			if (chr == ipString[j])
			{
				count++;
			}
		}
		prob[i] = (float)count/len; 
	}

	for (i = 0; i < len; ++i)
	{
		chr = ipString[i];
		if (i == 0)
		{
			flag[i]=1;
		}
		else
		{
			for (j = i-1; j > -1; j--)
			{
				if (ipString[j] == chr){
					flag[i]=0;
					break;
				}
				else
					flag[i]=1;
			}
		}
	}

	entr = 0;
	printf("Input Character\t-\tProbability\n");
	for (i = 0; i < len; ++i)
	{
		if(flag[i])
		{
			entr += prob[i]*info((float)prob[i]);
			printf("\t%c\t-\t%f\n",ipString[i],prob[i]);
		}
	}
	
	printf("Entrophy = %f\n",entr);
	return 0;
}
