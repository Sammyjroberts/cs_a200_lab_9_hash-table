#include "LinkedList.h"

//default constructor
LinkedList::LinkedList() {
    this->first = nullptr;
    this->back = nullptr;
    count = 0;
}

//insertBack
void LinkedList::insertBack(const int i) {
    //back is null
    if(back == nullptr) {
        back = new Node(i, nullptr);
        first = back;
    }
    else {
        back->setLink(new Node(i, nullptr));
    }
    count++;
    
}

//getFirst
Node* LinkedList::getFirst() const {
    return first;
}

//search
bool LinkedList::search(const int i) const {
    bool found = false;
    Node* traverser = first;
    while(!found) {
        if(traverser->getData() == i) {
            found = true;
        }
        traverser = traverser->getLink();
    }
    return found;
}


//printList
void LinkedList::printList() const {
    if(first == nullptr) {
        cout << "The list is empty.";
    }
    else {
        Node* traverser = first;
        while(traverser != nullptr) {
            cout << traverser->getData() << " ";
            traverser = traverser->getLink();
        }
    }

}

//destructor
LinkedList::~LinkedList() {
    Node* traverser = first;
    while(traverser != nullptr) {
        auto temp = traverser;
        traverser = traverser->getLink();
        
        delete temp;
        temp = nullptr;
    }
}


