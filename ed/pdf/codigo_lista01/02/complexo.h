class  complexo {
    private:
        double real, imag;
    public:
        complexo(double real = 0, double imag = 0); // real + imag i
        complexo conjugado(); // return a - bi
        complexo operator=(complexo c); // real + imag i = c; return real + imag i
        void operator-(); // -a -bi; return -a -bi
        void operator+(complexo c); // return (real+imag i) + c
        void operator-(complexo c); // return (real+imag i) - c
        void operator*(complexo c); // return (real+imag i) * c
        void operator/(complexo c); // return (real+imag i)/c
        double modulo(); // return raiz(real^2 + imag^2)
        double get_real(); // return real 
        double get_imag(); // return imag
};