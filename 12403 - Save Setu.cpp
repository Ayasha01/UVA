#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

int main(){
    int test ,sum = 0,k;
    char in[20];
    scanf("%d",&test);
    for(int i = 0;i < test;i++){
        scanf("%s",in);
        if(strcmp(in,"donate")==0){
            scanf("%d",&k);
            sum += k;
        }
        else
        printf("%d\n",sum);

    }
    return 0;
}
