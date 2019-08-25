#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
class Solution{
int binarySearch(vector<int> &A,int target){
if(A.size()==0){
    return -1;
}
int start=0;
int end=A.size()-1;
int mid;
while(start+1<end){
    mid=start+(end-start)/2;
    if(A[mid]==target){
        end=mid
    }else if(A[mid]>target){
        end=mid;
    }else if(A[mid]<target){
     start=mid;
    }
}
if(A[start]==target)
    return start;
if(A[end]==target)
    return end;
return -1;
}
};
