   #include <iostream>
using namespace std;

int main()
{
    int numbers[8] = { 2, 3, 4, 5, 6, 7, 8, 9};
    int index = 0, key = 6;

    /*cout << " Which index do you want to delete? ";
    cin >> index;*/
    for(int i = 0; i < 8; i++)
    {
        if(numbers[i] == key)
        {
            index = i;
        }
    }


    for(int i = index; i < 8; i++)
    {
        numbers[i] = numbers[i + 1];
    }

    cout << "The new array is :" << endl;
    for(int i = 0; i < 7; i++)
    {
        cout << numbers[i] << " ";
    }
}
