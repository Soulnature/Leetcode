

//��̬�滮�㷨 xample[���ϵ��¼������ĺ�]

//input��5
//       1
//       2 3
//       4 5 6
//       7 8 9 10
//       11 12 13 14 15
//output: �������ֵ
#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
#define MAX 100
using namespace std;
int D[MAX][MAX];
int maxSum[MAX][MAX];
int n;
int MaxSum(int i,int j){
    if(maxSum[i][j]!=-1)
        return maxSum[i][j];
    if(i==n)
        return D[i][j];
    else{
        int x=MaxSum(i+1,j);
        int y=MaxSum(i+1,j+1);
        return max(x,y)+D[i][j];
    }
}
int main(){
    int i,j;
    cin>>n;
   // cout<<n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cin>>D[i][j];
            maxSum[i][j]=-1;
        }
    }
    cout<<"D�����������"<<D[2][4]<<endl;
    cout<<MaxSum(1,1)<<endl;
    return 0;
}
