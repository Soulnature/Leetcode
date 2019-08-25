

#include<iostream>
#include<string>
#include<stdio.h>
#include<time.h>
using namespace std;
string convert(string s,int numRows){
    if(numRows==1)
        return s;
    int step=2*numRows-2;//间距
    int add=0;
    int len=s.length();
    string ret;
    for(int i=0;i<numRows;i++){
       int index=i;
        add=i*2;
        while(index<len){
            ret+=s[index];
            add=step-add;//来进行第中间行的分离
            index+=(i==0||i==numRows-1)?step:add;//最后一行跟第一行的setp总是等于sep的
        }
    }
    return ret;
}
int main(){
    string s;
    int numRows;
    cout<<"请输入字符串与对应的行数"<<endl;
    clock_t start,finish;
    start=clock();
    cin>>s>>numRows;
    string result=convert(s,numRows);
    cout<<result<<endl;
    finish=clock();
    cout<<"程序运行时间为"<<(double)finish-start/CLOCKS_PER_SEC<<endl;
}

