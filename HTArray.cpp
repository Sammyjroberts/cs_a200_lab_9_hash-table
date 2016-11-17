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


//hashValue


//addElement


//getNumOfElements


//searchKey


//printArray 


//destructor

