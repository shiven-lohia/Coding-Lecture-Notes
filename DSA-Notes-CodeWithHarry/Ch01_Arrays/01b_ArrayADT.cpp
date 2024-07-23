
#include <iostream>
using namespace std;

class myArray
{
    int *ptr;
    int totalSize;
    int usedSize;

public:
    myArray(int Tsize, int Usize)
    {
        totalSize = Tsize;
        usedSize = Usize;
        ptr = new int[Tsize];
    }

    void setVal()
    {
        for (int i = 0; i < usedSize; i++)
        {
            cout<<"Enter the value of "<<i+1<<"th element"<<endl;
            cin>>ptr[i];
        }
    }

    void show()
    {
        for (int i = 0; i < usedSize; i++)
        {
            cout<<"The value of "<<i+1<<"th element is: "<<ptr[i]<<endl;
        }
    }

};

int main()
{
    myArray marks(20, 5);
    marks.setVal();
    marks.show();

    return 0;
}