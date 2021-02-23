#include <iostream>

using namespace std;

int main()

{

    int ns = 3725;

    /*  int h=ns/3600;

  ns=ns%3600;

  int m=ns/60;

  int s=ns%60;

  cout << h <<'\t' <<m <<'\t' << s << endl;

*/

    int h = 0, m = 0, s = 0, contadorSegundos = 0;

    while (contadorSegundos < ns)
    {

        if (s < 59)
        {
            s = s + 1;
        } else {

            m = m + 1;

            s = 0;

            if (m == 60)
            {
                h = h + 1;

                m = 0;
            }
        }

        contadorSegundos = contadorSegundos + 1;
    }

    cout << h << '\t' << m << '\t' << s << endl;

    return 0;
}