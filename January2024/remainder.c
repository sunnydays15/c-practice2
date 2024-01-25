//배열 안에 서로 다른 원소의 개수 세기
#include <stdio.h>
int main(){
    int arr[10];
    for(int i=0; i<10; i++){
        scanf("%d", &arr[i]);
    }
    int num[10];
    for(int i=0; i<10; i++){
        num[10]=arr[10]%42;
    }

    int cnt= 10;
    for(int i=0; i<10; i++){
        int ifnew=1;
        
        for(int j=0; j<i; j++){
            if(num[i]==num[j]){ifnew=0;}
        }

        for(int k=i+1; k<10; k++){
            if(ifnew==1 && num[i]==num[k]){cnt--;}
        }
    printf("%d\n", cnt);
    }
   // printf("%d\n", cnt);

}