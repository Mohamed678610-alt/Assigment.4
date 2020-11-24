/*My name:Mohamed hassanen mahjob 
Class:second
 Department:computer
  */ 
#include <iostream>
using namespace std;
typedef enum { 	RECTANGLE, TRIANGLE, SQUARE, CIRCLE } t_shape;
// Base class to define a shape
class shape
{
protected:
	unsigned int m_width;
	unsigned int m_height;
	t_shape m_type;
public:
	void SetValues(unsigned int width, unsigned int height, t_shape type)
	{
		m_width = width;
		m_height = height;
		m_type = type;
	}
};   // End of class shape

//  Derived Class to define a Polygon
class Polygon
{
protected:
	unsigned int m_width;
	unsigned int m_height;
	t_shape m_type;
public:
	void SetValues(unsigned int width, unsigned int height, t_shape type)
	{
		m_width = width;
		m_height = height;
		m_type = type;
	}
};  // End of class Polygon 

// Derived class from Polygon to define a square
class Square : public Polygon
{
public:
	unsigned int area()
	{
		unsigned int result;
		if (m_type == SQUARE)
		{
			result = m_width * m_width;
		}
		else
		{
			result = 0;
		}
		return result;
	}
}; // End of class SQUARE

// Derived class from Polygon to define a Rectangle
class Rectangle : public Polygon
{
public:
	unsigned int area()
	{
		unsigned int result;
		if (m_type == RECTANGLE)
		{
			result = m_width * m_height;
		}
		else
		{
			result = 0;
		}
		return result;
	}
}; // End of class RECTANGLE 

// Derived class from Polygon to define a Triangle
class Triangle : public Polygon
{
private:
	unsigned int m_long;
public:
	unsigned int area()
	{
		unsigned int result;
		if (m_type == TRIANGLE)
		{
			result = (m_width * m_height) / 2;
		}
		else
		{
			result = 0;
		}
		return result;
	}
};  //  End of class Triangle

//  Derived class from shape to define a Elipes
class Elipes : public shape
{
protected:
	unsigned int m_width;
	unsigned int m_height;
	unsigned int m_pi;
	t_shape m_type;
public:
	void SetValues(unsigned int width, unsigned int height, t_shape type)
	{
		m_width = width;
		m_height = height;
		m_type = type;
	}
};  // End of class Elipes

//  Derived class from Elipes to define a circle 
class circle : public Elipes
{
public:
	unsigned int area()
	{
		unsigned int result;
		if (m_type == CIRCLE)
		{
			result =  2 * m_height;
		}
		else
		{
			result = 0;
		}
		return result;
    }
}; // End of class circle
   
int main()
{
	// Create rectangle, triangle, square and circle objects
	Rectangle  MyRectangle;
	Triangle myTriangle;
	Square mySquare;
    circle mycircle;
	// Use the inherited "SetValues" function to assign values to the members
	MyRectangle.SetValues(10,20, RECTANGLE);
	myTriangle.SetValues(5,10, TRIANGLE);
	mySquare.SetValues(10,0, SQUARE);
    mycircle.SetValues(15,5 CIRCLE);
	// Calculate the area of each object using the polymorphic function area()
	std::cout << "The Area of Triangle is : " << myTriangle.area() << std::endl;
	std::cout << "The Area of Rectangle is : " << MyRectangle.area() << std::endl;
	std::cout << "The Area of Square is : " << mySquare.area() << std::endl;
    std::cout << "the Area of circle is : "<< mycircle.area() <<std::endl;
     return 0;
}
