#include <stdio.h>

#define PI (3.14159)

typedef struct _Shape
{
    double height;
    double radium;

}Shape;

void init(Shape* shape, double height, double radium)
{
    shape->height = height;
    shape->radium = radium;
}

double area(Shape* shape)
{
    double m_area = ((shape->height) * 2.0 * PI *(shape->radium)) +
                    (2.0 * PI * (shape->radium) * (shape->radium));
    return m_area;
}

int main()
{
    double height = 0.0, radium = 0.0;
    Shape shape;
    scanf("%lf%lf", &height, &radium);
    init(&shape, height, radium);
    printf("%.3f", area(&shape));


    return 0;
}
