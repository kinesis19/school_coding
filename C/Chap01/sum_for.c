/* 1, 2, ~~~, n의 합을 구하는 PR - (for문)*/
#include <stdio.h>

int main(){
	
	int i, n;
	int sum = 0;
	
	puts("1부터 n까지의 합을 구합니다.");
	printf("n의 값 : ");
	scanf("%d", &n);
	i = 1;
	for(i = 1; i <= n; i++){
		sum += i;
	}
	
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);
	
	getch();
	
	return 0;
}
