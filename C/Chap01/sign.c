/* �Է¹��� ���� ���� ��ȣ(���/����/0)�� �Ǵ��ϴ� PR*/
#include <stdio.h>

int main(){
	
	int n;
	
	printf("������ �Է��ϼ���. : ");
	scanf("%d", &n);
	if(n > 0){
		printf("�� ������ ����Դϴ�.\n");
	}else if(n < 0){
		printf("�� ������ �����Դϴ�.\n");
	}else{
		printf("�� ���� 0�Դϴ�.\n");
	}
	
	getch();
	
	return 0;
}
