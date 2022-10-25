/* 선형 검색 프로그램Ver.1*/
#include <stdio.h>

int LinearSearching(int idx_cnt, int find_num, int *x); /* 밑에서 사용할 함수를 미리 선언 함.*/

int main(){
	int idx_cnt = 0, i, idx_num = 0, find_num = 0; /* idx_cnt : 요소 개수, idx_num = 해당 요소에 넣을 값*/
	
	printf("[선형 검색PR]\n");
	printf("요소 개수 : ");
	scanf("%d", &idx_cnt); /*요소 개수를 사용자로부터 입력 받음.*/
	
	int x[idx_cnt]; /*사용자가 입력한 요소에 알맞은 사이즈의 int 형 배열 x를 선언함.*/
	
	for(i=0;i<idx_cnt;i++){ /*for문을 통해 사용자로부터 index값을 입력 받음(0부터 idx_cnt-1까지*/
		printf("x[%d] : ", i);
		scanf("%d", &idx_num);
		x[i] = idx_num;
	}
	printf("검색 값 : ");
	scanf("%d", &find_num); /*사용자로부터 찾을 값을 입력받음*/
	
	int result = LinearSearching(idx_cnt, find_num, x); /*리니어 서칭 함수를 통해 나온 리턴 값을 result변수에 넣음.*/
	
	if(result != -1){ /*result 변수의 값을 사용해 검색 결과를 출력 혹은 검색 결과가 없음을 출력 함.*/
		printf("%d은(는)x[%d]에 있습니다.", find_num, result);
	}else if(result == -1){
		printf("검색 결과가 없습니다.");
	}
//	free(x);
	getch();
	return 0;
}

int LinearSearching(int idx_cnt, int find_num, int *x){
	int i = 0;
	*&x[idx_cnt] = find_num;
	
	/*보초법 구상안*/
	
	
	while(1){
		if(*&x[i] == find_num) break;
		i++;
	} 
	
	return i == idx_cnt ? -1 : i;
	
	/*내 알고리즘*/
//	for(i=0;i<find_num;i++){
////		printf("n번째 시도 값 : %d\n", *&x[i]); /*디버깅 용*/
//		if(*&x[i]==find_num){
//			return i;
//		}else if(i==idx_cnt){
//			return -1;
//		}
//	}
}
