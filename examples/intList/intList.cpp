#include <iostream>
#include <cassert>
#include "intList.h"

using namespace std;

bool intList::isEmpty() const
{
	return (length == 0);
}

bool intList::isFull() const
{
	return (length == maxSize);
}

int intList::listSize() const
{
	return length;
}

int intList::maxListSize() const
{
	return maxSize;
}

void intList::print() const
{
	int i;

	for (i = 0; i < length; i++)
		cout << list[i] << " ";
	cout << endl;
}

bool intList::isItemAtEqual(int location, int item) const
{
	return(list[location] == item);
}

void intList::insertAt(int location, int insertItem)
{
    int i;

    if (location < 0 || location >= maxSize)
        cout << "The position of the item to be inserted "
             << "is out of range." << endl;
    else
        if (length >= maxSize)  //list is full
            cout << "Cannot insert in a full list." << endl;
        else
        {
            for (i = length; i > location; i--)
                list[i] = list[i - 1]; //move the elements down

            list[location] = insertItem; //insert insertItem 
                                         //at the specified 
                                         //position

            length++;	//increment the length
        }
} //end insertAt


void intList::insertEnd(int insertItem)
{
	if (length >= maxSize)  //the list is full
		cout << "Cannot insert in a full list." << endl;
	else
	{
		list[length] = insertItem;	//insert the item at the end
		length++;	//increment length
	}
} //end insertEnd


void intList::removeAt(int location)
{
	int i;

	if (location < 0 || location >= length)
    	cout << "The location of the item to be removed "
			 << "is out of range." << endl;
	else
	{
   		for (i = location; i < length - 1; i++)
	 		list[i] = list[i+1];

		length--;
	}
} //end removeAt

void intList::retrieveAt(int location, int& retItem) const
{
	if (location < 0 || location >= length)
    	cout << "The location of the item to be retrieved is "
			 << "out of range." << endl;
	else
		retItem = list[location];
} // retrieveAt


void intList::replaceAt(int location, int repItem)
{
	if (location < 0 || location >= length)
    	cout << "The location of the item to be replaced is "
			 << "out of range." << endl;
	else
		list[location] = repItem;

} //end replaceAt

void intList::clearList()
{
	length = 0;
} // end clearList

intList::intList()
{
    length = 0;
}

int intList::seqSearch(int item)  const
{
	int loc;
	bool found = false;

	for (loc = 0; loc < length; loc++)
	   if (list[loc] == item)
	   {
			found = true;
			break;
	   }

	if (found)
		return loc;
	else
		return -1;
} //end seqSearch

void intList::insert(int insertItem)
{
    int loc;

    if (length == 0)     //list is empty
        list[length++] = insertItem; //insert the item and 
                                     //increment the length
    else
        if (length == maxSize)
            cout << "Cannot insert in a full list." << endl;
        else
        {
            loc = seqSearch(insertItem);

            if (loc == -1)   //the item to be inserted 
                             //does not exist in the list
                list[length++] = insertItem;
            else
                cout << "the item to be inserted is already "
                     << "in the list. No duplicates are "
                     << "allowed." << endl;
	}
} //end insert

void intList::remove(int removeItem)
{
	int loc;

	if (length == 0)
		cout << "Cannot delete from an empty list." << endl;
	else
	{
		loc = seqSearch(removeItem);

		if (loc != -1)
			removeAt(loc);
		else
			cout << "The tem to be deleted is not in the list."
				 << endl;
	}

} //end remove
