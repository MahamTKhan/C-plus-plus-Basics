#include <iostream>
using namespace std;

class A{
    private:
    int x;
    float y;

    public:
    A()
    {
        x=0;
        y=0.0;
    }
    A(int a,float b)
    {
        x=a;
        y=b;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
    }
    A operator+(const A& p)const
    {
        A temp;
        temp.x=x+p.x;
        temp.y=y+p.y;

        return temp;
    }
};
int main(){
     A p1(4,4);
     p1.display();
     A O2(4,4);
     O2.display();
     A O3;
     O3=p1+O2;
     O3.display();

    return 0;
}
