//�������ϲ�
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(t1==nullptr){
            return t2;
        }
        if(t2==nullptr){
            return  t1;
        }
        t1->val+=t2->val;
        t1->left=mergeTrees(t1->left,t2->left);
        t1->right=mergeTrees(t1->right,t2->right);
        return t1;
    }
};
//�������Գƣ��ݹ�ʵ�֣�##����ʵ�ֶ������ĸ���
  bool isSymmetric(TreeNode* root) {
        return ismirror(root,root);
    }

    bool ismirror(TreeNode* p,TreeNode* q){
        if(!p&&!q)//��ΪNULL
            return true;
        if(!p||!q)//��һ��ΪNULL
            return false;
        if(p->val==q->val)
            return ismirror(p->left,q->right)&&ismirror(p->right,q->left);
        return false;
    }


