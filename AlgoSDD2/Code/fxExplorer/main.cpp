#include <iostream>

using namespace std;

int Explorer(int* T, int g, int d){
    int i = g+1;
    int j = d;

    while(i < j){
        do{
            i++;
        }while(T[i] < T[g]);

        do{
            j--;
        }while(T[j] >= T[g]);

        if(i < j){
            int tmp = T[i];
            T[i] = T[j];
            T[j] = tmp;
        }
    }
    int tmp = T[g];
    T[g] = T[j];
    T[j] = tmp;

    return j;
}

void ChoixPivot(int* T, int g, int d){
    int m = (g+d)/2;
    int petit, grand, moyen = 0;

    if(T[g] <= T[m]){
        petit = g;
        grand = m;
    } else {
        petit = m;
        grand = g;
    }

    if(T[d] < T[petit]){
        moyen = petit;
        petit = d;
    } else {
        if(T[d] > T[grand]){
            moyen = grand;
            grand = d;
        } else {
            moyen = d;
        }
    }

    int tmp = T[moyen];
    T[moyen] = T[g];
    T[g] = tmp;
}

void Decoupage(int* tab, int g, int d){
    int blocSize = 9;
    if((d - g) > blocSize){
        ChoixPivot(tab, g, d);
        int place = Explorer(tab, g, d);
        Decoupage(tab, g, place - 1);
        Decoupage(tab, place + 1, d);
    }
}

int main()
{

    int tab[] = {48, 28, 5, 25, 20, 35, 60, 75, 12, 42, 23};

    Decoupage(tab, 0, 11);



    for(int i = 0; i<11; i++){
        cout << tab[i] << " ";
    }

    return 0;
}
