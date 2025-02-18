#ifndef RGB_H
#define RGB_H

#include "defs.h"
#include <string>

using namespace std;

class RGB{

    private:
        int r, g, b;

    public:
        RGB();  
        RGB(int red, int green, int blue);

        static RGB WHITE();
        static RGB BLACK();
        static RGB RED();
        static RGB GREEN();
        static RGB BLUE();

        int getR() const;
        int getG() const;
        int getB() const;


};

#endif
