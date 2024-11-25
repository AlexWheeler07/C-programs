#include<stdio.h>

int main()
{   int m,n,size=0;
	printf("Enter the number of rows of sparse matrix:  ");
    scanf("%d",&m);
    printf("\nEnter the number of columns of sparse matrix:  ");
    scanf("%d",&n);

int sparseMatrix[m][n];

 printf("\nEnter the elements in sparse matrix:\n");
    for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			scanf("%d",&sparseMatrix[i][j]);
				

	
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (sparseMatrix[i][j] != 0)
				size++;

	int compactMatrix[3][size];

	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (sparseMatrix[i][j] != 0)
			{
				compactMatrix[0][k] = i;
				compactMatrix[1][k] = j;
				compactMatrix[2][k] = sparseMatrix[i][j];
				k++;
			}

    printf("\nThe elements as sparse matrix are:\n");    
         
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<size; j++)
			printf("%d ", compactMatrix[i][j]);

		printf("\n");
	}
	return 0;
}
