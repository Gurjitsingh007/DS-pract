#include<iostream>
using namespace std;
template<class T>
class Node{
    private:
    T data;
    Node* prnt;
    Node* left;
    Node* right;
    public:

    Node(T data,Node* p,Node* l,Node* r){
        this->data=data;
        prnt=p;
        left=l;
        right=r;
    }

};

template<class T>
class BST{
    public:
    Node<T>* root;
    public:

    BST(Node* r=NULL){
        root=r;
    }

    bool searchR(T ele,Node<T>* root); //recursive
    bool search(T ele); //normal search

    void preorder(Node<T>* root);
    void inorder(Node<T>* root);
    void postorder(Node<T>* root);
    void insert(T ele);
    void deleteByCopy(T ele);
    void deleteByMerging(T ele);




};

template<class T>
bool BST<T> :: searchR(T x,Node<T>* root){

    if(x==root->data){
        return true;

    }else if(x<root->data){
       return searchR(T x,root->left);
    }else if(x>root->data){
        return searchR(T x,root->right);
    }else{
        return false;
    }

}

template<class T>
bool BST<T>::search(T X){
    Node<T>* temp=root;
    while(temp!=NULL){
        if(temp->data==x){
            return true;
        }
        else if(x<temp->data){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    if(temp==NULL){
        return false;
    }

}

template<class T>
void BST<T>::preorder(Node<T>* r){
    if(r!=NULL){
        cout<<r->data;
        preorder(r->left);
        preorder(r->right);
    }
}