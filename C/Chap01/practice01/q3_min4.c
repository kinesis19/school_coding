/* ���� ���� - �� ������ �ּڰ��� ���ϴ� PR*/
#include <stdio.h>
 
int min4(int a, int b, int c, int d){
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	if(d < min) min = d;
	return min;
}
int main(){
	
	printf("�� ���� : %d %d %d %d -> �ּڰ� : %d\n", 3, 2, 7, 10, min4(3, 2, 7, 10));
	getch();// �б����� cmd�� �������� ���� �Ǿ, cmd â ������ �����ϱ� ���� �ۼ���. (���� PR���� �������� ����.) 
	
	return 0;
}
