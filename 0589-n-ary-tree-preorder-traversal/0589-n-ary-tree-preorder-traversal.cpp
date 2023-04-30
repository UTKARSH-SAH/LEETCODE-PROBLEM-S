class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> vec;
        if(root!=NULL)
        {
            vec.push_back(root->val);
            for(int i=0; i<root->children.size(); i++)
            {
                vector<int> vec1 = preorder(root->children[i]);
                vec.insert(end(vec), begin(vec1), end(vec1));
            }
        }
        return vec;
    }
};