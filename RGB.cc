#include "RGB.h"

RGB::RGB() 
{
    r = 0;
    g = 0;
    b = 0;
}

RGB::RGB(int red, int green, int blue)
{
    r = red;
    g= green;
    b= blue;
}

RGB RGB::WHITE()
{  
    return RGB(255, 255, 255); 
}

RGB RGB::BLACK()
{  
    return RGB(0, 0, 0); 
}

RGB RGB::RED()
{  
    return RGB(255, 0, 0); 
}

RGB RGB::GREEN()
{  
    return RGB(0, 255, 0); 
}

RGB RGB::BLUE()
{  
    return RGB(0, 0, 255); 
}

int RGB::getR() const 
{ 
    return r; 
}

int RGB::getG() const 
{ 
    return g; 
}

int RGB::getB() const 
{ 
    return b; 
}
