#include <stdio.h>

int main(){
	int testCase,i=0;
	int primeNumber[1000],k=0,keepCase;
	
	scanf("%d",&testCase);
	getchar();
	
	keepCase = testCase;
	
	while(testCase != 0){
		if(i==0 || i==1){
			i++;
			continue;
		}else{
			for(int j=2;j<=i;j++){
				if(j==i){
					primeNumber[k] = i;
					k++;
					testCase--;
				}else{
					if(i%j == 0){
						break;
					}else if(i%j != 0){
						continue;
					}
				}
			}
			i++;
		}
		
	}
	
	for(int k = 0;k<keepCase;k++){
		printf("%d ",primeNumber[k]);
	}

	return 0;
}


