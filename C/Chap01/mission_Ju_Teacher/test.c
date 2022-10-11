#include <stdio.h>

int main(){
	char a = '1';
	char b[4] = " ";
	printf("%c\n", a);
	int i = 0, cnt = 1;
	
	for(i = 0; i<=3;i++){
		b[i] = cnt;
		cnt++;
	}
	printf("%s\n", b[0]);
	return 0;
}
