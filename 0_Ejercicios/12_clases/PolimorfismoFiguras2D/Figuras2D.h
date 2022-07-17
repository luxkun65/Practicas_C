#ifndef FIGURAS2D_H
#define FIGURAS2D_H


class Figuras2D
{
    public:
        Figuras2D();
        virtual ~Figuras2D();
        virtual void calcularArea();
        double getArea();

    protected:
        double area;

    private:
};

#endif // FIGURAS2D_H
