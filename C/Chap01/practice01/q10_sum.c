/* b-a를 출력하는 PR (단, b의 값이 a이하면 b값을 재입력.)*/
#include <stdio.h>

int main(){
	int a, b;
	int sum = 0;
	
	do{
		printf("a의 값 : ");
		scanf("%d", &a);
		printf("b의 값 : ");
		scanf("%d", &b); 
	}while(a>=b);
	
	sum = b-a;
	printf("b-a는 %d입니다.", sum);
	
	getch();
	
	return 0;
}

 
