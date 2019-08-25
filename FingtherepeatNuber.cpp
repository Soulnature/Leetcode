//寻找字符串中重复的数字
//在一个长度为 n 的数组里的所有数字都在 0 到 n-1 的范围内。
//数组中某些数字是重复的，但不知道有几个数字是重复的，也不知道每个数字重复几次。
//请找出数组中任意一个重复的数字
//method 1 考虑选择排序的方法，如果在交换的时候两个元素相同，故就是重复的元素
#include<stdio.h>
#include<math.h>
class Solution {
public:
    bool duplicate(int numbers[], int length, int* duplication) {
        if(numbers == nullptr || length <= 0)
            return false;

        for(int i = 0; i < length; ++i) {
            while(numbers[i] != i) {
                if(numbers[i] == numbers[numbers[i]]) {
                    *duplication = numbers[i];
                    return true;
                }
                // 交换numbers[i]和numbers[numbers[i]]
                swap(numbers[i], numbers[numbers[i]]);
            }
        }
        return false;
    }
};
int main(){

}
