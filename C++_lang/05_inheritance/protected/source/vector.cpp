#include "../head/vector2d.h"

// constructor
Vector2D::Vector2D() {
    init();
}

// 値の設定
void Vector2D::setValue(int x, int y) {
    m_x = x; m_y = y;
}

// x座標の取得
int Vector2D::getX() {
    return m_x;
}

// y座標の取得
int Vector2D::getY() {
    return m_y;
}

void Vector2D::init() {
    m_x = 0; m_y = 0;
}

