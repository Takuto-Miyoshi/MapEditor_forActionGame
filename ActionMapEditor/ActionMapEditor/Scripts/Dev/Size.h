#ifndef SIZE_H
#define SIZE_H

struct Size {
   public:
    // Default
    Size() :
        x( 0 ), y( 0 ) {}

    Size( auto x_, auto y_ ) :
        x( x_ ), y( y_ ) {}

   public:
    // Size( 0, 0 )を取得
    Size Zero() const { return { 0, 0 }; }

    // 面積を取得
    auto GetArea() const { return x * y; }

    // サイズXを取得
    auto GetX() const { return x; }
    // サイズXを設定
    void SetX( auto x_ ) { x = x_; }

    // サイズYを取得
    auto GetY() const { return y; }
    // サイズYを設定
    void SetY( auto y_ ) { y = y_; }

    // サイズを設定
    void Set( auto x_, auto y_ ) {
        x = x_;
        y = y_;
    }

#pragma region operator override
    Size operator+( Size size ) const { return { x + size.x, y + size.y }; }
    Size operator-( Size size ) const { return { x - size.x, y - size.y }; }
    Size operator*( auto value ) const { return { x * value, y * value }; }
    Size operator/( auto value ) const { return { x / value, y / value }; }
    void operator+=( Size size ) { Set( x + size.x, y + size.y ); }
    void operator-=( Size size ) { Set( x - size.x, y - size.y ); }
    void operator*=( auto value ) { Set( x * value, y * value ); }
    void operator/=( auto value ) { Set( x / value, y / value ); }
    bool operator==( Size size ) { return ( x == size.x && y == size.y ); }
#pragma endregion

   private:
    int x;
    int y;
};

#endif  // !SIZE_H
