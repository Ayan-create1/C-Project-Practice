#include <iostream>
#include <string>
#include <cassert>
using namespace std;


int enumerate(const string a[], int n, string target);
int findMatch(const string a[], int n, string target);
bool findRun(const string a[], int n, string target, int& begin, int& end);
int findMin(const string a[], int n);
int moveToEnd(string a[], int n, int pos);
int moveToBeginning(string a[], int n, int pos);

int main(){
    string h[7] = { "moana", "tiana", "elsa", "ariel", "", "belle", "elsa" };
    assert(enumerate(h, 7, "elsa") == 2);
    assert(enumerate(h, 7, "") == 1);
    assert(enumerate(h, 7, "merida") == 0);
    assert(enumerate(h, 0, "elsa") == 0);
    assert(findMatch(h, 7, "elsa") == 2);
    assert(findMatch(h, 2, "elsa") == -1);
    int bg;
    int en;
    assert(findRun(h, 7, "ariel", bg, en) && bg == 3 && en == 3);

    string g[4] = { "moana", "tiana", "ariel", "belle" };
    assert(findMin(g, 4) == 2);
    assert(moveToEnd(g, 4, 1) == 1 && g[1] == "ariel" && g[3] == "tiana");

    string f[4] = { "belle", "ariel", "tiana", "elsa" };
    assert(moveToBeginning(f, 4, 2) == 2 && f[0] == "tiana" && f[2] == "ariel");

    cout << "All tests succeeded" << endl;
}


//works
int enumerate(const string a[], int n, string target){
    if (n < 0){
        return -1;
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        if (a[i] == target){
            count++;
        }
    }
    return count;
}

int findMatch(const string a[], int n, string target){
    if (n < 0){
        return -1;
    }
    for (int i = 0; i < n; i++){
        if (a[i] == target){
            return i;
        }
    }
    return -1;
}

bool findRun(const string a[], int n, string target, int& begin, int& end){
    int index;
    if (n < 0){
        return -1;
    }
    for (int i = 0; i < n; i++){
        if (a[i] ==  target){
            begin = i;
            int j = i+1;
            while (a[j] == target){
                j++;
            }
            end = j-1;
            return true;
        }
    }
    return false;

}

int findMin(const string a[], int n){
    if (n < 0){
        return -1;
    }
    string min = a[0];
    int pos = 0;
    for (int i = 0; i < n; i++){
        if(a[i] == min){
            continue;
        }
        if (min > a[i]){
            min = a[i];
            pos = i;
        }
    }
    return pos;
}

int moveToEnd(string a[], int n, int pos){
    if (n < 0){
        return -1;
    }
    string temp = " ";

    for(int i = pos; i < n-1; i++){
        temp = a[i+1];
        a[i+1] = a[i];
        a[i] = temp;
    }
    return pos;
}

int moveToBeginning(string a[], int n, int pos){
    if (n < 0){
        return -1;
    }
    string temp = "";
    for(int i = pos; i > 0; i--){
        temp = a[i-1];
        a[i-1] = a[i];
        a[i] = temp;
    }
    return pos;
}