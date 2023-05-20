#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
    
    private: 
        Node<T>* leftChild;
        Node<T>* rightChild;
        T data;

    public:
        Node(T inputData){
            data = inputData;
            leftChild = nullptr;
            rightChild = nullptr;
        }

        void setLeftChild(Node<T>* leftChildToBeSet) {
            this->leftChild = leftChildToBeSet;
        }

        void setRightChild(Node<T>* rightChildToBeSet) {
            this->rightChild = rightChildToBeSet;
        }

        Node<T>* getLeftChild(){
            return this->leftChild;
        }

        Node<T>* getRightChild(){
            return this->rightChild;
        }

        T getData() {
            return data;
        }

};

#endif