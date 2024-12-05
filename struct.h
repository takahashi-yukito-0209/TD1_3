#pragma once
struct Vector2 {
    float x;
    float y;
};

struct Color {
    int red;
    int green;
    int blue;
    int alpha;
    int color;
};

struct Player {
    Vector2 pos;
    Vector2 velocity;
    Vector2 acceleration;
    Vector2 speed;
    float width;
    float height;
    Color hue;
    int shotCoolTime;
};

struct Enemy {
    Vector2 pos;
    Vector2 velocity;
    Vector2 acceleration;
    Vector2 speed;
    float width;
    float height;
    Color hue;
};

struct Bullet {
    Vector2 pos;
    Vector2 speed;
    float radius;
    Color hue;
    int isShot;
};