/* 주쌤 - 미션 Day3 : pw입력 받아 원하는 pw가 맞는지 체킹하는  PR*/
#include <stdio.h>



int main(){
	
	char[20] input_pw = "";
	char[20] checker_pw = "HelloWorld";
	
	printf("PW를 입력하시오. : ");
	gets("%s", &input_pw);
	
	if(input_pw == checker_pw){
		printf("통과!");
	}else{
		printf("실패!");
	}
	getch();// 학교에서 cmd가 닫히도록 설정 되어서, cmd 창 닫힘을 방지하기 위해 작성함. (실제 PR과는 무관함을 밝힘.) 
	
	return 0;
}
