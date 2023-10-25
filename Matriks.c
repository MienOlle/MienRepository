#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int beginMatrix[2][100][100];
	int matriks1=0,matriks2=0,testCase,sizeRow[100],sizeColumn[100];
	
	printf("PERKALIAN MATRIKS\n");
	
	for(int i=0;i<2;i++){
		printf("\nSize of matrix-%d (line x column) : ",i+1);
		scanf("%d x %d",&sizeRow[i],&sizeColumn[i]);
		getchar();
		
		for(int j=0;j<sizeRow[i];j++){
			printf("Enter the number in row-%d : ",j+1);
			
			for(int k=0;k<sizeColumn[i];k++){
				scanf("%d", &beginMatrix[i][j][k]);
				getchar();
			}
		}
	}
	printf("\n");
	
	for(int j = 0;j<sizeRow[0];j++){
		for(int k = 0;k<sizeColumn[0];k++){
			printf("%d ",beginMatrix[0][j][k]);
		}
		printf("\n");
	}
		
		printf("\nx\n\n");
		
	for(int j=0;j<sizeRow[1];j++){
		for(int k = 0;k<sizeColumn[1];k++){
			printf("%d ",beginMatrix[1][j][k]);
		}
		printf("\n");
	}
	
	int perkalianMatrik[sizeRow[0]][sizeColumn[1]];
	
	printf("\n=\n\n");
	
	if(sizeColumn[0] != sizeRow[1]){
		printf("Invalid. Matrix of size %d x %d can't be multiplied with matrix of size %d x %d\n",sizeRow[0],sizeColumn[0],sizeRow[1],sizeColumn[1]);
	}else if(sizeColumn[0] == sizeRow[1]){
		for(int i = 0;i<sizeRow[0];i++){
			for(int j = 0;j<sizeColumn[1];j++){
				perkalianMatrik[i][j] = 0;
			}
		}
		
		for(int m=0;m<sizeRow[0];m++){
			for(int n=0;n<sizeColumn[1];n++){
				while(matriks2 != sizeRow[1] && matriks1 != sizeRow[1]){
					perkalianMatrik[m][n] += beginMatrix[0][m][matriks1]*beginMatrix[1][matriks2][n];
					matriks1++;
					matriks2++;
				}
				matriks1=0;
				matriks2=0;
			}
		}
			
		for (int m=0;m<sizeRow[0];m++){
			for (int n=0;n<sizeColumn[1];n++){
				printf ("%d ",perkalianMatrik[m][n]);
			}
			printf ("\n");
		}	
	}
	return 0;
}
