
#include<iostream>

#include<string>

#include<fstream>

#include<iomanip>



using namespace std;



int main()

{

	int i = 0;

	double total = 0.0;

	string fname[5] = { "" };

	double votes[5] = { 0.00 };

	double percent[5] = { 0.00 };

	double iwinner = double();

	double winningValue = double();

	cout << fixed << setprecision(2);



	ifstream in;

	in.open("votes.txt");



	//cout << "Enter the Last Names of the candidates: ";













	while (!in.eof())

	{

		in >> fname[i] >> votes[i];

		total = total + votes[i];

		++i;

	}







	cout << "Candidate:       " << "Votes Recieved:       "<< "% of Total Votes: \n" << endl;



	for (i = 1; i < 5; i++)

	{

		percent[i] = ((votes[i] / total) * 100);



		cout << setfill(' ') << setw(20) << left << fname[i];

		cout << setfill(' ') << setw(24) << static_cast <int> (votes[i]);

		cout << setfill(' ') << setw(20) << percent[i] << endl << endl;

	}



	cout << "Total Amount of Votes: " << static_cast<int>(total) << endl << endl;





	// winningValue is a maximum value index //



	winningValue = 0;

	for (int i = 0; i < 5; i++)

	{

		if (winningValue < percent[i])

		{

			winningValue = percent[i];

			iwinner = percent[i];

		}

	}



	cout << "The Winner of the Election is: " << iwinner <<endl; // you need to get the name of the candicate to show not the % //



	return 0;

}