

#include<iostream>
#include<string>
#include<stdio.h>
#include<time.h>
using namespace std;
string convert(string s,int numRows){
    if(numRows==1)
        return s;
    int step=2*numRows-2;//���
    int add=0;
    int len=s.length();
    string ret;
    for(int i=0;i<numRows;i++){
       int index=i;
        add=i*2;
        while(index<len){
            ret+=s[index];
            add=step-add;//�����е��м��еķ���
            index+=(i==0||i==numRows-1)?step:add;//���һ�и���һ�е�setp���ǵ���sep��
        }
    }
    return ret;
}
int main(){
    string s;
    int numRows;
    cout<<"�������ַ������Ӧ������"<<endl;
    clock_t start,finish;
    start=clock();
    cin>>s>>numRows;
    string result=convert(s,numRows);
    cout<<result<<endl;
    finish=clock();
    cout<<"��������ʱ��Ϊ"<<(double)finish-start/CLOCKS_PER_SEC<<endl;
}

