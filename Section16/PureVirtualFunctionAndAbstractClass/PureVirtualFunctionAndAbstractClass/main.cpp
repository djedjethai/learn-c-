#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;


class Shape {
public:
    virtual void draw() = 0;
    virtual void rotate() = 0;
    
    virtual ~Shape() {};
};

class OpenShape: public Shape {
public:
    virtual ~OpenShape() {};
};

class CloseShape: public Shape {
public:
    virtual ~CloseShape() {};
};

class Line: public OpenShape {
public:
    virtual void draw() override {
        cout << "Draw a Line"<< endl;
    };

    virtual void rotate() override {
        cout << "Rotate a Line"<< endl;
    };
    virtual ~Line() {};
};

class Circle: public CloseShape {
public:
    virtual void draw() override {
        cout << "Draw a Circle"<< endl;
    };

    virtual void rotate() override {
        cout << "Rotate a Circle"<< endl;
    };
    virtual ~Circle() {};
};

class Square: public CloseShape {
public:
    virtual void draw() override {
        cout << "Draw a Square"<< endl;
    };

    virtual void rotate() override {
        cout << "Rotate a Square"<< endl;
    };
    virtual ~Square() {};
};

void refreshing(std::vector<Shape*> &shape) {
    cout << "Refreshing" << endl;
    for (const auto s: shape)
        s->draw();
}


int main()
{
    // Shape s; // err can not implement abstract class
    // Shape *p = new Shape(); // err can not implement abstract class
    
//    Circle c; // works but nothing special as it s a static implementation
//    c.draw();

    // here it start to be cool
//    Shape *s = new Circle();
//    s->draw();
//    s->rotate();

    Shape *s1 = new Line();
    Shape *s2 = new Circle();
    Shape *s3 = new Square();
    
    std::vector<Shape*> vecShape{s1, s2, s3};
    
//    for (const auto sh: vecShape) {
//        sh->draw();
//        sh->rotate();
//        cout << endl;
//    }
    refreshing(vecShape);
    
    delete s1;
    delete s2;
    delete s3;
	
	return 0;
}
