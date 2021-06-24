#ifndef MAP_MENU_H
#define MAP_MENU_H

#include "Window.h"

namespace GeneralWindow {
    class MapMenu : public Window {
       public:
        MapMenu();
        ~MapMenu() {}

       public:
        void Draw();

       private:
    };
}  // namespace GeneralWindow

#endif  // !MAP_MENU_H
