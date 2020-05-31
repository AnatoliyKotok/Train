#pragma once
#include<iostream>
#include<string>
#include<list>
using namespace std;

class Car {
public:
	
	friend class Train;
	void SetPesenger(const size_t & passenger);
	
	
	
private:
	int count_passengers;
	
};
class Train
{

	Car* arr;
    int number;
	int count_Car;
	string type;
	size_t all_pasengers;
	string name;
public:
	Train() = default;
	Train(int numberTrain) :number(numberTrain) {

	}
	void addTrain();
	void print();
	void Set_count_Car(const size_t& count_Car);
	void Set_total_Pas(const size_t& total_count);
	void Set_name (const string& name);
	void GetMin();
	void GetMax();
	~Train() {
		
			delete[]arr;
			arr = nullptr;
	}
};

