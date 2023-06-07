//Zadatak 1.
#include <iostream>
#include <stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int polje[10][5];
    int polje2[10];
    int unos_broja;
    for(int i=0; i<10; i++){
        cin>>unos_broja;
        polje2[i]=unos_broja;
    }

    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            polje[i][j] = polje2[i];
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<5; j++){
            cout<<"Polje[i][j]: "<<polje[i][j]<<endl;
        }
    }
}




//Zadatak 3.
#include <iostream>
#include <stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int polje[10][10];
    int zamjensko_polje[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            polje[i][j]=rand()%200-100;
            cout<<"Polje[i][j]: "<<polje[i][j]<<endl;
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(j%2==0)
            zamjensko_polje[i][j] = polje[i][j+1];
            else
            zamjensko_polje[i][j] = polje[i][j-1];
            }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
                cout<<"Polje s promjenjenim stupcima je: "<<"Polje[i][j]: "<<"["<<i<<"]"<<" ["<<j<<"] "<<zamjensko_polje[i][j]<<endl;
        }
    }
}



//Zadatak 4.
#include <iostream>
#include <stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int polje[10][8];
    int redak[10];
    int zbroj=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<8; j++){
                polje[i][j]=rand()%50-20;
                cout<<"polje: "<<i<<" "<<polje[i][j]<<endl;
        }
    }
    int brojac=0;
    for(int i=0; i<10;i++){
        for(int j=0; j<8; j++){
            if(i==brojac)
            zbroj+=polje[i][j];
            redak[i]=zbroj;


        }
        brojac+=1;
        cout<<redak[i]<<endl;

    }
    int unos_broja;
    cout<<"Unesi Broj: ";
    cin>>unos_broja;
    for(int i=0; i<10; i++){
        for(int j=0; j<8; j++){
            if(i==unos_broja)
            polje[i][j]-=1;
            cout<<"Polje nakon oduzimaja: "<<i<<" "<<polje[i][j]<<endl;
        }
    }

    }




