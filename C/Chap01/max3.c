/* �� ���� ���� �Է��ϰ� �ִ��� ���ϴ� PR */
#include <stdio.h>
 
int main(){
	
	int a, b, c;
	int max;
	printf("�� ������ �ִ��� ���մϴ�.\n");
	printf("a�� �� : "); scanf("%d", &a);
	printf("b�� �� : "); scanf("%d", &b);
	printf("c�� �� : "); scanf("%d", &c);
	
	max = a; //�ִ��� a�� ������.  
	if(max < b) max = b; //���� b�� ���� �ִ񰪺��� ũ�� max�� b�� ������. 
	if(max < c) max = c;
	
	printf("�� ������ �ִ��� %d�̴�.", max);
	
	return 0;
}
