/* �ֽ� - �̼� Day3 : pw�Է� �޾� ���ϴ� pw�� �´��� üŷ�ϴ�  PR*/
#include <stdio.h>



int main(){
	
	char[20] input_pw = "";
	char[20] checker_pw = "HelloWorld";
	
	printf("PW�� �Է��Ͻÿ�. : ");
	gets("%s", &input_pw);
	
	if(input_pw == checker_pw){
		printf("���!");
	}else{
		printf("����!");
	}
	getch();// �б����� cmd�� �������� ���� �Ǿ, cmd â ������ �����ϱ� ���� �ۼ���. (���� PR���� �������� ����.) 
	
	return 0;
}
