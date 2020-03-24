#ifndef _TEMPLATE_CLASS_
#define _TEMPLATE_CLASS_
#include <vector>
#include <stdexcept>
#include <iostream>
#include <string>
#include <iostream>

/*Requirement
Name: SimpleVector
Private data member:
- A C++ dynamic array of generic type with an initial capacity of 10
- An int "count" to keep track of how many values are stored in the array
- An int "capacity" to keep track of the current size of the array.
Pubic member functions:
- add(index, value)
	+ doubles the size of the storage array if count equals capacity.
	+ adds the given value at the given index if the index is within range, moving all elements starting from in dex up one to make room
	+ throws and out_of_range exception if the index is out_of_range(0..count).
- remove(index)
	+ removes the value at the given index and returns that value if the index is within range, moving all elements starting from one above index down to prevent empty spots
	+ throws and out_of_range exception if the index is out of range (0..count-1)
- get(index)
	+ returns the value at the given index if the index is within range
	+ throws an out_of_range exception if the index is out of range (0..count-1)
- size()
	+ returns the current count
*/
class tempClass
{
private:
	std::string name;
	int number;
public:
	tempClass() {};
	
	tempClass(std::string name, int number) : name(name), number(number) {}
	
	void setName(std::string name) { this->name = name; }
	
	void setNumber(int number) { this->number = number; }

	std::string getName() { return this->name; }

	int getNumber() { return this->number; }

	std::string toString() { return "Name:" + this->getName() + "\t number: " + std::to_string(this->getNumber()); }
};

template <class C>
class SimpleVector
{
private:
	C* arr = new C[10];
	int count;
	int capacity;
public:
	SimpleVector()
	{
		count = 0;
		capacity = 10;
	}

	~SimpleVector()
	{
		delete[] arr;
	};

	void add(int index, C value)
	{
		if (index < 0 || index > capacity - 1)
			throw std::out_of_range("Out_of_range");
		if (count < capacity)
		{
			for (int i = index; i < count; i++)
			{
				C temp = arr[count];
				arr[count] = arr[i];
				arr[i] = temp;
			}
			arr[index] = value;
			count++;
		}
		if (count == capacity)
		{
			arr[count - 1] = value;
			capacity = capacity * 2;
			C* temp = arr;
			arr = new C[capacity];
			for (int i = 0; i < (capacity / 2); i++)
				arr[i] = temp[i];
			delete[] temp;
			count++;
		}
	}

	void remove(int index)
	{
		if (index > count)
			throw std::out_of_range("Out_of_Range");
		for (int i = index; i < count; i++)
			arr[i] = arr[i + 1];
		count--;
	}

	C get(int index)
	{
		if (index > count)
			throw std::out_of_range("Out of range: 0.." + count - 1);
		return arr[index];
	}

	int size()
	{
		return count;
	}
};
#endif
