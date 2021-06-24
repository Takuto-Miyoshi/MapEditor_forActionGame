#ifndef MAIN_SCENE_H
#define MAIN_SCENE_H

#include "../Dev/Singleton.h"
#include "../Window/Map.h"
#include "../Window/MapMenu.h"
#include "../Window/Menu.h"
#include "../Window/Tab.h"
#include "../Window/Window.h"

using namespace GeneralWindow;

class MainScene : public Singleton<MainScene> {
   public:
    MainScene();
    ~MainScene() {}

   public:
    void Update();

   private:
    Window tab;  // メニューの一覧
    Window content;  // メニューの中身
    Window map;  // 編集中のマップ
    Window mapMenu;  // マップに対するメニュー
};

#endif  // !MAIN_SCENE_H
