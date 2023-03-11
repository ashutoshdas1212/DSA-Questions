#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class stackusingarray
{

    int *data;
    int nextindex;
    int capacity;

public:
    stackusingarray()
    {
        data = new int[4];
        nextindex = 0;
        capacity = 4;
    }
    int size()
    {
        return nextindex;
    }
    bool isEmpty()
    {
        return nextindex == 0;
    }
    void push(int element)
    {
        if (nextindex == capacity)
        {
            int *newdata = new int[2 * capacity];

            for (int i = 0; i < capacity; i++)
            {
                newdata[i] = data[i];
            }
            delete[] data;
            data=newdata;
            capacity *= 2;
            return;
        }
        data[nextindex] = element;
        nextindex++;
    }
    int pop()
    {
        if (nextindex == 0)
        {
            cout << " stack empty ";
            return INT_MIN;
        }
        return data[--nextindex];
    }
    int top()
    {
        if (isEmpty())
        {
            cout << " stack empty ";
            return INT_MIN;
        }
        return data[nextindex - 1];
    }
    // void push(int element)
    // {
    //     if (nextindex == capacity)
    //     {
    //         cout << "Stack full " << endl;
    //         return;
    //     }
    //     data[nextindex] = element;
    //     nextindex++;
    // }

    // // delete element
    // int pop()
    // {
    //     if (isEmpty())
    //     {
    //         cout << "Stack is empty " << endl;
    //         return INT_MIN;
    //     }
    //     nextindex--;
    //     return data[nextindex];
    // }

    // int top()
    // {
    //     if (isEmpty())
    //     {
    //         cout << "Stack is empty " << endl;
    //         return INT_MIN;
    //     }
    //     return data[nextindex - 1];
    // }
};