#include "Definition.h"
#include "Dev/Function.h"
#include "Dev/InputManager.h"
#include "DxLib.h"
#include "Scene/MainScene.h"

int WINAPI WinMain( _In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow ) {
    SetOutApplicationLogValidFlag( FALSE );
    SetGraphMode( WINDOW_SIZE.GetX(), WINDOW_SIZE.GetY(), 32, FPS );
    ChangeWindowMode( TRUE );
    SetMainWindowText( "Map Editor for Action Games" );
    if ( DxLib_Init() == -1 ) return -1;
    SetDrawScreen( DX_SCREEN_BACK );

    auto function = Function::CreateInstance();
    auto inputManager = InputManager::CreateInstance();
    auto mainScene = MainScene::CreateInstance();

    while ( true ) {
        // FPS固定
        function->LockFPSHead();

        // 終了条件
        if ( ProcessMessage() == -1 ) break;
        if ( CheckKeyInput( KEY_INPUT_ESCAPE ) == 1 ) break;

        // 入力更新
        inputManager->Update();

        // 描画しているものを削除
        ClearDrawScreen();
        clsDx();

        // 処理
        mainScene->Update();

        // 描画
        ScreenFlip();

        // FPS固定
        function->LockFPSTail();
    }

    // ファイナライズ
    mainScene = nullptr;
    inputManager = nullptr;
    function = nullptr;
    MainScene::DestoroyInstance();
    InputManager::DestoroyInstance();
    Function::DestoroyInstance();

    DxLib_End();
    return 0;
}
