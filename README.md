## 3D Triangle Area Computation Documentation

_Design and Implementation_

The 3D Triangle program was created to represent a three dimensional triangle and to calculate the area of this triangle via three seperate points, each represented with three coordinations (x,y,z).

The program uses a point class with the following prototypes, constructors, and member variables.


```
#ifndef __point_h
#define __point_h

class Point {

private:
  double x;
  double y;
  double z;
public:
  // Constructors
  Point();                      	  // default constructor
  Point(double x, double y, double z);    // three-argument constructor

  // Destructor
  ~Point();

  // Mutator methods
  void setX(double newX);
  void setY(double newY);
  void setZ(double newZ);
  // Accessor methods
  double getX();
  double getY();
  double getZ();
  //Function to compute distance between two points
    double distanceTo(Point &point1);
};
```
The class takes in three coordinations for each line (x,y,z) and stores them in private members along with the standard Mutator and Accessor member functions to manipulate these coordinates. The <tt>distanceTo</tt> member function is used to calculate the distance between two given points and is used to find the sides of the triangle.

Upon starting, the program asks the user to input each coordinate for each point, tallying at nine different inputs for each point, after entering the final coordinate, the program checks which point the coordinates are for. After checking which point, it creates a point class and passes each coordinate to the three-argument constructor

```
Point(double x, double y, double z);
```
The method chosen to implement this, for slimplicity's sake, was a for loop with if statements inside that loop. We then implement a global function within pa1.cpp called Compute Area with the prototype

```
double computeArea(Point &a, Point &b, Point &c)
```
Which takes in our three points by reference and computes the area of our triangle using Heron's Formula (http://en.wikipedia.org/wiki/Heron%27s_formula). After this, we tell the user what the area of their given triangle is and the exit the program.

## Compiler

_G++ and Clion_

The compiler used to create this program was the GNU C++ compiler (G++), done through CLion on a VMware Ubuntu Linux Operating system.
