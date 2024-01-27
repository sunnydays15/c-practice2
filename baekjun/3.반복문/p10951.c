#include <stdio.h>
int main() {
	int A,B;
	int cnt=0;
	int arr[100];
	while(1){
		scanf("%d %d", &A, &B);

		arr[cnt] = A+B;

		if(A==0&&B==0)
			break;
		else
			cnt++;
	}
	for(int i=0; i<cnt; i++)
		printf("%d\n",arr[i]);

	return 0;
}