#include <stdio.h>

/* �ڽ����� ���� �ִ� ��� �ڵ�(�����ϵ��� ����ϸ鼭 ������)*/

int card_convr(unsigned x, int n, char d[]){
	char dchar[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWSYZ";
	int digits = 0;
	
	if(x == 0){
		d[digits++] = dchar[0];
	} else{
		while(x){
			d[digits++] = dchar[x % n];
			x /= n;
		}
	}
	return digits;
}

int main(){
	int i, cd, dno, retry;
	unsigned int no;
	char cno[512];
	puts("10������ ���� ��ȯ�ҰԿ�.");
	
	do{
		printf("��ȯ�ϴ� ���� �ƴ� ���� : ");
		scanf("%u", &no);
		do{
			printf("� ������ ��ȯ�ұ��?(2~36) : ");
			scanf("%d", &cd);
		}while(cd < 2 || cd > 36);
		dno = card_convr(no, cd, cno);
		printf("%d�����δ�", cd);
		for(i = dno - 1; i >= 0; i--){
			printf("%c", cno[i]);
		}
		printf("�Դϴ�.\n�� �� �� �ұ��? (1:�� / 0:�ƴϿ�)");
		scanf("%d", &retry);
	}while(retry == 1);
	
	return 0;
}




// <������ ���� ������ �ڵ� => 16���� ��½� ���� ��� �ȵǴ� �� ���� �߻���.> 
//void opear(int j, int n);
//int main(){
//	int iJ = 0, iN = 0; /* iJ = ���� �Է�, iN = ��ȯ�� �ѹ� �Է� */
//	do{
//		printf("������ �Է� (2����~36����) : ");
//		scanf("%d", &iJ);
//	}while(iJ<2 || 36<iJ); // ����� ����ó�� ���. 
//	
//	printf("Ÿ�� �ѹ� �Է� : ");
//	scanf("%d", &iN); 
//	
//	opear(iJ, iN); // ���� ��ȯ ����. 
//	
//	return 0;
//}
//
//void opear(int j, int n){
//	
//	if(0 < n){ 
//		opear(j, n/j);
//		printf("%d", n%j);
//	}
//	
//	
//}
//

