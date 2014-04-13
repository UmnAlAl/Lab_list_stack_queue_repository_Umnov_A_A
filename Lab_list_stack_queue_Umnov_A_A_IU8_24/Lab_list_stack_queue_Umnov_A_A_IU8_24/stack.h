#pragma once
#include "list.h"

class stack :
	public list
{
public:

	//! Function for pushing an element on the top.
    /*!
      \param input -  element for pushing.	  
    */
	void push (list_element& input)
	{
		insert(input, number_of_elements);
	}

	//! Function for deleting an element from the top.    
	void pop ()
	{
		del(number_of_elements);
	}

	//! Function for getting the data of the element from the top.
    /*!
      \return - element's data.	  
    */
	char get_data()
	{
		return get(number_of_elements);
	}
};

