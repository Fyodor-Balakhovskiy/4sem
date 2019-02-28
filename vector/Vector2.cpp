//
// Created by fedor on 23.02.19.
//
#include <cmath>
#include <assert.h>
#include <iostream>
#include <vector>
#include "Vector2.hpp"


Vector2::Vector2(double x2, double y2)
{
    this->x = x2;
    this->y = y2;
};

/*
Vector2::Vector2(const std::vector<double> &point(2))//does such sintax possible?
{
    this->x = point[0];
    this->y = point[1];
};
*/

std::ostream& operator<<(std::ostream & oust, const Vector2 & v)
{
    oust << "(" << v.x << ", "<< v.y << ")";
    return oust;
};

std::istream& operator>>(std::istream & inst, Vector2 & v)
{
    inst >> v.x;
    inst >> v.y;
    return inst;
};

Vector2 Vector2::operator+(const Vector2 & v) const
{
    double x2 = 0.0;
    double y2 = 0.0;
    x2 = this->x + v.x;
    y2 = this->y + v.y;
    Vector2 vector_sum(x2,y2);
    return vector_sum;
};

Vector2 & Vector2::operator+=(const Vector2 & v)
{
    this->x = this->x + v.x;
    this->y = this->y + v.y;
    return (*this);//разыменовывая this я получаю сам объект, от которого вызван метод
};//разве механизм вазврата не создаст его копию и не вернёт наружу её?

Vector2 Vector2::operator-(const Vector2 & v) const
{
    double x2 = 0.0;
    double y2 = 0.0;
    x2 = this->x - v.x;
    y2 = this->y - v.y;
    Vector2 vector_sum(x2,y2);
    return vector_sum;
};

Vector2 & Vector2::operator-=(const Vector2 & v)
{
    this->x = this->x - v.x;
    this->y = this->y - v.y;
    return (*this);
};

double Vector2::operator*(const Vector2 & v) const//skalar multiplication
{
    double value;
    value = (this->x * v.x) + (this->y * v.y);
    return value;
};

double Vector2::operator^(const Vector2 & v) const
{
    double value;
    value = (this->x * v.y) - (this->y * v.x);
    return value;
};

Vector2 Vector2::operator*(double k) const
{
    double x2 = this->x * k;
    double y2 = this->y * k;
    Vector2 vector(x2, y2);
    return vector;
};

Vector2 operator*(double k, const Vector2 & vector_a)
{
    Vector2 vector_b;
    vector_b = vector_a * k;
    return vector_b;
};

Vector2 Vector2::operator/(double k) const
{
    assert(k != 0.0);
    double x2 = this->x / k;
    double y2 = this->y / k;
    Vector2 vector(x2, y2);
    return vector;
};

double Vector2::len() const
{
    double length = sqrt((this->x)*(this->x) + (this->y)*(this->y));
    return length;
};

Vector2 Vector2::norm() const
{
    double x2 = (this->x)/(this->len());
    double y2 = (this->y)/(this->len());
    Vector2 vector(x2, y2);
    return vector;
};

Vector2 Vector2::ortgonal() const
{
    double x2 = this->y;
    double y2 = -(this->x);
    Vector2 vector(x2, y2);
    return vector;
};

Vector2 Vector2::operator-() const
{
    Vector2 vector;
    vector = (*this) * (-1);
    return vector;
};

Vector2& Vector2::rotate(double alpha)
{
    double x1 = this->x;
    double y1 = this->y;
    this->x = x1 * cos(alpha) - y1 * sin(alpha);
    this->y = x1 * sin(alpha) + y1 * cos(alpha);
    return (*this);
};

Vector2 Vector2::get_rotated(double alpha) const
{
    double x1 = this->x;
    double y1 = this->y;
    double x2 = x1 * cos(alpha) - y1 * sin(alpha);
    double y2 = x1 * sin(alpha) + y1 * cos(alpha);
    Vector2 vector(x2, y2);
    return vector;
};



















