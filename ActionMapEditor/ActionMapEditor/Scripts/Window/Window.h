#ifndef WINDOW_H
#define WINDOW_H

#include "../Definition.h"
#include "../Dev/Point.h"
#include "../Dev/Size.h"

namespace GeneralWindow {
    class Window {
       public:
        Window() :
            point( 0, 0 ), size( 0, 0 ), color( 0 ) {}
        Window( Point point_, Size size_, int color_ );
        virtual ~Window() {}

        virtual void Draw() = 0;

       protected:
        Point point;
        Size size;
        int color;
    };
}  // namespace GeneralWindow

#endif  // !WINDOW_H
