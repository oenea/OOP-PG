#include <iostream>
#include "FiguraPlaska.h"
#include "Okrag.h"
#include "Prostokat.h"
#include "Trojkat.h"

void zadanie3_1()
{
    Okrag okrag = Okrag(2);
    Okrag* okragPointer = &okrag;

    std::cout << okrag;
    std::cout << *okragPointer;

    std::cout << okrag.GetR() << '\n';

    okrag.SetR(6);

    std::cout << okragPointer->GetR() << '\n';

    std::cout << "Obwod: " << okrag.Obwod() << '\n';
    std::cout << "Pole: " << okragPointer->Pole() << '\n';
}

void zadanie3_2()
{
    auto prostokat = Prostokat(2, 3);
    auto trojkat = Trojkat(1, 2, 3);
    auto okrag = Okrag(3);

    FiguraPlaska* arr[] = {
        &prostokat,
        &trojkat,
        &okrag,
    };

    for (size_t i = 0; i < sizeof(arr) / sizeof(FiguraPlaska*); i++)
    {
        std::cout << *arr[i];
        std::cout << "Obwod: " << arr[i]->Obwod() << '\n';
        std::cout << "Pole: " << arr[i]->Pole() << '\n';
    }
}

void wypiszLiczbyRazem(int a)
{
    std::cout << "Pojedyncza liczba: " << a << '\n';
}

void wypiszLiczbyRazem(int a, int b)
{
    std::cout << "Podwojna liczba: " << a << ' ' << b << '\n';
}

class klasaNadrzedna
{
public:
    virtual void Wypisz()
    {
        std::cout << "Funkcja w klasie nadrzednej\n";
    }
};

class klasaPodrzedna : public klasaNadrzedna
{
public:
    void Wypisz()
    {
        std::cout << "Funkcja w klasie podrzednej\n";
    }
};


void zadanie3_3()
{
    //overloading
    wypiszLiczbyRazem(10);
    wypiszLiczbyRazem(2, 3);
    //overriding
    klasaPodrzedna obj;
    obj.Wypisz();
    

}

int main()
{
    Okrag okrag1 = Okrag(5);
    Trojkat trojkat1 = Trojkat(7, 3, 4);
    Prostokat prostokat1 = Prostokat(9, 2);

    std::cout << "\n" << "zadanie3_1" << '\n';
    zadanie3_1();
    std::cout << "\n" << "zadanie3_2" << '\n';
    zadanie3_2();
    std::cout << "\n" << "zadanie3_3" << '\n';
    zadanie3_3();
    std::cout << '\n';
}
