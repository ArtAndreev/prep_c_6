#ifndef C_TASK6_RECTCUBOID_H
#define C_TASK6_RECTCUBOID_H

#include <string>

#include "ThreeDFigure.h"

class RectCuboid: public ThreeDFigure {
public:
    explicit RectCuboid(double length = 1.0,
                        double width = 1.0, double height = 1.0);
    void about() const override;
    double get_volume() const override;
    double get_surface_area() const override;
private:
    std::string name;
    double length;
    double width;
    double height;
};

#endif //C_TASK6_RECTCUBOID_H
