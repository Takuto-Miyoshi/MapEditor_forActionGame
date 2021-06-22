#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include "../Definition.h"
#include "../Singleton.h"

using namespace Input;

enum class InputState
{
    None,
    Pressed,
    Pressing,
    Released,
};

class InputManager : public Singleton<InputManager> {
   public:
    InputManager();
    ~InputManager() {};

    void Update();

   private:
    InputState currentMouseState[NUMBER_of_MOUSE_BUTTON_EXAMINE];
    InputState beforeMouseState[NUMBER_of_MOUSE_BUTTON_EXAMINE];
};

#endif  // !INPUT_MANAGER_H