#include <stdio.h>

typedef struct point{
    int sNum;
    int gas;
}Point;

int main(){
    int n;
    scanf("%d", &n);

    Point arr[n];
    for(int i=0; i<n; i++)
        scanf("%d %d", &arr[i].sNum, &arr[i].gas);

    int cnt=n-1;

    while(cnt>0){
        for(int i=0; i<cnt; i++){
            int tmp;
            if(arr[i].sNum>arr[i+1].sNum){
                tmp=arr[i].sNum;
                arr[i].sNum=arr[i+1].sNum;
                arr[i+1].sNum=tmp;

                tmp=arr[i].gas;
                arr[i].gas=arr[i+1].gas;
                arr[i+1].gas=tmp;
            }
            else continue;
        }
        cnt--;
    }
    
    for(int i=0; i<n; i++)
        printf("%d %d\n", arr[i].sNum, arr[i].gas);

    return 0;
}