#include <stdio.h>
int main() {
	// 수 10개를 입력받은 뒤, 이를 42로 나눈 나머지를 구함
	int num[10], check[10];
	for(int i=0;i<10;i++){
		scanf("%d", &num[i]);
		check[i] = num[i]%42;
	}
	// 서로 다른 값이 몇개 있는지 출력하는 프로그램
	int cnt=0;
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(check[j]==check[i] && i!=j)
				cnt++;
		}
	}
	printf("%d\n", (100-cnt)/10);

	return 0;
}