#include <iostream>
	using namespace std;

	int main()
	{
	    int len;

	    cout << "Enter a number: ";
	    cin >> len;

        
        int i = 0;
        while (i < len){
            int j = i+1;
            while (j < len){
                cout << " ";
                j++;
            }
            cout << "#" << endl;
            i++;
        }
        


        /*
        for (int i = 0; i < len; i++)
	    {
	        for (int j = i+1; j < len; j++)
	        {
	            cout << " ";
	        }
	        cout << "#" << endl;
	    }
        */
	}