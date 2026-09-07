#include<iostream>
using namespace std;

class Data
{
    double radius, ans, length, width, base, height, side1, side2, side3;
    public:
    double circlearea()
    {
        ans = 3.142 * radius * radius;
        return ans;
    }
    double circleperimeter()
    {
        ans = 2 * 3.142 * radius;
        return ans;
    }
    double squarearea()
    {
        ans = length * length;
        return ans;
    }
    double squareperimeter()
    {
        ans = 4 * length;
        return ans;
    }
    double rectanglearea()
    {
        ans = length * width;
        return ans;
    }
    double rectangleperimeter()
    {
        ans = 2 * (length + width);
        return ans;
    }
    double trianglearea()
    {
        ans = 0.5 * base * height;
        return ans;
    }
    double triangleperimeter()
    {
        ans = side1 + side2 + side3;
        return ans;
    }

    void takeData()
    {
        cout << "Enter value of radius of circle: \n";
        cin >> radius;

        cout << "Enter value of length of square: \n";
        cin >> length;

        cout << "Enter value of length of rectangle: \n";
        cin >> length;
        cout << "Enter value of width of rectangle: \n";
        cin >> width;

        cout << "Enter value of base of triangle: \n";
        cin >> base;
        cout << "Enter value of height of triangle: \n";
        cin >> height;
        cout << "Enter value of side1 of triangle: \n";
        cin >> side1;
        cout << "Enter value of side2 of triangle: \n";
        cin >> side2;
        cout << "Enter value of side3 of triangle: \n";
        cin >> side3;
    }

};

int main()
{
    Data obj;
    obj.takeData();

    cout << "\nCircle area: " << obj.circlearea() << endl;
    cout << "Circle perimeter: " << obj.circleperimeter() << endl;

    cout << "\nSquare area: " << obj.squarearea() << endl;
    cout << "Square perimeter: " << obj.squareperimeter() << endl;

    cout << "\nRectangle area: " << obj.rectanglearea() << endl;
    cout << "Rectangle perimeter: " << obj.rectangleperimeter() << endl;

    cout << "\nTriangle area: " << obj.trianglearea() << endl;
    cout << "Triangle perimeter: " << obj.triangleperimeter() << endl;

    return 0;
}
