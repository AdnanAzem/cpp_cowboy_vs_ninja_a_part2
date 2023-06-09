#pragma once
#include <iostream>
using namespace std;
namespace ariel{

    class Point{
        private:
            double coordinate_x;
            double coordinate_y;

        public:
            // Point();
            // Point(double, double);
            Point(): coordinate_x(0), coordinate_y(0){}
            Point(double x, double y): coordinate_x(x), coordinate_y(y){}

            // Getters
            double get_x() const{return this->coordinate_x;}
            double get_y() const{return this->coordinate_y;}

            double distance(const Point&) const; // return the distance between 2 points
            string print(); // print the point example: (2,2)
            // string toString() const;
            static Point moveTowards(const Point&, const Point&, double); // return the closest point 

    };
}