//
// Created by fedor on 23.02.19.
//

Vector2::Vector2(double x1 = 0.0, double y1 = 0.0)
{
    this->x = x1;
    this->y = y1;
};

Vector2::Vector2(const std::vector<double> &point(2))//does such sintax possible?
{
    this->x = point[0];
    this->y = point[1];
};

