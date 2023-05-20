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