#pragma once
#include "BinaryTree.h"
using namespace std;


class BinarySearchTree : public BinaryTree
{
private:
    int GetHeightPrivate(TreeNode* node);
    void DeleteTreePrivate(TreeNode* node);

public:
    BinarySearchTree();
    void GetHeight();
    ~BinarySearchTree();
};
