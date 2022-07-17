#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    public:
        int x, y;
        Punto();
        Punto(Punto&);
        virtual ~Punto();

        void setCoord(int, int);
        void mostrarCoord();

    protected:

    private:
};

#endif // PUNTO_H
