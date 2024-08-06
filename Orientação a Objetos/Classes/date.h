#ifndef DATE
#define DATE

class Date{
    private:
        int d, m, y;
        mutable int count;
        static int howmany;

    public:
        Date(int = 1, int = 1, int = 1972);
        ~Date() {howmany--;}; //In Class
        int get_day(){return d;}
        int get_month(){return m;}
        int get_year(){return y;}
        int get_count(){return count;}
        static int get_howmany(){return howmany;}
        void show() const;
        Date& set_day(int);
        Date& set_month(int);
        Date& set_year(int);
};

#endif