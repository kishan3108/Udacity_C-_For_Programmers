#include <iostream>

using namespace std;
class Shape{
    int len;
    int width;

public:
    Shape(int l=2, int w=2)
    {
        len=l;
        width=w;
    }
    int Area(){
        return len*width;
    }
    int compare(Shape shape){
        return this->Area() > shape.Area();
    }
};



int main() {
//    std::cout << "Hello, World!" << std::endl;
Shape sh1(3,2);
Shape sh2(4,2);
cout<<sh1.Area()<<endl;
cout<<sh1.compare(sh2);

return 0;
}