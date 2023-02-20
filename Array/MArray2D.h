#pragma once

//! THIS IS a class called MArray2D which manages creation and deletion of the  array
class MArray2D 
{
private:
    //Numebr of row
    int Row;

    //Numberof column 
    int Column;
    
    //TheAcutal Array storing the values
    int** Items ;
    
    // Number of equipped Slots in the array 
    int length ;

    //Total number of element can be stored in this array 
    int Size ;
    
public:
    //constructor
    MArray2D(int row , int column);
    
    //Destructor
    ~MArray2D();
    
    //Generation Element for 
    void generate_elements (int item_number , int element_number );

    //GETTERS
    int GetSize();
    int GetLength()


    //SETTERS
    
    void SetRow ( int rowindex , int* RowArray);
    void SetColumn (int columnindex , int* ColumnArray );

    // OPERATIONS

    // Ad a single element to the end of the array
    void Add();
    // remove a element from the end of the array
    void Remove ();
    //Append another array into this 
    void Append();
    //insert  a element ata particular index
    void Inserrt (int index);

    int*& operator[](int row) 
    {
        return Items[row];
    } 
};