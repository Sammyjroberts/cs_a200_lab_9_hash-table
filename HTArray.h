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


	//hashValue


	//addElement


	//getNumOfElements


	//searchKey


	//printArray 


	//destructor


private:
    LinkedList **ht;		//a pointer that points to a hash table of pointers
							//   pointing to linked lists
    int capacity;			//capacity of the hash table
    int numOfElements;		//total number of elements in the hash table

};

#endif