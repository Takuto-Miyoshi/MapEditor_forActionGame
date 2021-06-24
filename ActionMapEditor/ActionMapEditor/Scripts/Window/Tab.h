#ifndef TAB_H
#define TAB_H

#include "Window.h"

namespace GeneralWindow {
    class Tab : public Window {
       public:
        Tab();
        ~Tab() {}

       public:
        void Draw();

       private:
    };
}  // namespace GeneralWindow

#endif  // !TAB_H
