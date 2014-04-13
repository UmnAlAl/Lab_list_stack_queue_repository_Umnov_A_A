#include "list.h"
#include "stack.h"
#include "queue.h"

void main()
{
	char arr[8] = {1, 45, 34, 53, 43, 43, 23, 43};
	list_element el1(1), el2(2), el3(3);
	stack MyStack;
	MyStack.push(el1);
	MyStack.push(el2);
	MyStack.pop();
	MyStack.push(el3);
}