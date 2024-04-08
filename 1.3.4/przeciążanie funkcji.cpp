#include <iostream>
using namespace std;

//float Suma(float a,float b){
    //return a+b;
//}
//double Suma(double c, double d){
    //return c+d;
//}

//int main()
//{
    //float a,b;
    //double c,d;
    //char opcja;

    //cout<<"Wybierz opcje: "<<endl;
    //cout<<"1 - Suma calkowita "<<endl;
    //cout<<"2 - Suma Zmiennoprzecinkowa "<<endl;

    //cin>>opcja;

    //switch(opcja)
    //{
    //case '1':
        //cout<<"Podaj wartosc dla 1 liczby: "; cin>>a;
        //cout<<"Podaj wartosc dla 2 liczby: "; cin>>b;
        //cout<<"Suma wynosi "<<Suma(a,b)<<endl;
        //break;
    //case '2':
        //cout<<"Podaj wartosc dla 1 liczby: "; cin>>c;
        //cout<<"Podaj wartosc dla 2 liczby: "; cin>>d;
        //cout<<"Suma wynosi "<<Suma(c,d)<<endl;
        //break;
    //}

    //return 0;
//}
float Suma(float a,float b){
    return a+b;
}
double Suma(double c, double d){
    return c+d;
}
short Suma(short e, short f){
    return e+f;
}
int Suma(int g, int h){
    return g+h;
}
int main()
{
    float a,b;
    double c,d;
    short e,f;
    int g,h;
    char opcja;

    cout<<"Wybierz opcje: "<<endl;
    cout<<"1 - Suma calkowita "<<endl;
    cout<<"2 - Suma Zmiennoprzecinkowa "<<endl;
    cout<<"3 - Suma short "<<endl;
    cout<<"4 - Suma int "<<endl;
    

    cin>>opcja;

    switch(opcja)
    {
    case '1':
        cout<<"Podaj wartosc dla 1 liczby: "; cin>>a;
        cout<<"Podaj wartosc dla 2 liczby: "; cin>>b;
        cout<<"Suma wynosi "<<Suma(a,b)<<endl;
        break;
    case '2':
        cout<<"Podaj wartosc dla 1 liczby: "; cin>>c;
        cout<<"Podaj wartosc dla 2 liczby: "; cin>>d;
        cout<<"Suma wynosi "<<Suma(c,d)<<endl;
        break;
	case '3':
		cout<<"Podaj wartosc dla 1 liczby: "; cin>>e;
        cout<<"Podaj wartosc dla 2 liczby: "; cin>>f;
        cout<<"Suma wynosi "<<Suma(e,f)<<endl;
        break;
	case '4':
        cout<<"Podaj wartosc dla 1 liczby: "; cin>>g;
        cout<<"Podaj wartosc dla 2 liczby: "; cin>>h;
        cout<<"Suma wynosi "<<Suma(g,h)<<endl;
        break;
    }
    return 0;
}