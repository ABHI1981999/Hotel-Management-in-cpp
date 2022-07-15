#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int Qroom = 0, Qpasta = 0, Qnoodles = 0, Qchicken_roll = 0, Qburger = 0, Qshake = 0, Qwater = 0;
    int Qroom = 20, Qpasta = 20, Qnoodles = 20, Qchicken_roll = 20, Qburger = 20, Qshake = 20, Qwater = 20;
    int Sroom = 0, Spasta = 0, Snoodles = 0, Schicken_roll = 0, Sburger = 0, Sshake = 0, Swater = 0;
    int Proom = 1200, Ppasta = 150, Pnoodles = 120, Pchicken_roll = 180, Pburger = 250, Pshake = 160, Pwater = 50;
    int Troom = 0, Tpasta = 0, Tnoodles = 0, Tchicken_roll = 0, Tburger = 0, Tshake = 0, Twater = 0;
    int choice = 0, quant = 0, Total = 0, n = 1;
    // cout << "\nEnter the data : \n";
    // cout << "\n\tEnter the total number of rooms available : ";
    // cin >> Qroom;
    // cout << "\n\tEnter the total units of pasta available : ";
    // cin >> Qpasta;
    // cout << "\n\tEnter the total units of noodles available : ";
    // cin >> Qnoodles;
    // cout << "\n\tEnter the total units of chicken_roll available : ";
    // cin >> Qchicken_roll;
    // cout << "\n\tEnter the total units of burger available : ";
    // cin >> Qburger;
    // cout << "\n\tEnter the total nits of shake available : ";
    // cin >> Qshake;
    // cout << "\n\tEnter the total units of water available : ";
    // cin >> Qwater;

    while (n != 0)
    {
        cout << "\n\n\nPlease make order from the Menu-Card :" << endl;
        cout << "\n\tEnter 1 to book Room : ";
        cout << "\n\tEnter 2 to order Pasta : ";
        cout << "\n\tEnter 3 to order Noodles: ";
        cout << "\n\tEnter 4 to order chicken_roll : ";
        cout << "\n\tEnter 5 to order Burger : ";
        cout << "\n\tEnter 6 to order Shake : ";
        cout << "\n\tEnter 7 to order Water : ";
        cout << "\n\tEnter 8 to take the bill(Order Summary) : ";
        cout << "\n\tEnter 0 to confirm the order : ";

        cout << "\n\nEnter your choice from the above menu :";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n\tEnter the number of room/rooms want to book : ";
            cin >> quant;

            if (Qroom - Sroom >= quant)
            {
                Troom = Troom + quant * Proom;
                Sroom += quant;
            }
            else
            {
                cout << "\n\tThere are only " << Qroom - Sroom << " room/rooms are available in the Hotel";
                cout << "\n\n\t\t\tSorry for the Inconvenience !";
                cout << "\n\t\tEnter 1 to continue or Enter 0 to exit:";
                cin >> n;
            }
            break;
        case 2:
            cout << "\n\tEnter the number of unit of Pasta  want to order : ";
            cin >> quant;
            if (Qpasta - Spasta >= quant)
            {
                Tpasta = Tpasta + quant * Ppasta;
                Spasta += quant;
            }
            else
            {
                cout << "\n\tThere are only " << Qpasta - Spasta << " unit/units of pasta are available in the Hotel";
                cout << "\n\n\t\t\tSorry for the Inconvenience !";
                cout << "\n\t\tEnter 1 to continue or Enter 0 to exit:";
                cin >> n;
            }

            break;
        case 3:
            cout << "\n\tEnter the number of Noodles  want to order : ";
            cin >> quant;
            if (Qnoodles - Snoodles >= quant)
            {
                Tnoodles = Tnoodles + quant * Pnoodles;
                Snoodles += quant;
            }
            else
            {
                cout << "\n\tThere are only " << Qpasta - Spasta << " unit/units of pasta are available in the Hotel";
                cout << "\n\n\t\t\tSorry for the Inconvenience !";
                cout << "\n\t\tEnter 1 to continue or Enter 0 to exit:";
                cin >> n;
            }
            break;
        case 4:
            cout << "\n\tEnter the number of Chicken_roll  want to order : ";
            cin >> quant;
            if (Qchicken_roll - Schicken_roll >= quant)
            {
                Tchicken_roll = Tchicken_roll + quant * Pchicken_roll;
                Schicken_roll += quant;
            }
            else
            {
                cout << "\n\tThere are only " << Qchicken_roll - Schicken_roll << " unit/units of pasta are available in the Hotel";
                cout << "\n\n\t\t\tSorry for the Inconvenience !";
                cout << "\n\t\tEnter 1 to continue or Enter 0 to exit:";
                cin >> n;
            }
            break;
        case 5:
            cout << "\n\tEnter the number of  Burger want to order : ";
            cin >> quant;
            if (Qburger - Sburger >= quant)
            {
            Tburger = Tburger + quant * Pburger;
                Sburger += quant;
            }
            else
            {
                cout << "\n\tThere are only " <<Qburger - Sburger<< " unit/units of pasta are available in the Hotel";
                cout << "\n\n\t\t\tSorry for the Inconvenience !";
                cout << "\n\t\tEnter 1 to continue or Enter 0 to exit:";
                cin >> n;
            }
            break;
        case 6:
            cout << "\n\tEnter the number of Shake  want to order : ";
            cin >> quant;
            if (Qshake - Sshake >= quant)
            {
                Tshake = Tshake + quant * Pshake;
                Sshake += quant;
            }
            else
            {
                cout << "\n\tThere are only " <<Qshake - Sshake << " unit/units of pasta are available in the Hotel";
                cout << "\n\n\t\t\tSorry for the Inconvenience !";
                cout << "\n\t\tEnter 1 to continue or Enter 0 to exit:";
                cin >> n;
            }
            break;
        case 7:
            cout << "\n\tEnter the number of Water  want to order : ";
            cin >> quant;
            if (Qwater - Swater >= quant)
            {
                Twater = Twater + quant * Pwater;
                Swater += quant;
            }
            else
            {
                cout << "\n\tThere are only " <<Qwater - Swater << " unit/units of pasta are available in the Hotel";
                cout << "\n\n\t\t\tSorry for the Inconvenience !";
                cout << "\n\t\tEnter 1 to continue or Enter 0 to exit:";
                cin >> n;
            }
            
            break;
        case 8:
            Total = Troom + Tpasta + Tnoodles + Tchicken_roll + Tburger + Tshake + Twater;
            cout<<"\n\n************************* Your Bill *********************************";
            if (Sroom != 0)
            {
                cout << "\n\n\t\tTotal number of Room booked : " << Troom / Proom << "  costs Rs " << Troom;
            }
            if (Spasta != 0)
            {
                cout << "\n\t\tTotal number of Pasta ordered : " << Tpasta / Ppasta << "  costs Rs " << Tpasta;
            }
            if (Snoodles != 0)
            {
                cout << "\n\t\tTotal number of Noodles ordered : " << Tnoodles / Pnoodles << "  costs Rs " << Tnoodles;
            }
            if (Schicken_roll != 0)
            {
                cout << "\n\t\tTotal number of Chicken_roll ordered : " << Tchicken_roll / Pchicken_roll << "  costs Rs " << Tchicken_roll;
            }
            if (Sburger != 0)
            {
                cout << "\n\t\tTotal number of Burger ordered : " << Tburger / Pburger << "  costs Rs " << Tburger;
            }
            if (Sshake != 0)
            {
                cout << "\n\t\tTotal number of Shake ordered : " << Tshake / Pshake << "  costs Rs " << Tshake;
            }
            if (Swater != 0)
            {
                cout << "\n\t\tTotal number of Water ordered : " << Twater / Pwater << "  costs Rs " << Twater;
            }
            cout << "\n\n\t\tTotal Amount to be paid : " << Total << endl;
            cout<<"\n\n************************* ========= *********************************";
            cout << "\n\t\tEnter 1 to order more or Enter 0 to exit:";
                cin >> n;

            break;
        case 0:
            cout << "\n\n\t\t\tYour order is Processed" << endl;
            n = 0;
            break;
        default:
            cout << "\n\n\tEnter Valid Input from the Menu-Card!";
            break;
        }
    }
}