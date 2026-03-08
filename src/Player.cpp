#include <raylib.h>

#include "Player.hpp"

Player::Player(int x, int y, int size)
{
    this->x = x;
    this->y = y;
    this->size = size;
}

void Player::changeX(int speed)
{
    x += speed;

    if (x - size < 0)
    {
        x = 0 + size;
    }
    
    if (x + size > 600)
    {
        x = 600 - size;
    }
}

void Player::changeY(int speed)
{
    y += speed;

    if (y - size < 0)
    {
        y = 0 + size;
    }
    
    if (y + size > 600)
    {
        y = 600 - size;
    }
}

void Player::draw()
{
    DrawCircle(x, y, size, BLUE);
}