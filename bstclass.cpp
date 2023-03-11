class BST
{
    BinaryTreeNode<int> *root;

public:
    BST()
    {
        root = NULL;
    }

    /*----------------- Public Functions of BST -----------------*/
private:
    BinaryTreeNode<int> *remove(int data, BinaryTreeNode<int> *root)
    {
        if (root == NULL)
        {
            return NULL;
        }

        if (root->left == NULL && root->right == NULL)
        {
            if (root->data == data)
            {
                delete root;
                return NULL;
            }

            return root;
        }
        else if (root->left == NULL)
        {
            BinaryTreeNode<int> *node = root->right;
            if (root->data == data)
            {
                delete root;
                return node->right;
            }
            else
            {
                root->right = remove(data, root->right);
            }
        }
        else if (root->right == NULL)
        {
            BinaryTreeNode<int> *node = root->left;
            if (root->data == data)
            {
                delete root;
                return node->left;
            }
            else
            {
                root->left = remove(data, root->left);
            }
        }
        else
        {
            remove(data, root->left);
            remove(data, root->right);
        }
        return root;
    }

public:
    void remove(int data)
    {
        this->root=remove(data, root);
    }

private:
    void print(BinaryTreeNode<int> *node)
    {
        if (root == NULL)
        {
            return;
        }
        print(node->left);
        cout << node->data;
        if (root->left != NULL)
            cout << ":L:" << node->left->data;
        if (root->right != NULL)
            cout << ",R:" << node->right->data << "\n";
        print(node->right);
    }

public:
    void print()
    {
        print(root);
    }

private:
    BinaryTreeNode<int> *insert(int data, BinaryTreeNode<int> *root)
    {

        if (root == NULL)
        {
            BinaryTreeNode<int> *newnode = new BinaryTreeNode<int>(data);
            root = newnode;
            return root;
        }

        if (root->data < data)
        {
            root->right = insert(data, root->right);
        }
        else
        {

            root->left = insert(data, root->left);
        }
        return root;
    }

public:
    void insert(int data)
    {
        this->root=insert(data, root);
    }

private:
    bool search(int data, BinaryTreeNode<int> *root)
    {
        if (root == NULL)
        {
            return false;
        }
        bool valid = false;
        if (root->data == data)
        {
            return true;
        }
        return search(data, root->left) || search(data, root->right);
    }

public:
    bool search(int data)
    {
        return search(data, root);
    }
};