#ifndef SUPERCLASE_H
#define SUPERCLASE_H


class SuperClase
{
    public:
        int a;

        SuperClase();
        virtual ~SuperClase();
        void setA(int);
        void setB(int);
        void setC(int);
        int getA();
        int getB();
        int getC();

    protected:
        int b;

    private:
        int c;
};

#endif // SUPERCLASE_H
