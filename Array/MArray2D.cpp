#include "MArray2D.h"


MArray2D::MArray2D(int row , int column): Row(row) , Column(column)

{
    generate_elements(Row,Column);
}

int MArray2D::GetSize()
{
    return Row*Column;
}

int MArray2D::GetLength()
{
    return sizeof(Items)/sizeof(Items[0][0]);
}

MArray2D::~MArray2D()
{
    for (int i = 0; i < Row; i++)
    {
        delete[]Items[i];
    }
    delete [] Items;
    
}

void MArray2D::generate_elements(int item_number , int element_number )
{
    Items = new int*[Row];
    for (int i = 0; i < item_number; i++)
    {
        Items[i] = new int [element_number];
    } 
}