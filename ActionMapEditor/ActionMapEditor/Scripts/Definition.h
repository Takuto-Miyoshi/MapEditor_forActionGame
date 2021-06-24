#ifndef DEFINITION_H
#define DEFINITION_H

#include "Dev/Point.h"
#include "Dev/Size.h"
#include "DxLib.h"

const Size WINDOW_SIZE( 1280, 720 );
const int FPS = 30;

namespace Input {
    const int MOUSE_BUTTON_MAX = 3;  // 入力状態を調べるマウスのボタンの数

    // 配列に対するボタンの番号
    const int MOUSE_LEFT = 0;  // 左ボタン
    const int MOUSE_CENTER = 1;  // ホイールボタン
    const int MOUSE_RIGHT = 2;  // 右ボタン
}  // namespace Input

namespace GeneralWindow {
    // ウィンドウの番号
    const int TAB = 0;  // メニューの一覧
    const int MENU = 1;  // メニューの中身
    const int MAP = 2;  // 編集中のマップ
    const int MAP_MENU = 3;  // マップに対するメニュー

    // 1280*720をもとに設定
    namespace DefTab {  // Tabクラス
        const Point POINT( 0, 0 );
        const Size SIZE( 128, 720 );
        const u_int COLOR = GetColor( 150, 150, 150 );
    }  // namespace DefTab

    namespace DefMenu {  // Menuクラス
        const Point POINT( 128, 0 );
        const Size SIZE( 384, 720 );
        const u_int COLOR = GetColor( 100, 100, 100 );
    }  // namespace DefMenu

    namespace DefMap {  // Mapクラス
        const Point POINT( 512, 72 );
        const Size SIZE( 768, 648 );
        const u_int COLOR = GetColor( 50, 50, 50 );
    }  // namespace DefMap

    namespace DefMapMenu {  // MapMenuクラス
        const Point POINT( 512, 0 );
        const Size SIZE( 768, 72 );
        const u_int COLOR = GetColor( 120, 120, 120 );
    }  // namespace DefMapMenu
}  // namespace GeneralWindow

#endif  // !DEFINITION_H
