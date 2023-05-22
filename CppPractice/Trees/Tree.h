#ifndef TREE_H
#define TREE_H

#include "Node.h"

template<typename T>
class Tree {

    private: 
        Node<T>* root;
    
    public:
        
        Tree(Node<T>* inputRoot){
            root = inputRoot;
        }

        ~Tree(){
            deleteAll(root);
        }

        Node<T>* getRoot(){
            return root;
        }

        Node<T> dfsFind(T data, Node<T>* node){

            if(node == nullptr){
                return nullptr;
            }

            if(node->getData() == data) {
                return node;
            }

            Node<T>* left = find(data, node->getLeftChild());
            if(left != nullptr) {
                return left;
            }

            Node<T>* right = find(data, node->getRightChild());
            if(right != nullptr) {
                return right;
            }

            return nullptr;
        }

    private:

        void deleteAll(Node<T>* node){
            if(node != nullptr){
                deleteAll(node->getLeftChild());
                deleteAll(node->getRightChild());
                delete node;
            }
        }
};

#endif