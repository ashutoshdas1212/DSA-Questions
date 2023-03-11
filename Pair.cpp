#include <bits/stdc++.h>
#include <iostream>
using namespace std;

template <typename T,typename V>
class Pair
{
    T x;
    V y;
    public:
    void setX(T x)
    {
        this->x = x;
    }
    void setY(V y)
    {
        this->y = y;
    }

    T getX()
    {
        return x;
    }
    V getY()
    {
        return y;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Pair<int,int> p;
    p.setX(100);
    p.setY(200);
//    cout<<p.getX()<<" "<<p.getY()<<" ";
Pair<Pair<int,int>,int> p1;
p1.setX(p);
p1.setY(300);
cout<<p1.getX().getX()<<" "<<p1.getX().getY()<<" "<<p1.getY()<<" ";
    return 0;
}