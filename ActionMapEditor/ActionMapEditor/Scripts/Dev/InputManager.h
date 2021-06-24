#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include "../Definition.h"
#include "Singleton.h"

using namespace Input;

enum class InputState
{
    NoInput,
    Pressed,
    Pressing,
    Released,
};

class InputManager : public Singleton<InputManager> {
   public:
    InputManager();
    ~InputManager() {};

    void Update();

    /// @brief マウスボタンの入力状態を取得する
    /// @param name 取得したいマウスボタンの名前 @n Definition Input::MOUSE_XXXX
    /// @return 入力状態
    InputState GetMouseButtonState( int name ) { return mouseState[name]; }

    /// @brief マウスボタンの入力状態が求めるものと同じか取得する
    /// @param name 取得したいマウスボタンの名前 @n Definition Input::MOUSE_XXXX
    /// @param state 求める入力状態
    /// @return 一致しているか
    bool GetMouseButtonState( int name, InputState state ) { return mouseState[name] == state; }

   private:
    InputState mouseState[NUMBER_of_MOUSE_BUTTON_EXAMINE];
    bool currentMouseState[NUMBER_of_MOUSE_BUTTON_EXAMINE];
    bool previousMouseState[NUMBER_of_MOUSE_BUTTON_EXAMINE];
};

#endif  // !INPUT_MANAGER_H
