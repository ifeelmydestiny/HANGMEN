#include <iostream>
#include <cstdlib>
using namespace std;
string ques[10][10] = {{"AO", "OE", "YO", "OT", "DE", "W", "W", "NA", "HL", "ART"},
        {"B_BO_N", "M_OS_", "P_TH_N", "C_YO_E", "BA_G_R", "O_L", "HA_K", "PA_D_", "W_A_E", "P_R_O_"}};
string hang[6] = {
    ("                              +-----------+\n                              |           |\n                           ( *.* )        |\n                            / | \\\         |\n                           /  |  \\\        |\n                            / | \\\         |\n                           /     \\\        |"),
    "                         +---+\n                         |   |\n                             |\n                             |\n                             |",
    "                         +---+\n                         |   |\n                         O   |\n                             |\n                             |",
    "                         +---+\n                         |   |\n                         O   |\n                         |   |\n                             |",
    "                         +---+\n                         |   |\n                         O   |\n                        /|\\\  |\n                             |",
    "                         +---+\n                         |   |\n                         O   |\n                        /|\\\  |\n                        / \\\  |"
};

int main(){
    cout<<"      Welcome to HANGMEN         "<<endl;
    cout<<hang[0]<<endl;
    bool gameison;
    int z{1};
    char choice1;
    cout<<"Dare to ENTER :";
    cin>>choice1;
    if(choice1 == 'y'||choice1 == 'Y')
    {
        gameison = true;
    }
    else{gameison = false;}
    while (gameison == true)
    {
        string ans;
        const int y = rand() % 10;
        cout<<ques[1][y]<<" :";cin>>ans;
        if(ques[0][y]==ans)
        {
            gameison = true;
        }
        else
        {
            cout<<hang[z]<<endl;
            z++;
            if(z>5)
            {
                for(int i{0}; i<20;i++)
                {
                    cout<<"RUN FOREST RUNNN!!!"<<endl;
                }
                cout<<hang[0]<<endl;
                cout<<"\n\n                               YOU    DIED            "<<endl;
                gameison = false;
            }
        }
    }

    return 0;
}
