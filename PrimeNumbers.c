#include <stdio.h>

int main(){
	int testCase,i=0;
	int primeNumber[1000],k=0,check,keepCase;
	
	scanf("%d",&testCase);
	getchar();
	
	keepCase = testCase;
	
	while(testCase != 0){
		if(i==0 || i==1){
			i++;
			continue;
		}else if(i==2 || i==3 || i==5 || i==7){
			primeNumber[k] = i;
			k++;
			i++;
			testCase--;
			continue;
		}else{
			for(int j=2;j<=i;j++){
				if(j==i && check != 1){
					primeNumber[k] = i;
					k++;
					testCase--;
				}else{
					if(i%j == 0){
						check = 1;
						break;
					}else if(i%j != 0){
						continue;
					}
				}
			}
			i++;
			check = 0;
		}
		
	}
	
	for(int k = 0;k<keepCase;k++){
		printf("%d ",primeNumber[k]);
	}

	return 0;
}

