#ifndef MAP_H
#define MAP_H

#include "Window.h"

namespace GeneralWindow {
    class Map : public Window {
       public:
        Map();
        ~Map() {}

       public:
        void Draw();

       private:
    };
}  // namespace GeneralWindow

#endif  // !MAP_H
