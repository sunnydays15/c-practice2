# include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[1000001];
    int top = -1;

    int num, item;
    for(int i=0; i<N; i++){
        scanf("%d", &num);
        switch(num){
            case 1:
                scanf("%d", &item);
                top++;
                arr[top] = item;
                break;
            case 2:
                if(top == -1) printf("%d\n", -1);
                else{
                    printf("%d\n", arr[top]);
                    top--;
                }
                break;
            case 3:
                printf("%d\n", top+1);
                break;
            case 4:
                if(top == -1) printf("%d\n", 1);
                else printf("%d\n", 0);
                break;
            case 5:
                if(top == -1) printf("%d\n", -1);
                else{
                    printf("%d\n", arr[top]);
                }
        }
    }
}