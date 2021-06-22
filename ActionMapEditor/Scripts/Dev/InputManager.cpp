#include "InputManager.h"

#include "DxLib.h"

InputManager::InputManager() {
    for ( int i = 0; i < NUMBER_of_MOUSE_BUTTON_EXAMINE; i++ ) {
        currentMouseState[i] = false;
        previousMouseState[i] = false;
        mouseState[i] = InputState::NoInput;
    }
}

void InputManager::Update() {
    // 現在の入力状態をちまちま取得
    currentMouseState[MOUSE_LEFT] = ( ( GetMouseInput() & MOUSE_INPUT_LEFT ) != 0 ) ? true : false;
    currentMouseState[MOUSE_CENTER] = ( ( GetMouseInput() & MOUSE_INPUT_MIDDLE ) != 0 ) ? true : false;
    currentMouseState[MOUSE_RIGHT] = ( ( GetMouseInput() & MOUSE_INPUT_RIGHT ) != 0 ) ? true : false;

    // 前の状態と比較して入力状態を更新
    for ( int i = 0; i < NUMBER_of_MOUSE_BUTTON_EXAMINE; i++ ) {
        // 今回入力している
        if ( currentMouseState[i] == true ) {
            mouseState[i] = ( previousMouseState[i] == true ) ? InputState::Pressing : InputState::Pressed;
        }
        // 今回入力していない
        else {
            mouseState[i] = ( previousMouseState[i] == true ) ? InputState::Released : InputState::NoInput;
        }

        previousMouseState[i] = currentMouseState[i];
    }
}
