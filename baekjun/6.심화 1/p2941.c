/*
c=  c-  dz=  d-  lj  nj  s=  z=
c는 뒤에 =,-
d는 뒤에 z,- 이후에 z 뒤에 =
l은 뒤에 j
n은 뒤에 j
s는 뒤에 =
z는 뒤에 =  오는지 확인
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s", str);

    int len=strlen(str);
    int cnt=0;

    for(int i=0; i<len; i++){
        if(str[i]=='c'){
            if(str[i+1]=='=' || str[i+1]=='-'){
                cnt++;
                i++;
                continue;
            }
            else{
                cnt++;
                continue;
            }
        }
        else if(str[i]=='d'){
            if(str[i+1]=='z'){
                if(str[i+2]=='='){
                    cnt++;
                    i+=2;
                    continue;
                }
                else{
                    cnt++;
                    continue;
                }
            }
            else if(str[i+1]=='-'){
                cnt++;
                i++;
                continue;
            }
            else{
                cnt++;
                continue;
            }
        }
        else if(str[i]=='l'){
            if(str[i+1]=='j'){
                cnt++;
                i++;
                continue;
            }
            else{
                cnt++;
                continue;
            }
        }
        else if(str[i]=='n'){
            if(str[i+1]=='j'){
                cnt++;
                i++;
                continue;
            }
            else{
                cnt++;
                continue;
            }
        }
        else if(str[i]=='s'){
            if(str[i+1]=='='){
                cnt++;
                i++;
                continue;
            }
            else{
                cnt++;
                continue;
            }
        }
        else if(str[i]=='z'){
            if(str[i+1]=='='){
                cnt++;
                i++;
                continue;
            }
            else{
                cnt++;
                continue;
            }
        }
        else
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}