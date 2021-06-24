#include "MainScene.h"

#include "DxLib.h"

MainScene::MainScene() {
    tab = Window( { 0, 0 }, { WINDOW_SIZE.GetX() / 10, WINDOW_SIZE.GetY() }, GetColor( 100, 100, 100 ) );
    content = Window( { WINDOW_SIZE.GetX() / 10, 0 }, { WINDOW_SIZE.GetX() / 10 * 3, WINDOW_SIZE.GetY() }, GetColor( 200, 200, 200 ) );
    map = Window( { WINDOW_SIZE.GetX() / 10 * 4, WINDOW_SIZE.GetY() / 10 }, { WINDOW_SIZE.GetX() / 10 * 6, WINDOW_SIZE.GetY() / 10 * 9 }, GetColor( 50, 50, 50 ) );
    mapMenu = Window( { WINDOW_SIZE.GetX() / 10 * 4, 0 }, { WINDOW_SIZE.GetX() / 10 * 6, WINDOW_SIZE.GetY() / 10 }, GetColor( 100, 100, 100 ) );
}

void MainScene::Update() {
    tab.Draw();
    content.Draw();
    map.Draw();
    mapMenu.Draw();
}