/* 주쌤 - 미션 Day3 : pw입력 받아 원하는 pw가 맞는지 체킹하는  PR*/
#include <stdio.h>
#include <string.h>

int main(){
	
	char input_pw[20] = "";
	char correct_pw[20] = "password123!";
	
	printf("pw를 입력하시오 : ");
	gets(input_pw);
	if(strcmp(input_pw, correct_pw) == 0){
		puts("pw가 일치합니다.");
	}else{
		puts("pw가 불일치합니다..");
	}
	
	
	return 0;
}
