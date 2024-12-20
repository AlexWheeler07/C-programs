/*Write a program to check whether a matrix is an identity matrix or not.*/


#include <stdio.h>
 
int main (void)
{
	int a[10][10];
	int i = 0, j = 0, row = 0, col = 0;
 
	printf ("Enter the order of the matrix (mxn):\n");
	scanf ("%d %d", &row, &col);
 
	int flag = 0;
 
	printf ("Enter the elements of the matrix\n");
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
 
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && a[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				flag = -1;
				break;
			}
		}
	}
 
	if (flag == 0)
	{
		printf ("It is an identity matrix\n");
	}
	else
	{
		printf ("It is not an identity matrix\n");
	}
 
	return 0;
}