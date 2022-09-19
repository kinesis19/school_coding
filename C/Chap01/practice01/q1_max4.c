/* 연습 문제 - 네 정수의 최댓값 구하는 PR*/
#include <stdio.h>
 
int max4(int a, int b, int c, int d){
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	if(d > max) max = d;	
	return max;
}
int main(){
	
	printf("네 정수 : %d %d %d %d -> 최댓값 : %d\n", 1, 2, 3, 4, max4(1, 2, 3, 4));
	getch();// 학교에서 cmd가 닫히도록 설정 되어서, cmd 창 닫힘을 방지하기 위해 작성함. (실제 PR과는 무관함을 밝힘.) 
	
	return 0;
}
