#include <stdio.h>
void opear(int j, int n);
int main(){
	int iJ = 0, iN = 0; /* iJ = ���� �Է�, iN = ��ȯ�� �ѹ� �Է� */
	do{
		printf("������ �Է� (2����~36����) : ");
		scanf("%d", &iJ);
	}while(iJ<2 || 36<iJ); // ����� ����ó�� ���. 
	
	printf("Ÿ�� �ѹ� �Է� : ");
	scanf("%d", &iN); 
	
	opear(iJ, iN); // ���� ��ȯ ����. 
	
	return 0;
}

void opear(int j, int n){
	
	if(0 < n){ 
		opear(j, n/j);
		printf("%d", n%j);
	}
	
	
}


