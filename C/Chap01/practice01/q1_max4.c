/* ���� ���� - �� ������ �ִ� ���ϴ� PR*/
#include <stdio.h>
 
int max4(int a, int b, int c, int d){
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	if(d > max) max = d;	
	return max;
}
int main(){
	
	printf("�� ���� : %d %d %d %d -> �ִ� : %d\n", 1, 2, 3, 4, max4(1, 2, 3, 4));
	getch();// �б����� cmd�� �������� ���� �Ǿ, cmd â ������ �����ϱ� ���� �ۼ���. (���� PR���� �������� ����.) 
	
	return 0;
}