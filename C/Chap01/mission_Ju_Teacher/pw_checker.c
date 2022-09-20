/* 주쌤 - 미션 Day3 : pw입력 받아 원하는 pw가 맞는지 체킹하는  PR*/
#include <stdio.h>
#include <string.h>

int main(){
	
	char input_pw[20] = "";
	char correct_pw[20] = "password123!";
	
	printf("Enter pw :");
	gets(input_pw);
	if(strcmp(input_pw, correct_pw) == 0){
		puts("PASS!");
	}else{
		puts("Discrepancy");
	}
	
	
	return 0;
}
