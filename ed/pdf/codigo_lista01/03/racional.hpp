class racional {
    private:
        int num, den;
        int mdc(int a, int b);
    public:
        racional(int num = 0, int den = 1); // num/den --> reduzir
        void reduzir(); // (num/MDC(num,den)) / (den/MDC(num,dem))
        bool operator<(racional r); // return true se < r; false caso contr´ario
        bool operator==(racional r); // return true se == r; false caso contr´ario
        bool operator>(racional r); // return true se > r; false caso contr´ario
};