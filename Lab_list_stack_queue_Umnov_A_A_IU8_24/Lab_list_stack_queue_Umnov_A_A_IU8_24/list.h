#pragma once

//!  An element of a list. 
/*!
  List will save the pointer on the first element.
*/
struct list_element
{
	char data; /*!< Some inf. */
	list_element* pNext; /*!< Pointer on the next element. */

	//! A constructor without arguments.    
	list_element(): pNext(0), data(0) {};

	//! A constructor with data argument. 
	list_element(char x): pNext(0), data(x) {};	
};

class list
{
protected:

	//! A protected variable number_of_elements.
    /*!
      It means the number of elements in the whole list.
    */
	int number_of_elements;

	//! Pointer on the first list's element.
	list_element* pFirst;
public:

	//! A constructor without arguments.
	/*!
      All private variables set in 0.
    */
	list(): number_of_elements(0), pFirst(0) {};

	 //! Function for searching an element.
    /*!
      \param index -  the number of searched element.
	  \return The pointer on the searched element
    */
	list_element* search (int index);	

	 //! Function for inserting an element on a special position.
	/*!
      \param input -  reference on the element
	  \param index -  position for inserting
    */
	void insert(const list_element& input, const int index);

	 //! Function for deleting an element from the index position.
	void del (const int index);

	//! Function for get an element's data from the index position.
	char get (int index);	

	 //! Function for reading list from array.
	/*!
      \param num -  number of elements to read
	  \param input[] - data array for elements
    */
	void read (int num, char input[]);	

	//! Function for printing out the list
	void print();

	//! A destructor
	~list(void);	
};

