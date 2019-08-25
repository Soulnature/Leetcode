#include<iostream>
#include<stdio.h>
using namespace std;
int sqrt(int x){
    if(x==0){
        return 0;
    }
    int max1=x-1;
    int start=0;
    int mid;
    while(start+1<max1){
        mid=start+(max1-start)/2;
        if(mid*mid==x){

            return mid;
        }

        else if(mid*mid>x){

            max1=mid;
        }
        else if(mid*mid<x){
            start=mid;
        }
    }
        if(start*start==x){
            return start;
        }else if(max1*max1==x){

        return max1;
        }
        else if(max1*max1>x&&start*start<x){

            return start;
        }

    return -1;
}
int main(){
 int a=4;
 cin>>a;
 cout<<sqrt(a)<<endl;

}
