#include<iostream>
#include<cctype>
using namespace std;
string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int main(){
    int sum=0;
    char c;
    while(isdigit(c=getchar())){
        sum+=c-'0';
    }
    string temp=to_string(sum);
    for(int i=0;i<temp.size();i++){
        if(i>0){
            cout<<" ";
        }
        cout<<str[temp[i]-'0'];
    }
    
}
