#include<iostream>
using namespace std;

class PVM
{
    protected:
        int a ;
    public:

        void setPVM()
        {
            cout<<"Enter A:";
            cin >>this->a;
        }



        void getPVM()
        {
            cout<<endl
                <<"A\t:"<<this->a<<endl;

        }
};

class MMM : public PVM
{
    private:
        int p;
    public:
        void setMMM()
        {
            cout<<"Enter P:";
            cin>>this->p;
        }
        void getMMM()
        {
            getPVM();
            cout<<endl
            << "P\t: " << this->p << endl;
        }
};
