#ifndef HTARRAY_H
#define HTARRAY_H

#include "LinkedList.h"

#include <iostream>
using namespace std;

const int DEFAULT_CAP = 10;

class HTArray
{
public:
    HTArray( );


	//overloaded constructor
	HTArray(const int cap);

	//hashValue
	int hashValue(const int i) const;

	//addElement
	void addElement(const int i);

	//getNumOfElements
	int getNumOfElements() const;

	//searchKey
	bool searchElement(const int key) const;


	//printArray 
	void printHashTable() const;

	//destructor
	~HTArray();

private:
    LinkedList **ht;		//a pointer that points to a hash table of pointers
							//   pointing to linked lists
    int capacity;			//capacity of the hash table
    int numOfElements;		//total number of elements in the hash table

};

#endif