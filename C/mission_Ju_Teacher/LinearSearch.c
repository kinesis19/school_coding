/* ���� �˻� ���α׷�Ver.1*/
#include <stdio.h>

int LinearSearching(int idx_cnt, int find_num, int *x); /* �ؿ��� ����� �Լ��� �̸� ���� ��.*/

int main(){
	int idx_cnt = 0, i, idx_num = 0, find_num = 0; /* idx_cnt : ��� ����, idx_num = �ش� ��ҿ� ���� ��*/
	
	printf("[���� �˻�PR]\n");
	printf("��� ���� : ");
	scanf("%d", &idx_cnt); /*��� ������ ����ڷκ��� �Է� ����.*/
	int x[idx_cnt]; /*����ڰ� �Է��� ��ҿ� �˸��� �������� int �� �迭 x�� ������.*/
	for(i=0;i<idx_cnt;i++){ /*for���� ���� ����ڷκ��� index���� �Է� ����(0���� idx_cnt-1����*/
		printf("x[%d] : ", i);
		scanf("%d", &idx_num);
		x[i] = idx_num;
	}
	printf("�˻� �� : ");
	scanf("%d", &find_num); /*����ڷκ��� ã�� ���� �Է¹���*/
	
	int result = LinearSearching(idx_cnt, find_num, x); /*���Ͼ� ��Ī �Լ��� ���� ���� ���� ���� result������ ����.*/
	
	if(result != -1){ /*result ������ ���� ����� �˻� ����� ��� Ȥ�� �˻� ����� ������ ��� ��.*/
		printf("%d��(��)x[%d]�� �ֽ��ϴ�.", find_num, result);
	}else if(result == -1){
		printf("�˻� ����� �����ϴ�.");
	}
	return 0;
}

int LinearSearching(int idx_cnt, int find_num, int *x){
	int i;
	for(i=0;i<find_num;i++){
//		printf("n��° �õ� �� : %d\n", *&x[i]); /*����� ��*/
		if(*&x[i]==find_num){
			return i;
		}else if(i==idx_cnt){
			return -1;
		}
	}
}





