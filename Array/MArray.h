#pragma once

template<class T>
class MArray
{

private:

    //Actual container stores the arrray
    //pointer pointign to a memory location in heap
    T* Item ;

    // size indicated all the slot of array 
    int Size ;

    // Length indicates  number of equipped slots
    int Length ;

    // the base dynamic  aray size 
    int BaseSize ;

    //this indiace thesize after dynamically  Resizing the array
    int CurrentSize ;

    //this indicates the Factor at which the array should grow when need 
    int ResizeFactor ;

    //this indiaced if the array is filled or not 
    bool bISFilled ;

    
public:

    //GETTERS
    inline T* Get() { return Item; }
    inline int size (){return Size;}
    inline int length() { return Length; }

    //OPERATIONS

    void Add (T element);
    
    

    //Conatructor 
    MArray();
    //MArray( );
    
    //Destructor
    ~MArray();

    void DynamicResize ( );
    
};


