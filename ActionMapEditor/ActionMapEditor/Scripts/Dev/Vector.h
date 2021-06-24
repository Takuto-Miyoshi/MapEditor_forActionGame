#ifndef VECTOR_H
#define VECTOR_H

#include <math.h>

#include "Point.h"

struct Vector2 {
   public:
    // Default
    Vector2() :
        point( point.Zero() ) {}

    Vector2( auto x_, auto y_ ) :
        point( ( x_, y_ ) ) {}

   public:
    // Vector2( 0, 0 )を取得
    Vector2 Zero() const { return { 0, 0 }; }

    // ベクトルの長さを取得
    double Length() const { return sqrt( point.GetX() * point.GetX() + point.GetY() * point.GetY() ); }

    // 正規化したベクトルを取得
    Vector2 Normalized() const { return { point.GetX() / Length(), point.GetY() / Length() }; }

    // ベクトルの指す位置Xを取得
    auto GetX() const { return point.GetX(); }
    // ベクトルの指す位置Xを設定
    void SetX( auto x_ ) { point.SetX( x_ ); }

    // ベクトルの指す位置Yを取得
    auto GetY() const { return point.GetY(); }
    // ベクトルの指す位置Yを設定
    void SetY( auto y_ ) { point.SetY( y_ ); }

    // ベクトルの指す位置を取得
    Point GetPoint() const { return point; }
    // ベクトルの指す位置を設定
    void SetPoint( auto x_, auto y_ ) {
        point.SetX( x_ );
        point.SetY( y_ );
    }

#pragma region operator override
    Vector2 operator+( Vector2 vector ) const { return { point.GetX() + vector.point.GetX(), point.GetY() + vector.point.GetY() }; }

    Vector2 operator-( Vector2 vector ) const { return { point.GetX() - vector.point.GetX(), point.GetY() - vector.point.GetY() }; }

    Vector2 operator*( auto value ) const { return { point.GetX() * value, point.GetY() * value }; }

    Vector2 operator/( auto value ) const { return { point.GetX() / value, point.GetY() / value }; }

    void operator+=( Vector2 vector ) { point.Set( point.GetX() + vector.GetX(), point.GetY() + vector.GetY() ); }

    void operator-=( Vector2 vector ) { point.Set( point.GetX() - vector.GetX(), point.GetY() - vector.GetY() ); }

    void operator*=( auto value ) { point.Set( point.GetX() * value, point.GetY() * value ); }

    void operator/=( auto value ) { point.Set( point.GetX() / value, point.GetY() / value ); }

    bool operator==( Vector2 vector ) { return ( point.GetX() == vector.GetX() && point.GetY() == vector.GetY() ); }
#pragma endregion

   private:
    Point point;
};

#endif  // !VECTOR_H
