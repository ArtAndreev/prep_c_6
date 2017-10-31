#ifndef C_TASK6_THREEDFIGURE_H
#define C_TASK6_THREEDFIGURE_H

class ThreeDFigure {
public:
    virtual void about() const = 0;
    virtual double get_volume() const = 0;
    virtual double get_surface_area() const = 0;
    virtual ~ThreeDFigure() {};
};

#endif //C_TASK6_THREEDFIGURE_H
