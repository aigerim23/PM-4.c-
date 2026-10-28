#include <iostream> 
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

        int n, m;

    cout << "Введите день n и иесяц m";
    cin >> n >> m;

    if (n > 0 && n <= 30 && m>0 && m <=12 ) {

    

        cout <<"Предыдущий день" <<  n - 1 << "." << m << endl;
        cout << "Следующий день"  << n + 1 << "." << m;
    }
  


  

        return 0;
    


}