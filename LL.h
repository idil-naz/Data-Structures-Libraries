#ifndef DATA_STRUCTURES_LL_H
#define DATA_STRUCTURES_LL_H

#endif //DATA_STRUCTURES_LL_H

#include<iostream>
using namespace std;

template<typename T>

struct Node{
    T info;
    Node *link;
};

template<typename S>

class LL{
public:

    Node<S> *head;
    Node<S> *last;
    int count;

    LL(){
        count = 0;
        head = nullptr;
        last = nullptr;
    }

   virtual ~LL()=default;

    Node<S>* search(const S &item);
    bool isempty();
    int length();

    friend ostream& operator<<(ostream &os, const LL<S> &ll);

    void insertfirst(const S &item);

};



template<typename S>
Node<S>* LL<S>::search(const S &item) {

    Node<S>* ptr = head;
    while(ptr != nullptr){

        if(ptr->info == item) return ptr;

        else ptr = ptr->link;
    }

    return nullptr;
}

template<typename S>
bool LL<S>::isempty() {
    if(head == nullptr) return true;
    else return false;
}

template<typename S>
int LL<S>::length() {
    return count;
}

template<typename S>
void LL<S>::insertfirst(const S &item) {

    if(isempty() == true){
        Node<S>* ptr = new Node<S>;
        ptr->info=item;
        head = ptr;
        last = ptr;
        ptr->link = nullptr;
    }

    else{
        Node<S>* ptr = new Node<S>;
        ptr->info=item;
        ptr->link=head;
        head=ptr;
    }
}


template<typename S>
ostream& operator<<(ostream &os, const LL<S> &ll){

    if(ll.isempty() == true){
        os<<"The list is empty."<<endl;
    }

    else{
        Node<S>* ptr;
        ptr=ll.head;

        while(ptr != nullptr){
            os<<ptr->info<<", ";
            ptr = ptr->link;
        }
    }
        return os;
}
/*
 * insertlast
 * insertat
 * insertafter
 * insertbefore
 * deletenode
 * deletefirst
 * clearlist*/


//search (returns a pointer of type Node)
//isempty
//length
//insertfirst
//overload << operator to print list.
//asdaasd