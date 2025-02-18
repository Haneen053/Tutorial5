#ifndef TAArray_H
#define TAArray_H

#include "TextArea.h"

class TAArray
{
    private:

        int capacity; 
        int size;
        TextArea** textArea;


    public:

        TAArray();
        TAArray(int capacity);
        ~TAArray();
        bool add(TextArea* ta);
        bool add(TextArea* ta, int index);

        int getCapacity() const;
        int getSize() const;

        TextArea* get(int index) const;  
        TextArea* get(const string& id) const;

        TextArea* remove(int index);
        TextArea* remove(const string& id);




};




#endif