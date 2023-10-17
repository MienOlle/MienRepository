#include <stdio.h>

int main (){
	
	int c[3][3] = {{1,2,3},{3,4,5},{5,6,7}};
	int d[3][3] = {{2,3,4},{4,5,6},{6,7,8}};
	int perkalianMatrik [3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int matriks1=0,matriks2=0;
	
	for (int i=0;i<3;i++){
		for (int j=0;j<3;j++){
			printf ("%d\t", c[i][j]);
		}
		printf ("\n");
	}
	printf ("\n");

	for (int k=0;k<3;k++){
		for (int l=0;l<3;l++){
			printf ("%d\t", d[k][l]);
		}
		printf ("\n");
	}
	
	for(int m=0;m<3;m++){
		for(int n=0;n<3;n++){
			while(matriks2 != 3 && matriks1 != 3){
				perkalianMatrik[m][n] += c[m][matriks1]*d[matriks2][n];
				matriks1++;
				matriks2++;
			}
			matriks1=0;
			matriks2=0;
		}
	}
	
	printf("\n");
	
	for (int m=0;m<3;m++){
		for (int n=0;n<3;n++){
			printf ("%d\t",perkalianMatrik[m] [n]);
		} printf ("\n");
	}
	
	return 0;
}
