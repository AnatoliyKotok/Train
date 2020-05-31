#include "Train.h"
#include<string>

using namespace std;

void Train::addTrain()
{

	cout << "Enter train name->";
	cin >> name;
	cout << "Enter train number->";
	cin >> number;
	cout << "Enter count car->";
	cin >> count_Car;
	arr = new Car[count_Car];
	for (int j = 0; j < count_Car; j++) {

		cout << "Enter count passengers in car number " << j + 1 << "->";
		cin >> arr[j].count_passengers;
		all_pasengers += arr[j].count_passengers;
	}
	
}



void Train::print()
{

	cout << "Train name->" << name << endl;;
	cout << "Train number->" << number << endl;
	for (int j = 0; j < count_Car; j++)
	{
		cout << "Count pasengers in car number " << j + 1 << "->" << arr[j].count_passengers << endl;
	}
	cout << "The total number if passenger on the trein number " << number << "=" << all_pasengers << endl;
	GetMax();
	GetMin();

}



void Train::Set_count_Car(const size_t& count_Car)
{
	this->count_Car = count_Car;
}

void Train::Set_total_Pas(const size_t& total_count)
{
	this->all_pasengers = total_count;
}

void Train::Set_name(const string& name)
{
	this->name = name;
}

void Train::GetMin()
{
	int min=0;
	for (int i = 0; i <count_Car;i++)
	{
		if (arr[min].count_passengers > arr[i].count_passengers) {
			min = i;
		}
	}
	cout << "Car with the last number of pasenger->" << min+1<< endl;
}

void Train::GetMax()
{
	int max=0;
	for (int i = 0; i < count_Car; i++)
	{
		if (arr[max].count_passengers < arr[i].count_passengers) {
			max = i;
		}
	}
	cout << "Car with the most number of pasenger->" << max+1 << endl;
}

void Car::SetPesenger(const size_t& passenger)
{
	this->count_passengers = passenger;
}



