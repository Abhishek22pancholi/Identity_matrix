#include<stdio.h>
#include<math.h>
#define size 3
int main()
{
	int arr[size][size],i,j,count[size]={0},max=0;
	printf("enter the elements of array(only 0 and 1)");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\n\t");
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i][j]==1)
			{
				count[i]++;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		if(count[i]>max)
		{
			max=count[i];
		}
	}
	for(i=0;i<size;i++)
	printf("%d",count[i]);
	printf("\n the total identity matrix present is %d \n\n",max);
	return 0;
}

