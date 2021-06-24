#include "Window.h"

#include "DxLib.h"

Window::Window( Point point_, Size size_, int color_ ) :
    point( point_ ), size( size_ ), color( color_ ) {
}

void Window::Draw() {
    DrawBox( point.GetX(), point.GetY(), point.GetX() + size.GetX(), point.GetY() + size.GetY(), color, true );
}
