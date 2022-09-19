/* 세 정수의 최댓값 구하는 PR2*/
#include <stdio.h>

int max3(int a, int b, int c){
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	
	return max;
}

int main(){
	
	printf("max(%d %d %d) = %d\n", 3, 2, 1, max3(3, 2, 1));
	printf("max(%d %d %d) = %d\n", 5, 2, 8, max3(5, 2, 8));
	getch(); // 학교에서 cmd가 닫히도록 설정 되어서, cmd 창 닫힘을 방지하기 위해 작성함. (실제 PR과는 무관함을 밝힘.) 
		
	return 0;
}
