#include "TAArray.h"
using namespace std;

TAArray::TAArray()
{
    size = 0;
    capacity =10;
    textArea = new TextArea*[capacity];

}

TAArray::TAArray(int capacity) 
{
    this->capacity = capacity;
    this->size = 0;
    this->textArea = new TextArea*[capacity];
}


TAArray::~TAArray() 
{
    for (int i = 0; i < size; i++) 
    {
        delete textArea[i];
    }
    delete[] textArea;
}

bool TAArray::add(TextArea* ta) 
{
    if (size >= capacity) 
    {
        return false;  
    }

    textArea[size++] = ta;  
    return true;
}


bool TAArray::add(TextArea* ta, int index) 
{
    if (size >= capacity || index < 0 || index > size) 
    {
        return false;  
    }

    // shift elements to the right 
    for (int i = size; i > index; i--) 
    {
        textArea[i] = textArea[i - 1];
    }

    textArea[index] = ta;  
    size++;  
    return true;
}

// removing a TextArea by indexd
TextArea* TAArray::remove(int index) 
{
    if (index < 0 || index >= size) 
    {
        return nullptr;  
    }

    TextArea* removed = textArea[index];

    // shift elements to the left to close the gap for the removed TextArea
    for (int i = index; i < size - 1; i++) 
    {
        textArea[i] = textArea[i + 1];
    }

    size--;
    return removed;
}

// removing a TextArea by id
TextArea* TAArray::remove(const std::string& id) 
{
    for (int i = 0; i < size; i++) 
    {
        if (textArea[i]->getId() == id) 
        {
            TextArea* removed = textArea[i];
            for (int j=i; j<size-1;++j)
            {
                textArea[j]=textArea[j+1];
            }

            size--;
            return removed;
        }
    }
    return nullptr;
}

// getting a TextArea by index
TextArea* TAArray::get(int index) const 
{
    if (index < 0 || index >= size) 
    {
        return nullptr;
    }
    return textArea[index];
}

// getting a TextArea by id
TextArea* TAArray::get(const std::string& id) const 
{
    for (int i = 0; i < size; ++i) 
    {
        if (textArea[i]->getId() == id) 
        {
            return textArea[i];
        }
    }
    return nullptr;
}

int TAArray::getSize() const 
{
    return size;
}

int TAArray :: getCapacity() const
{
    return capacity;
}
