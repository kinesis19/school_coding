#include <stdio.h>
void opear(int j, int n);
int main(){
	int iJ = 0, iN = 0; /* iJ = 진법 입력, iN = 변환할 넘버 입력 */
	do{
		printf("진법을 입력 (2부터~36까지) : ");
		scanf("%d", &iJ);
	}while(iJ<2 || 36<iJ); // 사용자 예외처리 기능. 
	
	printf("타겟 넘버 입력 : ");
	scanf("%d", &iN); 
	
	opear(iJ, iN); // 진법 변환 실행. 
	
	return 0;
}

void opear(int j, int n){
	
	if(0 < n){ 
		opear(j, n/j);
		printf("%d", n%j);
	}
	
	
}


