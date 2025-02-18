#ifndef TEXTAREA_H
#define TEXTAREA_H

#include "RGB.h"
#include <X11/Xlib.h> 

class TextArea{

    private:
        string text;
        string id; 
        RGB fill;
        RGB border;
        Rectangle rect;

    public:
        TextArea();
        TextArea(int x, int y, int width, int height, string id, string text, RGB fill = RGB::WHITE(), RGB border = RGB::BLACK());
        TextArea(Rectangle rect, string id, string text, RGB fill = RGB::WHITE(), RGB border = RGB::BLACK());
        TextArea(const TextArea &other);

        int getX() const;
        int getY() const;
        int getWidth() const;
        int getHeight() const;
        string getText() const;
        string getId() const;
        RGB getFill() const;
        RGB getBorder() const;

        void setX(int x);
        void setY(int y);
        void setWidth(int width);
        void setHeight(int height);
        void setId(string id);
        void setText(string text);
        void setFill(RGB fill);
        void setBorder(RGB border);
            
        void print() const;             
        bool overlaps(const TextArea& ta)const;
        void draw(Display* display, Window win, GC gc, int x, int y);




};

#endif