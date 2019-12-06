#pragma once

class Circle{

private:
    double radius;
    double ference;
    double area;

public:
    Circle();
    Circle(double radius);
    ~Circle();

    void setRadius(double radius);
    void setFerence(double ference);
    void setArea(double area);

    double getRadius();
    double getFerence();
    double getArea();
};
