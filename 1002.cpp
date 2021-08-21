#include<iostream>
using namespace std;

int main(){
    double coef[1001]={0};
    int K, M, N;
    double a;
    cin>>K;
    for(int i=0;i<K;i++){
        scanf("%d%lf", &N, &a);
        coef[N]+=a;
    }
    cin>>M;
    for(int i=0;i<M;i++){
        scanf("%d%lf", &N, &a);
        coef[N]+=a;
    }
    int n=0;
    for(int j=0;j<1001;j++){
        if(coef[j]!=0){
            n++;
        }
    }
    printf("%d",n);
    for (int i = 1000; i >= 0; i--) {
        if(coef[i]!=0.0){
           printf(" %d %.1f",i,coef[i]);
        }
    }
}
