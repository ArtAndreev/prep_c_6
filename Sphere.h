#ifndef C_TASK6_SPHERE_H
#define C_TASK6_SPHERE_H

#include <string>

#include "ThreeDFigure.h"

class Sphere: public ThreeDFigure {
public:
    explicit Sphere(double radius = 1.0);
    void about() const override;
    double get_volume() const override;
    double get_surface_area() const override;
private:
    std::string name;
    double radius;
};

#endif //C_TASK6_SPHERE_H
