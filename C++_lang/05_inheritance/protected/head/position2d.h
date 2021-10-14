#ifndef _POSITION2D_H_
#define _POSITION2D_H_

#include "../head/vector2d.h"

class  Position2D : public Vector2D {
public:
    // 位置のリセッtp
    void resetPosition();
    // 移動
    void move(int dx, int dy);
};

#endif // _POSITION2D_H_
