//
// Created by fedor on 23.02.19.
//
/*
 * Реализовать класс Vector2 со следующиеми методами:
• operator <<, >> (перегрузка ввода и вывода)
• Vector2 operator+(const Vector2& other) const;
• Vector2& operator+=(const Vector2& other);
• аналогично - и -=
• float operator*(const Vector2& other) const; (скалярное произведение)
• float operator^(const Vector2& other) const; (векторное произведение)
• * на скаляр с «2х двух сторон»
• / на скаляр
• единичный вектор norm()
• перпендикуляр (y, -x)
• len(), squareLen()
• унарный минус Vector2 operator-() const
• конструкторы
• поворот на угол 2шт.: rotate и getRotated (первый меняет себя, второй –
возвращает новое значение … по аналогии с += и +)
Работу методов нужно проверить: в main’е вызвать каждый хотя бы по разу.
 */

#pragma once

class Vector2 {
private:
    double x;
    double y;
public:
    Vector2(double,double);
    Vector2(std::vector<double>&);

    friend std::ostream & operator <<(std::ostream & , const Vector2 );
    friend std::istream & operator >>(std::istream & in, Vector2 );

    Vector2 operator+(const Vector2 &) const;
    Vector2& operator+=(const Vector2 &);//здесь мы будем возвращать ссылку на объект,//который у нас был ещё до ввызова этого метода,// если возвращать ссылку на объект, который создан внутри метода, то на выходе//мы получим ссылку, указывающую не на что, так как сам объект уничтожится, по выполнение метода, как локальный
    Vector2 operator-(const Vector2 &) const;
    Vector2& operator-=(const Vector2 &);

    double operator*(const Vector2 &) const;//скалярное произведение
    double operator^(const Vector2 &) const;//векторное произведение

    Vector2 operator*(double) const;//справа умножить на скаляр(добавить ещё слева)
    friend Vector2 operator*(double, const Vector2 &);
    Vector2 operator/(double) const;//разделить на скаляр

    double len() const;// длинна вектора

    Vector2 norm() const ; // возвращает еденичные вектор в том же напралении
    Vector2 ortgonal() const;// возвращает пер-ляр (x,y) --> (y,-x)

    Vector2 operator-()const;//унарный минус

    Vector2& rotate(double); //вращает себя, в радианах, против часовой
    Vector2 get_rotated(double) const; // возвращает повёрнутый
};