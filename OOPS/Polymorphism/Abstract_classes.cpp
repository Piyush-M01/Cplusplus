#include<iostream>
using namespace std;

class Shape{  //abstract class
    private:

    public:
        virtual void draw()=0; //pure virtual function
        virtual void rotate()=0; //"    "
        virtual ~Shape(){}

};

class Open: public Shape{  //abstract class
    public:
    virtual ~Open(){}
};

class Closed: public Shape{ //abstract class
    public:
    virtual ~Closed(){}

};

class Line: public Open{  //concrete class
    public:
    virtual void draw() override{
        cout<<"Drawing a line"<<endl;

    }

    virtual void rotate() override{
        cout<<"Rotating a line"<<endl;

    }

    virtual ~Line(){}
};

class Circle: public Closed{  //concrete class
    public:
    virtual void draw() override{
        cout<<"Drawing a circle"<<endl;

    }

    virtual void rotate() override{
        cout<<"Rotating a circle"<<endl;

    }

    virtual ~Circle(){}
};

int main()
{
    //Shape s;  ---- ERROR --- you cannot instantiate abstract classes
    //Shape *p=new Shape(); // same  as above
    
    //Circle c;
    //c.draw();  //does not use dynamic binding

    Shape *ptr=new Circle();
    ptr->draw();  //dynamic binding
    ptr->rotate(); //dynamic binding
    
    Shape *s1=new Line();
    s1->draw();
    s1->rotate();

    delete ptr;
    delete s1;
    
    return 0;
}
