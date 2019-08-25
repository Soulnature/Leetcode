
//Palindromic Substrings
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;
int countSubstrings(string s){
    int n=s.length(),m=s.length();
    for(int i=0;i<m;i++){
        if(i>0&&s[i]==s[i-1]){
            int p=i-1,q=i;
            while(p>=0&&q<m&&s[p]==s[q]){
                n++;
                p--;
                q++;
            }
        }
        int p=i-1,q=i+1;
        while(p>=0&&q<m&&s[p]==s[q]){
                n++;
                p--;
                q++;
        }
    }
    return n;
}

int main(){
    string s="aaa";
   //cout<<s.substr(0,3);
    int ss=countSubstrings(s);
    cout<<ss<<endl;
    return 0;

}





