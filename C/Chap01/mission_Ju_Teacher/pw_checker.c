/* �ֽ� - �̼� Day3 : pw�Է� �޾� ���ϴ� pw�� �´��� üŷ�ϴ�  PR*/
#include <stdio.h>
#include <string.h>

int main(){
	int checker = 0; // true ,false �Ǵ�
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
