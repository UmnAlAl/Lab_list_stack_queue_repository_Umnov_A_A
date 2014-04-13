#include "list.h"
#include <iostream>

list_element* list::search (int index)
{
	list_element* tmp = pFirst;
	for (int i = 0; (i < index) && (tmp->pNext != 0); ++i)	
		tmp = tmp->pNext;
	return tmp;
}

void list::insert(const list_element& input, const int index)
{
	list_element* new_element = new list_element(input.data);
	if (index > number_of_elements) return;
	if (index == 0 && number_of_elements == 0)
	{
		pFirst = new_element;
		++number_of_elements;
		return;
	}
	list_element* tmp = search(index);
	new_element->pNext = tmp->pNext;
	tmp->pNext = new_element;
	++number_of_elements;
}

void list::del (const int index)
{
	list_element* tmp1, *tmp2;
	if (index > number_of_elements) return;
	if (index == 0)
	{
		tmp1 = pFirst;
		pFirst = pFirst->pNext;
		delete tmp1;
		--number_of_elements;
		return;
	}
	if (index == number_of_elements)
	{
		tmp1 = pFirst;
		while (tmp1->pNext->pNext)
			tmp1 = tmp1->pNext;
		delete tmp1->pNext;
		tmp1->pNext = 0;
		return;
	}
	tmp1 = search(index);
	tmp2 = tmp1->pNext;
	tmp1->pNext = tmp1->pNext->pNext;
	delete tmp2;
	--number_of_elements;
}

char list::get (int index)
{
	list_element* tmp = search(index);
	return tmp->data;
}

void list::read (int num, char input[])
{
	list_element* tmp;
	for (int i = 0; i < num; ++i)
	{
		tmp = new list_element(input[i]);
		insert(*tmp, i);
	}
}

void list::print()
{
	for(int i = 0; i < number_of_elements; ++i)
	{
		std::cout << get(i) << std::endl;
	}
}

list::~list()
{
	while (pFirst)
	{
		del(0);
	}
}