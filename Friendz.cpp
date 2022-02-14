#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    char name[35];
    char age[3];
    char gender;
    char fav_col[10];
    char fav_dish[25];
    char fav_act[25];
    cout << "***DISCLAIMER***" << endl;
    cout << "This is not aimed to harm anyone's prestige. It is just created for fun. Please do not take it seriously." << endl;
    cout << "If you are not comfortable, then sorry for our inconvenience. If you can take it as a prank, you are welcome." << endl;
    cout << "Else be kind enough to forgive our non-intentional attempt." << endl;
    cout << endl;
    system("pause");
    cout << endl;
    cout << "Friends Maker" << endl;
    system("pause");
    cout << "Enter your name :" << endl;
    cin.getline(name, 35);
    cout << "Enter your age :" << endl;
    cin >> age;
    cout << "Enter your gender (m/f) :" << endl;
    cin >> gender;
    cout << endl;
    cout << "Please wait" << endl;
    cout << endl;
    cout << "Your details have been recorded, press enter to see." << endl;
    system("pause");
    cout << endl;
    Sleep(3000);
    cout << "Name:- " << name << endl;
    cout << "Age:- " << age << endl;
    if (gender == 'm')
    {
        cout << "Gender:- Male" << endl;
    }
    else
    {
        cout << "Gender:- Female" << endl;
    }

    cout << endl;
    Sleep(3000);
    cout << "One friendship match has been found." << endl;
    cout << endl;
    cout << "To reveal, Press enter." << endl;
    system("pause");
    Sleep(3000);
    cout << endl;
    cout << "Congo!" << endl;
    Sleep(3000);
    cout << "You have a noble soul." << endl;
    Sleep(3000);
    cout << "Hope it doesn't hurt you." << endl;
    Sleep(3000);
    cout << endl;
    cout << "You are kind enough." << endl;
    Sleep(3000);
    cout << "Hope you enjoy it." << endl;
    Sleep(3000);
    cout << endl;
    cout << "You have fear of examinations." << endl;
    Sleep(3000);
    cout << "It will reduce some stress." << endl;
    Sleep(3000);
    cout << endl;
    cout << "You won't have to wait any more." << endl;

    string boys[42] = {"PRERIT AGRAWAL",
                       "GOBINDA PANDA",
                       "NIKUNJ AGARWAL",
                       "JYOTI PRAKASH PANDA",
                       "SOUMENDRA PRIYADARSAN",
                       "SARTHAK PRIYADARSHI MAHANTA",

                       "ANSHU AGRAWAL",

                       "PREM PRABHUJEET",
                       "PRERIT KUMAR JAIN",

                       "MOHAMMED SWALEH AMAN",
                       "BIBEK KUMAR MEHER",
                       "SOUMYA SAGAR SAMAL",

                       "CHIRAG AGRAWAL",

                       "PALLAVI MAHANTA",
                       " JYOTIRADITYA BISWAL",
                       " JIBESH KUMAR PANDA",

                       " BASANT XALXO",

                       " SASHMIT KABI",
                       " TANMAYA KUMAR NAIK",

                       "SOURAV PANDA",
                       " ANIKET PRADHAN",
                       " SWASTIK GORAI",
                       " SOHAM SAMANTARAY",
                       " PULKIT SINHA",
                       " PIYUSH SAHU",
                       " SHIVAM SAHOO",

                       "KOUSIK MISHRA",
                       "ASHUTOSH MISHRA",
                       "SHIVBAM SRINIBAS BHOI",
                       "AADIT KAR",
                       "SACHIT KUMAR PUROHIT",
                       "VENKENTESWAR RANA",
                       "SIBASIS BADATYA",

                       "RAMAKANTA SAHOO",

                       "SIBANAND SAHU",
                       "ASHISH KUMAR BEHERA",

                       "MAHABEER PATNAIK",
                       "SOORJYAKANTA SETHY",

                       "BIDHAN HASDA",

                       "HARISH CHOUDHARY",
                       "ASUTOSH BEHURIA",
                       "SOUMYA NIBEDITA BHAL"

    };
    string girls[19] = {

        "YOGITA AGRAWAL",
        "ADYA MISHRA",

        "SHIBANI PANDA",
        "SHEETAL AGRAWAL",

        "AYUSHI KUMARI",
        "ANKITA PATRA",

        " SHRUTI SAMANTARAY",

        "PRATISHRUTI JENA",
        " RANKINI MURMU",

        " MAHAK AGRAWAL ",

        "AMISHA SAMAL",

        "SIMRAN TAYAL",
        "ALISHA SAHOO",
        "ANAUSKA DAS",

        "JANNAT BHUYAN",
        "SUCHARITA SAHOO",

        "SARASWATI SWAIN",

        "S KASISH",

        "SOMA HANSDAH",

    };
    srand(time(0));

    int matchB = rand() % 42;
    int matchG = rand() % 19;
    cout << endl;
    cout << "*****************************" << endl;

    if (gender == 'm')
        cout << name <<  " friends " << girls[matchG];
    else

        cout << boys[matchB] << " friends " << name;
    cout << endl;
    cout << endl;
    cout << "*****************************" << endl;

    Sleep(3000);
    system("pause");
    return 0;
}