#include <stdio.h>

/* 자습서에 나와 있는 모법 코드(이해하도록 노력하면서 구성함)*/

int card_convr(unsigned x, int n, char d[]){
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWSYZ";
	int digits = 0;
	
	if(x == 0){
		d[digits++] = dchar[0];
	} else{
		while(x){
			d[digits++] = dchar[x % n];
			x /= n;
		}
	}
	return digits;
}

int main(){
	int i, cd, dno, retry;
	unsigned int no;
	char cno[512];
	puts("10진수를 진수 변환할게요.");
	
	do{
		printf("변환하는 음이 아닌 정수 : ");
		scanf("%u", &no);
		do{
			printf("어떤 진수를 변환할까요?(2~36) : ");
			scanf("%d", &cd);
		}while(cd < 2 || cd > 36);
		dno = card_convr(no, cd, cno);
		printf("%d진수로는", cd);
		for(i = dno - 1; i >= 0; i--){
			printf("%c", cno[i]);
		}
		printf("입니다.\n한 번 더 할까요? (1:네 / 0:아니요)");
		scanf("%d", &retry);
	}while(retry == 1);
	
	return 0;
}




// <기존에 내가 구성한 코드 => 16진수 출력시 문자 출력 안되는 논리 오류 발생함.> 
//void opear(int j, int n);
//int main(){
//	int iJ = 0, iN = 0; /* iJ = 진법 입력, iN = 변환할 넘버 입력 */
//	do{
//		printf("진법을 입력 (2부터~36까지) : ");
//		scanf("%d", &iJ);
//	}while(iJ<2 || 36<iJ); // 사용자 예외처리 기능. 
//	
//	printf("타겟 넘버 입력 : ");
//	scanf("%d", &iN); 
//	
//	opear(iJ, iN); // 진법 변환 실행. 
//	
//	return 0;
//}
//
//void opear(int j, int n){
//	
//	if(0 < n){ 
//		opear(j, n/j);
//		printf("%d", n%j);
//	}
//	
//	
//}
//

