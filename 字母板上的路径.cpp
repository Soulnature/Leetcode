#include<map>
#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
#include <stdlib.h>
using namespace std;
class Solution {
public:
    string alphabetBoardPath(string target) {
        char maps[10][6]={"abcde", "fghij", "klmno", "pqrst", "uvwxy", "z"};//��26����ĸ�����ַ�����ÿ����5��
        map<char,pair<int,int> > matrix;//����1��map���洢����λ�����ַ�
        for(int i=0;i<6;i++)
            for(int j=0;j<5;j++)
             matrix[maps[i][j]]=make_pair(i,j);//����ĸ����map��

        //record the initialization location
        int nx=0,ny=0;
        string out;
        for(int k=0;k<target.length();k++){
            int chx=nx-matrix[target[k]].first;//map��first��sencond���㷨��first��pair�еĵ�һ��
            int chy=ny-matrix[target[k]].second;
           // cout<<chx<<" "<<chy<<endl;
            if(chx==0&&chy==0){
                out.push_back('!');//push_back�����ַ�����������һ���ַ�����vector�еķ���
              //  out.append("!");���string�е���ӷ���
            }
            else{
                if(chx>0){
                  for(int i=0;i<chx;i++)
                    out.push_back('U');
                }
                if(chy>0){
                  for(int i=0;i<chy;i++)
                    out.push_back('L');
                }
                if(chx<0){
                  for(int i=0;i<abs(chx);i++)
                    out.push_back('D');
                }

                if(chy<0){
                  for(int i=0;i<abs(chy);i++)
                    out.push_back('R');
                }
                 out.push_back('!');
            }
            nx=matrix[target[k]].first;
            ny=matrix[target[k]].second;
        }

        return out;
    }
};

int main(){
   Solution s;
   string target = "leet";
   string out1=s.alphabetBoardPath(target);
   cout<<out1;
}
