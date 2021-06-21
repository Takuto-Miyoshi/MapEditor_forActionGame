#include "Definition.h"
#include "DxLib.h"
#include "Function.h"

int WINAPI WinMain( _In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow ) {
    SetOutApplicationLogValidFlag( FALSE );
    ChangeWindowMode( TRUE );
    SetGraphMode( WINDOW_WIDTH, WINDOW_HEIGHT, 24, FPS );
    SetMainWindowText( "Map Editor for Action Games" );
    if ( DxLib_Init() == -1 ) return -1;
    SetDrawScreen( DX_SCREEN_BACK );

    auto function = Function::CreateInstance();

    while ( true ) {
        // FPS固定
        function->LockFPSHead();

        // 終了条件
        if ( ProcessMessage() == -1 ) break;
        if ( CheckKeyInput( KEY_INPUT_ESCAPE ) == 1 ) break;

        // マウス入力更新

        // 描画しているものを削除
        ClearDrawScreen();
        clsDx();

        // 処理

        // 描画
        ScreenFlip();

        // FPS固定
        function->LockFPSTail();
    }

    // ファイナライズ
    Function::DestoroyInstance();
    function = nullptr;

    DxLib_End();
    return 0;
}