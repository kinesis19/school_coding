/* �� ������ �ִ� ���ϴ� PR2*/
#include <stdio.h>

int max3(int a, int b, int c){
	int max = a;
	if(b > max) max = b;
	if(c > max) max = c;
	
	return max;
}

int main(){
	
	printf("max(%d %d %d) = %d\n", 3, 2, 1, max3(3, 2, 1));
	printf("max(%d %d %d) = %d\n", 5, 2, 8, max3(5, 2, 8));
	getch(); // �б����� cmd�� �������� ���� �Ǿ, cmd â ������ �����ϱ� ���� �ۼ���. (���� PR���� �������� ����.) 
		
	return 0;
}
