#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,mat1[2][2],mat2[2][2],mat3[2][2];
	printf("\nEnter Data For Matrix 1");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nMatrix Mat1[%d][%d]: ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\nEnter Data For Matrix 2");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nMatrix Mat2[%d][%d]: ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("\nThe Resultant Matrix Mat3 is :");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%5d",mat3[i][j]);
		}
		printf("\n");
	}
	return 0;
}
