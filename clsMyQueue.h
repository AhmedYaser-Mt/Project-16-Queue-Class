#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

template <class T>
class clsMyQueue
{
protected:

	clsDblLinkedList <T> _MyList;
	T _Back = NULL;

public:

	void Push(T Item)
	{
		_MyList.InsertAtEnd(Item);

		_Back = Item;
	}

	void Pop()
	{
		_MyList.DeleteFirstNode();

		if (_MyList.IsEmpty())
			_Back = NULL;
	}

	void Print()
	{
		_MyList.PrintList();
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.IsEmpty();
	}

	T Front()
	{
		if (IsEmpty())
			return NULL;
		else
			return _MyList.Head->Value;
	}

	T Back()
	{
		return _Back;
	}
};

