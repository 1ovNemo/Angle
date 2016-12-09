#ifndef ANGLE_H
#define ANGLE_H
#include <cmath>

using namespace std;

class Angle
{

    public: Angle(double deg = 0.0): _angle(deg) {}

    double getAngle() const
    {
        return _angle;
    }

    double transInRad() const
    {
        return _angle * M_PI / 180;
    }

    private: double _angle;
};
#endif // ANGLE_H
