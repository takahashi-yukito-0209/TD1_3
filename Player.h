#pragma once
#include <stdio.h>
#include <Novice.h>
#include "struct.h"
#include <math.h>

void PlayerMove(float posX, float posY, Vector2 velocity, Vector2 speed) {
	Vector2 newVelocity = { 0.0f };
	float length = 0.0f;

	length = sqrtf(powf(velocity.x, 2) + powf(velocity.y, 2));

	if (length != 0.0f)
	{
		newVelocity.x = velocity.x / length;
		newVelocity.y = velocity.y / length;

		posX += velocity.x * speed.x;
		posY += velocity.y * speed.y;
	}
}