#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

void converterDolar();
void converterEuro();
void converterLibra();
void converterIene();
void limparTela();
void pausar();

int main()
{
    int status = 1;
    int opcao;

    while (status)
    {
        cout << "\n ===Bem vindo a Casa de Cambio Tech Brasileira ===\n";
        cout << "\n";
        cout << "\nEscolha qual moeda deseja converter\n";
        cout << "\n1- Dolar\n";
        cout << "\n2- Euro\n";
        cout << "\n3- Libra\n";
        cout << "\n4- Iene\n";
        cout << "\n5- Sair\n";
        cout << "\nAlternativa: ";
        cin >> opcao;

        switch (opcao)
        {

        case 1:
        {
            limparTela();
            cout << "\n=== Dolar ===\n";
            cout << "\nAtualmente a cotacao do Dolar esta em 5.12 reais!\n";
            cout << "\n";
            converterDolar();
            break;
        }

        case 2:
        {
            limparTela();
            cout << "\n=== Euro ===\n";
            cout << "\nAtualmente a cotacao do Euro esta em 5,87 reais!\n";
            cout << "\n";
            converterEuro();
            break;
        }

        case 3:
        {
            limparTela();
            cout << "\n=== Libra ===\n";
            cout << "\nAtualmente a cotacao do Libra esta em 6,85 reais!\n";
            cout << "\n";
            converterLibra();
            break;
        }

        case 4:
        {
            limparTela();
            cout << "\n=== Iene ===\n";
            cout << "\nAtualmente a cotacao do Iene esta em 0.031 reais!\n";
            cout << "\n";
            converterIene();
            break;
        }

        case 5:
        {
            status = 0;
            limparTela();
            cout << "Obrigado por usar o sistema\n";
            cout << "\n";
            pausar();
            limparTela();
            break;
        }

        default:
        {
            limparTela();
            cout << "Insira o valor do menu corretamente !";
            cout << "\n";
            pausar();
            limparTela();
            break;
        }
        }
    }
    return 0;
}

void converterDolar()
{

    float valor;
    int confirmar;
    float dolar;
    float cotacaoDolar = 5.12;

    cout << "Digite em REAIS o valor que deseja converter: ";
    cin >> valor;

    if (valor <= 0)
    {
        cout << "Valor invalido!";
        cout << "\n";
        pausar();
        limparTela();
        return;
    }

    cout << "\nDeseja realmente fazer essa conversao ?\n";
    cout << "\n1- SIM\n";
    cout << "\n2- Nao\n";
    cout << "\n";
    cout << "Alternativa: ";
    cin >> confirmar;

    if (confirmar == 1)
    {
        dolar = valor / cotacaoDolar;
        cout << fixed << setprecision(2);
        cout << "\nSeu valor em conversao fica em: " << valor << " BRL" << "\nDolar: " << dolar << " USD" << "\n"
             << endl;
    }
    else if (confirmar == 2)
    {
        cout << "\nConversao cancelada.\n";
    }
    else
    {
        cout << "\nInsira um valor de menu valido.\n";
    }
    pausar();
    limparTela();
}

void converterEuro()
{
    float valor;
    int confirmar;
    float euro;
    float cotacaoEuro = 5.87;

    cout << "Digite em REAIS o valor que deseja converter: ";
    cin >> valor;

    if (valor <= 0)
    {
        cout << "Valor invalido!\n";
        pausar();
        limparTela();
        return;
    }

    cout << "\nDeseja realmente fazer essa conversao?\n";
    cout << "1 - SIM\n";
    cout << "2 - Nao\n";
    cout << "\n";
    cout << "Alternativa: ";
    cin >> confirmar;

    if (confirmar == 1)
    {
        euro = valor / cotacaoEuro;

        cout << fixed << setprecision(2);
        cout << "\nSeu valor em conversao fica em: " << valor << " BRL" << "\nEuro: " << euro << " EUR" << "\n"
             << endl;
    }
    else if (confirmar == 2)
    {
        cout << "\nConversao cancelada.\n";
    }
    else
    {
        cout << "\nInsira um valor de menu valido.\n";
    }
    pausar();
    limparTela();
}
void converterLibra()
{
    float valor;
    int confirmar;
    float libra;
    float cotacaoLibra = 6.85;

    cout << "Digite em REAIS o valor que deseja converter: ";
    cin >> valor;

    if (valor <= 0)
    {
        cout << "Valor invalido!";
        cout << "\n";
        pausar();
        limparTela();
        return;
    }

    cout << "\nDeseja realmente fazer essa conversao ?\n";
    cout << "\n1- SIM\n";
    cout << "\n2- Nao\n";
    cout << "\n";
    cout << "Alternativa: ";
    cin >> confirmar;

    if (confirmar == 1)
    {
        libra = valor / cotacaoLibra;
        cout << fixed << setprecision(2);
        cout << "\nSeu valor em conversao fica em: " << valor << " BRL" << "\nLibra: " << libra << " GBP" << "\n"
             << endl;
    }
    else if (confirmar == 2)
    {
        cout << "\nConversao cancelada.\n";
    }
    else
    {
        cout << "\nInsira um valor de menu valido.\n";
    }
    pausar();
    limparTela();
}

void converterIene()
{

    float valor;
    int confirmar;
    float iene;
    float cotacaoIene = 0.031;

    cout << "Digite em REAIS o valor que deseja converter: ";
    cin >> valor;

    if (valor <= 0)
    {
        cout << "Valor invalido!";
        cout << "\n";
        pausar();
        limparTela();
        return;
    }

    cout << "\nDeseja realmente fazer essa conversao ?\n";
    cout << "\n1- SIM\n";
    cout << "\n2- Nao\n";
    cout << "\n";
    cout << "Alternativa: ";
    cin >> confirmar;

    if (confirmar == 1)
    {
        iene = valor / cotacaoIene;
        cout << fixed << setprecision(2);
        cout << "\nSeu valor em conversao fica em: " << valor
             << " BRL\nIene: " << iene << " JPY\n";
    }
    else if (confirmar == 2)
    {
        cout << "\nConversao cancelada.\n";
    }
    else
    {
        cout << "\nInsira um valor de menu valido.\n";
    }
    pausar();
    limparTela();
}

void pausar()
{
    cout << "\nPressione Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void limparTela()
{
    cout << "\033[2J\033[H";
}
