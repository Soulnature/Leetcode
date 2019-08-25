

//动态规划算法 xample[从上到下计算最大的和]

//input：5
//       1
//       2 3
//       4 5 6
//       7 8 9 10
//       11 12 13 14 15
//output: 输出最大的值
#include<stdio.h>
#include<math.h>
#include<algorithm>
#define MAX 101
using namespace std;
int D[MAX][MAX];
int n;
int MaxSum(int i,int j){
    if(i==n)
        return D[i][j];
    int x=MaxSum(i+1,j);
    int y=MaxSum(i+1,j+1);
    return max(x,y)+D[i][j];
}
int main(){
    int i,j;
    cin>>n;
    for(i=1;i<=n;j++)
        for(j=1;j<=i;j++)
            cin>>D[i][j];
count<<MaxSum(1,1)<<endl;
}
