#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int T,i,j,l1,h1,l2,h2,diff1,diff2;
	long int *a=(long int *)malloc(T*4);
	printf(" enter number of terms of sequence \n");
	scanf("%d",&T);
	if(T<=0)
	{
		printf("invalid input \n");
		exit(0);
	}
	printf("enter %d terms of sequence\n",T);
	for(i=0;i<T;i++)
	{
		printf("enter an integer\n");
		scanf("%d",(p+i));
	}
	l1=h1=l2=h2=diff1=diff2=0;
	while(*(p+j)<=*(p+j+1))
	{
		j++;
		if(j>=t)
		{
			break();
		}
	}
	h1=j-1;
	diff1=h1-l1+1;
	l2=j;
	for(i=j;i<T;i++)
	{
		if(*(p+i)>*(p+i+1))
		{
			h2=i;
			diff2=h2-l2+1;
			l2=i+1;
		}
		if(diff1<diff2)
		{
			l1=l2;
			h1=h2;
			diff1=diff2;
		}
	}
	printf("first longest progressive sequence is:-");
	for(i=l1;i<=h1;i++)
	{
		printf("%d ",*(p+i));
	}
	return 0;
}
		}
		