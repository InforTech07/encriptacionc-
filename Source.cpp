#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include <stdio.h>
using namespace std;

struct  encryption {
    char enc[200];//cifrado
    char dec[200];//descifrado
    int key;
    char msg[200];//palabra
};
int main()
{
    string username, password;
    string uname = "admin", pass = "123";

    struct encryption e;
    char ch;
    int u, p, op, i;

    cout << "\n\t\t\t\t-------------------------------------------------------\n";
    cout << "\t\t\t\t+-----------+ APLICACION DE ENCRIPTACION +-----------+\n";
    cout << "\t\t\t\t-------------------------------------------------------\n";
    cout << "\t\t\t\t+-------+              INFORTECH               +-------+\n\n\n";

    cout << "\t INGRESE SUS CREDENCIALES";
    cout << "\n---------------------------------------------\n";
    cout << "\tUSUARIO:";
    cin >> username;
    cout << "\tCONTRASEÑA:";
    cin >> password;
    cout << "\n---------------------------------------------\n";

    u = username.compare(uname);
    p = password.compare(pass);

    if (u == 0 && p == 0)
    {
        cout << "\n";

        do {
            cout << "\n Ingrese un opcion:";
            cout << "\n1.Encriptar \t 2.Desencriptar \t 3.Salir\n";
            cin >> op;

            switch (op)
            {
            case 1:
                cout << "\nIngrese un numero como clave: \n";
                cin >> e.key;
                fflush(stdin);
                cout << "Ingrese su palabra:\n";
                cin >> e.msg;

                //hello there   key=2
                cout << "\nSu palabra encriptada es:\n";
                for (i = 0; i < strlen(e.msg); i++)
                {
                    e.enc[i] = e.msg[i] + e.key;
                    cout << e.enc[i];
                }
                break;

            case 2:
                cout << "\nIngrese el numero clave:";
                cin >> e.key;
                fflush(stdin);
                cout << "\nIngrese su palabra cifrado:";
                cin >> e.msg;
                cout << "\nSu palabra es:\n";
                for (i = 0; i < strlen(e.msg); i++)
                {
                    e.dec[i] = e.msg[i] - e.key;
                    cout << e.dec[i];
                }
                break;

            case 3:
                exit(0);
                break;

            default:
                cout << "\nOpciones 1, 2, 3\n";
            }
            cout << "\nDesea continuar.? y/Y para si. caracter diferente para salir.!\n";
            cin >> ch;
        } while (ch == 'y' || ch == 'Y');
        cout << "\nInfortech   +Informatica y Tecnologia+";

    }
    else {
        cout << "Sus credenciales son incorrectas";
    }

}