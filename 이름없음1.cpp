#include<stdio.h>

int main()
{
	int arr[3][9];
	int i,j;
	int sum;
	for(i = 0;i < 3; i++)
	{
		for(j = 0; j < 9; j++)
		{
			arr[i][j] = (i+2)*(j+1);
		}
	}
	
	printf("�˻� : \n");
	
	
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 3; j++)
		{
			sum += arr[j][i];	
		}
		printf("%d \n",sum);
		
		sum = 0;
	}	
}
      