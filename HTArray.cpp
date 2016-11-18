#include "HTArray.h"

	//default constructor
HTArray::HTArray()
{
	capacity = DEFAULT_CAP;
	numOfElements = 0;
	ht = new LinkedList*[capacity];			// This creates an array of pointers that point to
											// objects of the LinkedList class. The pointer ht
											// points to the array.

	// create a linked list for each index
	for (int i = 0; i < capacity; ++i)
	{
		LinkedList *ptrList = new LinkedList;
		ht[i] = ptrList;
	}
}

//overloaded constructor
HTArray::HTArray(const int cap) {
	capacity = cap;
	numOfElements = 0;
	ht = new LinkedList*[capacity];			

											
	for (int i = 0; i < capacity; ++i)
	{
		LinkedList *ptrList = new LinkedList;
		ht[i] = ptrList;
	}
}

//hashValue
int HTArray::hashValue(const int i) const {
	return i % capacity;
}

//addElement
void HTArray::addElement(const int i) {
	int hash = hashValue(i);
	ht[hash]->insertBack(i);
	numOfElements++;
}

//getNumOfElements
int HTArray::getNumOfElements() const{
	return numOfElements;
}

//searchKey
bool HTArray::searchElement(const int key) const {
	if (capacity != 0) {
		int hash = hashValue(key);
		return ht[hash]->search(key);
	}
	else {
		cout << "Hash table is empty";
		return false;
	}
}

//printArray 
void HTArray::printHashTable() const {
	for (int i = 0; i < capacity; i++) {
		cout << "IDX " << i << ": ";
		ht[i]->printList();
		cout << endl;
	}
	//put to match the output on the lab assignment.
	cout << endl;
}

//destructor
HTArray::~HTArray() {
	for (int i = 0; i < capacity; i++) {
		delete ht[i];
		ht[i] = nullptr;
	}
}
