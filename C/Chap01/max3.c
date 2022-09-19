/* 세 정수 값을 입력하고 최댓값을 구하는 PR */
#include <stdio.h>
 
int main(){
	
	int a, b, c;
	int max;
	printf("세 정수의 최댓값을 구합니다.\n");
	printf("a의 값 : "); scanf("%d", &a);
	printf("b의 값 : "); scanf("%d", &b);
	printf("c의 값 : "); scanf("%d", &c);
	
	max = a; //최댓값을 a로 지정함.  
	if(max < b) max = b; //만약 b의 값이 최댓값보다 크면 max에 b를 대입함. 
	if(max < c) max = c;
	
	printf("세 정수의 최댓값은 %d이다.", max);
	
	return 0;
}
