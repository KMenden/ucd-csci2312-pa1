//This program will create a triangle from three points that the user enters and compute the area of the create triangle
//Created by Kellen Mendenhall

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Point.h"
using namespace std;



//*********************************
//          Compute Area
//
//
//A function that computes the area of a triangle from the three points given
//
//Data in:Three point class variables passed by reference
//Data out:The area of the triangle
//*********************************
double computeArea(Point &a, Point &b, Point &c)
{
    double sideA;   //Variable to hold the length of side a of our triangle
    double sideB;   //Variable to hold the length of side b of our triangle
    double sideC;   //Variable to hold the length of side c of our triangle
    double result;  //Variable to hold the result our calculations before returning it to main

    sideA = a.distanceTo(b); //Call to member function distanceTo to calculate sideA
    sideB = b.distanceTo(c); //Call to member function distanceTo to calculate sideB
    sideC = c.distanceTo(a); //Call to member function distanceTo to calculate sideC

    //Uses Heron's formula to calculate the area of this triangle and returns the result
    result = 1.0/4.0 * sqrt((sideA+sideB+sideC)*(-sideA+sideB+sideC)*(sideA-sideB+sideC)*(sideA+sideB-sideC));

    return result;

}


int main(void) {
    Point a;            //Class variable definition to hold the first point
    Point b;            //Class variable definition to hold the second point
    Point c;            //Class variable definition to hold the third point
    int numpoint = 1;   //Variable to hold the value of which triangle we are creating
    double inputx;      //Input variable to hold the x coordinate of our point
    double inputy;      //Input variable to hold the y coordinate of our point
    double inputz;      //Input variable to hold the z coordinate of our point


    cout  << "Greetings! Welcome to the triangle area computation program." << endl;

    //This for loop is used to enter the nine coordinates for our three points
    for(int i = 0; i < 3; i++)
    {
        //Askes the user to enter the x,y,z coordinates of their given point
        cout << "Please enter the x coordinate of point #" << numpoint << endl;
        cin >> inputx;
        cout << "Please enter the y coordinate of point #" << numpoint << endl;
        cin >> inputy;
        cout << "Please enter the z coordinate of point #" << numpoint << endl;
        cin >> inputz;
        //These if statements decide which point is being set up based on which point we are currently on via the
        //loop control member variable i
        if (i == 0)
        {
            a.setX(inputx);
            a.setY(inputy);
            a.setZ(inputz);
            numpoint++;
        }
        else if (i == 1)
        {
            b.setX(inputx);
            b.setY(inputy);
            b.setZ(inputz);
            numpoint++;
        }
        else if (i == 2)
        {
            c.setX(inputx);
            c.setY(inputy);
            c.setZ(inputz);
            numpoint++;
        }
    }
    double Area; //variable to hold the Area of our triangle
    cout << "Thank you, computing area"  << endl;
    Area = computeArea(a, b, c);   //Function call to global function compute area.
    cout << "The area of this triangle is "  << setprecision(2) << Area  << endl;
    return 0;
}
