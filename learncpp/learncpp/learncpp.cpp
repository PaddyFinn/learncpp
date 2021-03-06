
#include "stdafx.h"
#include <iostream>
#include <cassert>

class Stack
{
	int m_array[10];
	int m_stackLength;

public:

	// reset member function
	void reset()
	{
		m_stackLength = 0;
		for (int i = 0; i < 10; ++i)
		{
			m_array[i]=0;
		}
	}

	//push member function
	bool push(int x)
	{
		int i = 0;
		while(i < 10)
		{
			if (m_array[i] != 0)
			{
				i++;
			}
			else 
			{
				m_array[i] = x;
				m_stackLength++;
				return true;
			}
		}

		return false;
	}


	//pop member function
	void pop()
	{
		if (m_array)
		{
			m_array[m_stackLength - 1] = 0;
			m_stackLength--;
		}
		else 
		{
			assert(m_array);
		}

	}

	//print member function
	void print()
	{
		std::cout << "( ";
		for (int i = 0; i < m_stackLength; i++)
		{
			std::cout << m_array[i] << " ";
		}

		std::cout << ")" <<std::endl;
	}
};

int main()
{
	Stack stack;
	stack.reset();
	stack.print();

	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();

	stack.pop();
	stack.print();
	stack.pop();
	stack.pop();

	stack.print();
	
	return 0;
}