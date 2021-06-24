#ifndef MENU_H
#define MENU_H

#include "Window.h"

namespace GeneralWindow {
    class Menu : public Window {
       public:
        Menu();
        ~Menu() {}

       public:
        void Draw();

       private:
    };
}  // namespace GeneralWindow

#endif  // !MENU_H
