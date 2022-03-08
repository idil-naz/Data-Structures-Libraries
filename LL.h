#ifndef DATA_STRUCTURES_LL_H
#define DATA_STRUCTURES_LL_H

#endif //DATA_STRUCTURES_LL_H

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
    }

   virtual ~LL()=default;
};

/*insertfirst
 * insertlast
 * insertat
 * insertafter
 * insertbefore
 * deletenode
 * deletefirst
 * clearlist
 * isempty
 * length
 * search (returns a pointer of type Node)
 * overload << operator to print list.*/