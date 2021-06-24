#include "MainScene.h"

#include "DxLib.h"

MainScene::MainScene() {
    windowList.push_back( new Tab() );
    windowList.push_back( new Menu() );
    windowList.push_back( new Map() );
    windowList.push_back( new MapMenu );
}

void MainScene::Update() {
    for ( auto& e : windowList ) {
        e->Draw();
    }
}
