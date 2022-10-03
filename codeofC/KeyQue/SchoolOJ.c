
//1200 : log2(N)
#include <stdio.h>
long long int num;
int count=0;
int GetLog2(long long int n){
    if(n >= 2){
        count++;
        GetLog2(n/2);
    }else
        return count;
}
int main(){
    scanf("%lld",&num);
    printf("%d\n",GetLog2(num));
    return 0;
}