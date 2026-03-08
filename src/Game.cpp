#include <raylib.h>

#include "Player.hpp"
#include "Game.hpp"

void Game::update()
{

    InitWindow(600, 600, "Game 2");
    SetTargetFPS(60);

    int playerX = 100;
    int playerY = 100;
    int playerRadius = 20;

    Player player = Player(playerX, playerY, playerRadius);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RED);

        if (IsKeyDown(KEY_A))
        {
            player.changeX(-5);
        }
        if (IsKeyDown(KEY_D))
        {
            player.changeX(5);
        }

        if (IsKeyDown(KEY_W))
        {
            player.changeY(-5);
        }
        if (IsKeyDown(KEY_S))
        {
            player.changeY(5);
        }

        player.draw();

        EndDrawing();
    }
}