#include <iostream>
#include <string>

using namespace std;
class Hotel {
public:
    int id;
    string name; 
    string type;
    string rating;
    string location;
    int establish_year;
    int staff_quantity;
    int room_quantity;
    static char Location[];

public:
    void setData() 
	{
    cout<<"Enter Id = ";
	cin>>id;
	cout<<"Enter Name = ";
	cin>>name;
	cout<<"Enter Type = ";
	cin>>type;
	cout<<"Enter Rating = ";
	cin>>rating;
	cout<<"Enter Location = ";
	cin>>location;
	cout<<"Enter Establish_year = ";
	cin>>establish_year;
	cout<<"Enter Staff_quantity = ";
	cin>>staff_quantity;
    }
void getData()
{
	cout<<"Id = "<<id<<endl
	    <<"Name = "<<name<<endl
	    <<"Type = "<<type<<endl
	    <<"Rating = "<<rating<<endl
	    <<"Location = "<<location<<endl
	    <<"Establish_year = "<<establish_year<<endl
	    <<"Staff_quantity = "<<staff_quantity<<endl;
}

static void data()
{
	cout << "Location: " << Location << endl;
}
};
int main() 
{
    int N;
    cout << "Enter the number of hotels: ";
    cin >> N;

    Hotel hotels[N];

    for (int i=0;i<N;++i) 
	{
        cout << "\nEnter details for Hotel "<<i+1<<":"<<endl;
        hotels[i].setData();
    }

    cout << "\nHotel Information:\n" << endl;
    for (int i = 0; i < N; ++i) 
	{
        cout << "Details of Hotel " << i +1<<":"<<endl;
        hotels[i].getData();
        cout << endl;
    }

    return 0;
}
