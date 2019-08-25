#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#define INF 10000000
using namespace std;
int main(){
    int a,x,s=0,MIN=INF,MAX=-INF,kesa=0;
    while(1){
    cin>>a;
    if(a==0)
        cout<<"process is stop"<<endl;
        break;
    else{

    for(int i=0;i<a;i++){
        cin>>x;
        if(x!=0){
          s+=x;
          if(x>MAX)
            MAX=x;
          if(x<MIN)
            MIN=x;
        }
        else
            break;

    }
    cout<<"case"<<kesa<<":"<<MAX<<" "<<MIN<<" "<<(double)s/a<<endl;
    kesa+=1;
      }
    }
      return 0;
}
