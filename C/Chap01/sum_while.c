/* 1, 2, ~~~, n�� ���� ���ϴ�  PR*/
#include <stdio.h>

int main(){
	
	int i, n;
	int sum = 0;
	
	puts("1���� n������ ���� ���մϴ�.");
	printf("n�� �� : ");
	scanf("%d", &n);
	i = 1;
	while(i <= n){
		sum += i;
		i++;
	}
	
	printf("1���� %d������ ���� %d�Դϴ�.\n", n, sum);
	
	getch();
	
	return 0;
}
