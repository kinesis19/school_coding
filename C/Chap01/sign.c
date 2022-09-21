/* 입력받은 정수 값의 부호(양수/음수/0)를 판단하는 PR*/
#include <stdio.h>

int main(){
	
	int n;
	
	printf("정수를 입력하세요. : ");
	scanf("%d", &n);
	if(n > 0){
		printf("이 정수는 양수입니다.\n");
	}else if(n < 0){
		printf("이 정수는 음수입니다.\n");
	}else{
		printf("이 수는 0입니다.\n");
	}
	
	getch();
	
	return 0;
}
