/* 1, 2, ~~~, n�� ���� ���ϴ� PR - (for��)*/
#include <stdio.h>

int main(){
	
	int i, n;
	int sum = 0;
	
	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� �� : ");
	scanf("%d", &n);
	i = 1;
	for(i = 1; i <= n; i++){
		sum += i;
	}
	
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	
	getch();
	
	return 0;
}
