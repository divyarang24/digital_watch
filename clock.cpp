
#include <graphics.h>
#include <iostream>

using namespace std;

int main()
{
    int h, m, sec, i;

    cout << "enter the current time in the formate  hh mm sec" << endl;
    cin >> h >> m >> sec;
    while (true)
    {
        while (h < 24)
        {

            while (m < 60)
            {

                while (sec < 60)
                {
                    delay(1000);

                    system("cls");
                    for (i = 0; i < 10; i++)
                        cout << endl;
                    for (i = 0; i < 5; i++)
                        cout << "\t";
                    cout << "hh mm sec" << endl;
                    sec++;
                    for (i = 0; i < 5; i++)
                        cout << "\t";
                    cout << h << " : " << m << " : " << sec << endl;
                }
                m++;
                sec = 0;
            }
            h++;
            m = 0;
        }

        h = 0;
        m = 0;
        sec = 0;
    }
}
