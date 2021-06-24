#ifndef FUNCTION_H
#define FUNCTION_H

#include "DxLib.h"
#include "Singleton.h"

class Function : public Singleton<Function> {
   public:
    Function();
    virtual ~Function() {};

   public:
    /// @brief FPS固定処理：先に呼び出す
    void LockFPSHead();

    /// @brief FPS固定処理：後に呼び出す
    void LockFPSTail();

   private:
    LARGE_INTEGER timeFreq;  // 周波数
    LARGE_INTEGER timeStart;  // 計測開始
    LARGE_INTEGER timeEnd;  // 計測終了
    double progressTime;  // 経過時
};

#endif  // !FUNCTION_H