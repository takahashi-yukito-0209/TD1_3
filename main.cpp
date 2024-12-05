#include "struct.h"
#include <Novice.h>
#include "Player.h"

const char kWindowTitle[] = "1346_gameTitle";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

    // ライブラリの初期化
    Novice::Initialize(kWindowTitle, 1280, 720);

    // キー入力結果を受け取る箱
    char keys[256] = { 0 };
    char preKeys[256] = { 0 };

    // 変数の宣言と初期化

    // シーン
    enum scene {
        TITLE,
        VS_PHASE1,
        VS_PHASE2,
        VS_PHASE3,
        END,
        GAMEOVER,
        CREDIT,
        RULE,
    };

    // 初期シーン
    int scene = TITLE;

    // ウィンドウの×ボタンが押されるまでループ
    while (Novice::ProcessMessage() == 0) {
        // フレームの開始
        Novice::BeginFrame();

        // キー入力を受け取る
        memcpy(preKeys, keys, 256);
        Novice::GetHitKeyStateAll(keys);

        switch (scene) {
        case TITLE:

            // 更新処理

            // 描画処理

            break;

        case VS_PHASE1:

            // 更新処理

            // 描画処理

            break;

        case VS_PHASE2:

            // 更新処理

            // 描画処理

            break;

        case VS_PHASE3:

            // 更新処理

            // 描画処理

            break;

        case END:

            // 更新処理

            // 描画処理

            break;

        case GAMEOVER:

            // 更新処理

            // 描画処理

            break;

        case CREDIT:

            // 更新処理

            // 描画処理

            break;

        case RULE:

            // 更新処理

            // 描画処理

            break;
        }

        // フレームの終了
        Novice::EndFrame();

        // ESCキーが押されたらループを抜ける
        if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
            break;
        }
    }

    // ライブラリの終了
    Novice::Finalize();
    return 0;
}
