/* 연습 문제 - 세 정수의 최솟값을 구하는 PR*/
#include <stdio.h>
 
int min3(int a, int b, int c){
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	return min;
}
int main(){
	
	printf("세 정수 : %d %d %d -> 최솟값 : %d\n", 1, 2, 3, min3(1, 2, 3));
	getch();// 학교에서 cmd가 닫히도록 설정 되어서, cmd 창 닫힘을 방지하기 위해 작성함. (실제 PR과는 무관함을 밝힘.) 
	
	return 0;
}
