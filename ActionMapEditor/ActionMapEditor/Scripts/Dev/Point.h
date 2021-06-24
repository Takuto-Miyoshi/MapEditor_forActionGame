#ifndef POINT_H
#define POINT_H

struct Point {
   public:
    // Default
    Point() :
        x( 0 ), y( 0 ) {}

    Point( auto x_, auto y_ ) :
        x( x_ ), y( y_ ) {}

   public:
    // Point( 0, 0 )を取得
    Point Zero() const { return { 0, 0 }; }

    // ポイントXを取得
    auto GetX() const { return x; }
    // ポイントXを設定
    void SetX( auto x_ ) { x = x_; }

    // ポイントYを取得
    auto GetY() const { return y; }
    // ポイントYを設定
    void SetY( auto y_ ) { y = y_; }

    // ポイントを設定
    void Set( auto x_, auto y_ ) {
        x = x_;
        y = y_;
    }

#pragma region operator override
    Point operator+( Point point ) const { return { x + point.x, y + point.y }; }
    Point operator-( Point point ) const { return { x - point.x, y - point.y }; }
    Point operator*( auto value ) const { return { x * value, y * value }; }
    Point operator/( auto value ) const { return { x / value, y / value }; }
    void operator+=( Point point ) { Set( x + point.x, y + point.y ); }
    void operator-=( Point point ) { Set( x - point.y, y - point.y ); }
    void operator*=( auto value ) { Set( x * value, y * value ); }
    void operator/=( auto value ) { Set( x / value, y / value ); }
    bool operator==( Point point ) { return ( x == point.x && y == point.y ); }
#pragma endregion

   private:
    int x;
    int y;
};

#endif  // !POINT_H
