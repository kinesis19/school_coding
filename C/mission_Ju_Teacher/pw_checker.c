/* 주쌤 - 미션 Day3 : pw입력 받아 원하는 pw가 맞는지 체킹하는  PR*/
#include <stdio.h>
#include <string.h>

int main(){
	int checker = 0; // true ,false 판단
	char input_pw[20];
//	char correct_pw[20] = "password123!";
	
	printf("Enter pw :");
	gets(input_pw);
		
	if(strcmp(input_pw, "password123!"/*correct_pw*/) == 0)
	{
//		puts("PASS!");
		checker = 1;
	}else{
//		puts("Discrepancy");
	}
	
	if(checker){
		puts("PASS!");
	}else{
		puts("Discrepancy");
	}
	
	getch();
	
	
	return 0;
}
