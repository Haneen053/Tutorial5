#include "TextArea.h"

#include <string>
#include <iostream>


using namespace std;


TextArea::TextArea() 
{
    this->rect.x = 0;
    this->rect.y = 0;
    this->rect.width = 80;
    this->rect.height = 50;
    this->id = "TextArea";
    this->text = "Default Text";
    this->fill = RGB::WHITE();
    this->border = RGB::BLACK();
}

TextArea::TextArea(int x, int y, int width, int height, string id, string text, RGB fill, RGB border) 
{
    this->rect.x = x;
    this->rect.y = y;
    this->rect.width = width;
    this->rect.height = height;
    this->id = id;
    this->text = text;
    this->fill = fill;
    this->border = border;
}

TextArea::TextArea(Rectangle rect, string id, string text, RGB fill, RGB border) 
{
    this->rect = rect;
    this->id = id;
    this->text = text;
    this->fill = fill;
    this->border = border;
}

TextArea::TextArea(const TextArea& other) 
{
    this->rect = other.rect;
    this->id = other.id;
    this->text = "DUPLICATE";
    this->fill = other.fill;
    this->border = other.border;
}

bool TextArea::overlaps(const TextArea& ta) const 
{
    return this->rect.overlaps(ta.rect);
}

void TextArea::print() const 
{
    cout << "TextArea ID: " << this->id << "\n";
    cout << "Preferred location: (" << this->rect.x << ", " << this->rect.y << ")\n";
    cout << "Size: " << this->rect.width << ", " << this->rect.height << "\n";
    cout << "Text: " << this->text << "\n";
}

int TextArea::getX() const 
{
    return this->rect.x;
}

int TextArea::getY() const 
{
    return this->rect.y;
}

int TextArea::getWidth() const 
{
    return this->rect.width;
}

int TextArea::getHeight() const 
{
    return this->rect.height;
}

string TextArea::getId() const 
{
    return this->id;
}

string TextArea::getText() const 
{
    return this->text;
}

RGB TextArea::getFill() const 
{
    return this->fill;
}

RGB TextArea::getBorder() const 
{
    return this->border;
}

// Setters
void TextArea::setX(int x) 
{
    this->rect.x = x;
}

void TextArea::setY(int y) 
{
    this->rect.y = y;
}

void TextArea::setWidth(int width) 
{
    this->rect.width = width;
}

void TextArea::setHeight(int height) 
{
    this->rect.height = height;
}

void TextArea::setId(string id) 
{
    this->id = id;
}

void TextArea::setText(string text) 
{
    this->text = text;
}

void TextArea::setFill(RGB fill) 
{
    this->fill = fill;
}

void TextArea::setBorder(RGB border) 
{
    this->border = border;
}
