/* 1, 2,~~~ n까지의 합을 구합니다 (do문에서 양의 정수만을 n값으로 입력합니다. */
#include <stdio.h>

int main(){
	int i, n;
	int sum = 0;
	do{
		printf("n값 : ");
		scanf("%d", &n);
	}while(n<=0);
	for(i = 1; i <= n; i++){
		sum += i;
	}
	
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	getch();
	
	return 0;
}


