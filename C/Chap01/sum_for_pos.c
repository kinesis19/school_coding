/* 1, 2,~~~ n������ ���� ���մϴ� (do������ ���� �������� n������ �Է��մϴ�. */
#include <stdio.h>

int main(){
	int i, n;
	int sum = 0;
	do{
		printf("n�� : ");
		scanf("%d", &n);
	}while(n<=0);
	for(i = 1; i <= n; i++){
		sum += i;
	}
	
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	getch();
	
	return 0;
}


