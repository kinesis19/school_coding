/* �ֽ� - �̼� Day3 : pw�Է� �޾� ���ϴ� pw�� �´��� üŷ�ϴ�  PR*/
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
