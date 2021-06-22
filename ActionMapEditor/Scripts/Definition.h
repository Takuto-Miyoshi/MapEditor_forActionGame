#ifndef DEFINITION_H
#define DEFINITION_H

const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;
const int FPS = 30;

namespace Input {
    const int NUMBER_of_MOUSE_BUTTON_EXAMINE = 3;  // 入力状態を調べるマウスのボタンの数

    // 配列に対するボタンの番号
    const int MOUSE_LEFT = 0;  // 左ボタン
    const int MOUSE_CENTER = 1;  // ホイールボタン
    const int MOUSE_RIGHT = 2;  // 右ボタン
}  // namespace Input

#endif  // !DEFINITION_H