/* b-a�� ����ϴ� PR (��, b�� ���� a���ϸ� b���� ���Է�.)*/
#include <stdio.h>

int main(){
	int a, b;
	int sum = 0;
	
	do{
		printf("a�� �� : ");
		scanf("%d", &a);
		printf("b�� �� : ");
		scanf("%d", &b); 
	}while(a>=b);
	
	sum = b-a;
	printf("b-a�� %d�Դϴ�.", sum);
	
	getch();
	
	return 0;
}

 
