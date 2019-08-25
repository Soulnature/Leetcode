#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define MAX 25000
class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
            int tem1[MAX];
            int tem2[MAX];
            int slen=A.size();
            cout<<slen<<endl;
            int numer=0,pos=0;
            for(int i=0;i<slen;i++)
                for(int j=0;j<slen;j++)
            {
                tem1[pos]=A[i]+B[j];
                tem2[pos]=0-(C[i]+D[j]);
                pos++;
            }
           // cout<<tem1[22];
            for(int k=0;k<pos;k++)
            {
            for(int z=0;z<pos;z++)
            {
                 if(tem1[k]==tem2[z])
                    numer++;

            }

            }



return numer;

    }
};
int main(){
    int a[]={-1,1,1,1,-1};
    int b[]={0,-1,-1,0,1};
    int c[]={-1,-1,1,-1,-1};
    int d[]={0,1,0,-1,-1};
    vector<int>A,B,C,D;
    for(int i=0;i<5;i++)
    {
        A.push_back(a[i]);
        B.push_back(b[i]);
        C.push_back(c[i]);
        D.push_back(d[i]);
    }
     Solution s;
     int res=s.fourSumCount(A,B,C,D);
     cout<<res;

    //cout<<B.size()<<endl;

        return 0;

}
