//Ѱ���ַ������ظ�������
//��һ������Ϊ n ����������������ֶ��� 0 �� n-1 �ķ�Χ�ڡ�
//������ĳЩ�������ظ��ģ�����֪���м����������ظ��ģ�Ҳ��֪��ÿ�������ظ����Ρ�
//���ҳ�����������һ���ظ�������
//method 1 ����ѡ������ķ���������ڽ�����ʱ������Ԫ����ͬ���ʾ����ظ���Ԫ��
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
                // ����numbers[i]��numbers[numbers[i]]
                swap(numbers[i], numbers[numbers[i]]);
            }
        }
        return false;
    }
};
int main(){

}
