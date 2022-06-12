#include "Core/AmigaGame.h"

int main(void)
{
    AmigaGame game;
    bool success = game.Initialize();

    if (success)
        game.AmigaRun();

    game.AmigaEnd();
    return 0;
}