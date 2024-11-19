#include <iostream> 
#include <string>
#include <locale.h>
#include <windows.h>


 using namespace std;

 int main() 
 {
    setlocale(LC_ALL, "pt_BR.UTF-8");
	
	SetConsoleOutputCP(CP_UTF8);


    double x,y;
    int option;
    bool okSenha = false;
    bool okContinuar = true;
    int qtdTentativas = 3;
    string senha = "123456";
    string senhaDigitada;

    system ("color 90");
    cout << "CALCULADORA PESSOAL!" << endl;
    cout << " " << endl;
    system("pause");
    system("cls"); 

    while (qtdTentativas > 0)
    {
        system ("color 10");
        cout << "Digite sua senha: ";
        cin >> senhaDigitada;
        
        if (senha == senhaDigitada)
        {
            okSenha = true;
             break;
        }else
        {
         qtdTentativas --;
         system("color 40");
         cout << " " << endl;
         cout << "SENHA INCORRETA!!"<< endl;
         system("pause");
     }
        system("cls");
    }
    
    if (!okSenha)
    { 
        cout <<"Quantidades de tentativas excedidas!!!" << endl;
        system("pause");
        return 1;
    }
    

    do
    {
        system("cls");
        system ("color 10");
        cout << "VAMOS AS DÚVIDAS!" << endl;
        cout << " "<< endl;
        cout << "Digite o primeiro número: ";
        cin >> x;
        cout << "Digite o segundo número:";
        cin >> y;

        cout << "1. Soma" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl;
        cout << "Informe a operação desejada: ";
        cin>> option;
        system("cls");

        switch (option)
        { 
        system("color 70");
        case 1:
        cout << "A soma é: " << x + y << endl;
            break;

        case 2:
        cout << "A subtração é: " << x - y << endl;
            break;

        case 3:
        cout << "A multiplicação é: " << x * y << endl;
            break;

        case 4:
        cout << "A divisão é: " << x / y << endl;
            break;
        
        default:
        system ("color 40");
        cout << "Operação escolhida indisponivel" << endl;     
            break;
         }
         cout << "" << endl;
         cout << "Deseja continuar? 1.Sim outro numero 'sair'" << endl;
         cout << "Digite a sua escolha: ";
        cin >> option;

        if (option != 1)
        {
            okContinuar = false;
        }
    system("cls");
    } while (okContinuar);

    system ("color A0");
    cout << "Até a próxima duvida!!" << endl;
    cout << "Até mais!!" << endl;
    system("pause");
    return 0;

 }