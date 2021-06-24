#ifndef MAIN_SCENE_H
#define MAIN_SCENE_H

#include <vector>

#include "../Dev/Singleton.h"
#include "../Window/Map.h"
#include "../Window/MapMenu.h"
#include "../Window/Menu.h"
#include "../Window/Tab.h"
#include "../Window/Window.h"

using namespace GeneralWindow;
using namespace std;

class MainScene : public Singleton<MainScene> {
   public:
    MainScene();
    ~MainScene() {}

   public:
    void Update();

   private:
    vector<Window*> windowList;
};

#endif  // !MAIN_SCENE_H
