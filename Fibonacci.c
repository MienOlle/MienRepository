#include <stdio.h>

int main(){
	int testCase,a=1,b=1,sum;
	
	scanf("%d",&testCase);
	getchar();
	
	for(int i=0;i<testCase-1;i++){
		if(a==1 && b==1){
			printf("%d %d ",a,b);
			sum = a + b;
			a = b;
			b = sum;
		}else{
			printf("%d ",sum);
			sum = a + b;
			a = b;
			b = sum;
		}
	}

	return 0;
}

