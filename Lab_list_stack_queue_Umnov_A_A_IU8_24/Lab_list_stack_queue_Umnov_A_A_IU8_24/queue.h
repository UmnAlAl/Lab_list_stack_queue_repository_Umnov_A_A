#pragma once
#include "list.h"

class queue :
	public list
{
public:
	
	//! Function for pushing an element at the back of the queue.
    /*!
      \param input -  element for pushing.	  
    */
	void push (list_element& input)
	{
		insert(input, number_of_elements);
	}

	//! Function for deleting an element from the head of the queue.    
	void pop ()
	{
		del(0);
	}

	//! Function for getting the data of the element from the head of the queue.
    /*!
      \return - element's data.	  
    */
	char get_data()
	{
		return get(0);
	}
};

