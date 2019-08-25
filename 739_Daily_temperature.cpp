#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int>ans(T.size(),0);//initial the empty vector to conserve the result
        stack<int>res;//build a decrease stack
        for(int i=T.size()-1;i>=0;--i)//Traversing the vector,and the last one h
        {
            while(!res.empty()&&T[i]>=T[res.top()])
                res.pop();
            if(res.empty())
                ans[i]=0;
            else
                ans[i]=res.top()-i;
            res.push(i);
        }
        return ans;
    }

};

int main(){

    //test example
    int a[]={73, 74, 75, 71, 69, 72, 76, 73};
    vector<int> vec1;
    for(int i=0;i<8;i++)
    vec1.push_back(a[i]);
    Solution s;
    vector<int> ans=s.dailyTemperatures(vec1);
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;

}
