#include <iostream>
using namespace std;
class Stack
{
private:
	int* stack;
	int top;
	int length;
public:
	Stack(int size)
	{
		stack = new int[size];
		top = -1;
		this->length = size;
	}
	~Stack()
	{
		delete[] stack;
	}
	bool isFull()
	{
		return (top == length - 1);
	}
	bool isEmpty()
	{
		return (top == -1);
	}
	void push(int value)
	{
		if (isFull())
		{
			cout << "stack overflow";
			exit;
		}
		else
			stack[++top] = value;
	}
	void pop()
	{
		if (isEmpty())
		{
			cout << "stack is empty";
			exit;
		}
		else
			stack[top--];
	}
	void print()
	{
		if (isEmpty())
		{
			cout << "stack is empty";
			exit;
		}
		for (int x = top;x >= 0;x--)
			cout << endl << " " << stack[x] << endl;
	}
};
