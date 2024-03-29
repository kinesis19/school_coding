/* 소수 나열하는 PR을 만들어 보자.*/
#include <stdio.h>

int main(){
	
	int i, j, cnt = 0; // i : 타겟 넘버 (1부터 ~100까지), j : 소수 체커(1부터~i까지), cnt : 소수 카운터. 
	printf("1부터 100까지의 숫자 중에서 소수(PrimeNumber)는 무엇인지 찾아보겠습니다.\n");
	/* 1은 예외 처리 해야 함. // 수의 근본 : 2, 3, 5 */
	for(i = 1; i < 100; i++){ /*(제한) 1부터 100까지의 숫자*/ 
		for(j = 1; j < i; j++){
			if(i%2 == 0){
				if(i==2) printf("%d\n", i); break; // 2일 때는 출력, 나머지(2의 배수)는 출력 X 
			}else if(i%3 == 0){
				if(i==3) printf("%d\n", i); break; // 3일 때는 출력, 나머지(3의 배수)는 출력 X 
			}else if(i%5 == 0){
				if(i==5) printf("%d\n", i); break; // 5일 때는 출력, 나머지(5의 배수)는 출력 X 
			}else{
				printf("%d\n", i); cnt++; break; // 2, 3, 5로 나눴을 때 나머지가 0이 아닌 소수들 출력 O 
			}
		}
	}
	
	printf("1부터 100까지의 숫자들 중 소수의 갯수 : %d", cnt);
	
	return 0;
}



