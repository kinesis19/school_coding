/* ���� ���� - �� ������ �ּڰ��� ���ϴ� PR*/
#include <stdio.h>
 
int min3(int a, int b, int c){
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	return min;
}
int main(){
	
	printf("�� ���� : %d %d %d -> �ּڰ� : %d\n", 1, 2, 3, min3(1, 2, 3));
	getch();// �б����� cmd�� �������� ���� �Ǿ, cmd â ������ �����ϱ� ���� �ۼ���. (���� PR���� �������� ����.) 
	
	return 0;
}
