#include "MArray.h"


template <class T>
void MArray<T>::Add(T element)
{
    if(Length ==Size)
    {
        DynamicResize();
    }
    Item[Length];
    Length++;
}

template <class T>
MArray<T>::MArray()
{
    BaseSize =8;
    ResizeFactor =2;
    Item = new T [BaseSize];
    CurrentSize =BaseSize ; 
}

template <class T>
MArray<T>::~MArray()
{
    
}

template <class T>
void MArray<T>::DynamicResize()
{
    if(Size ==Length)
    {
        CurrentSize*=ResizeFactor ;
    
        //Creating a array of  new size
        T* newItems = new T[CurrentSize];

        // using this instead of loop to copy from one to another array
        memcpy(newItems, Item, Length * sizeof(T));

        // deletign the old allocated memory block  first assigned 
        delete [] Item;
        Item = newItems ;
        Size=CurrentSize;
        
    }
    

    
}
