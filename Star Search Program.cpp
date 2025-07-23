// Star Search Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

double getScore(double &score)
{
    cout << "Enter your score \n";
    cin >> score;
    while (score < 0 || score > 10)
    {
        cout << "Invalid score. Value must be no lower and 0 and no higher than 10 \n";
        cin >> score;
    }
	
	return score;
}

bool isLower(double lower, double higher) // If the first value is lower than the second value, return true
{
    return lower <= higher;
}

bool isHigher(double higher, double lower) // If the first value is higher than the second value, return true.
{
    return higher >= lower;
}

double calcAverage(double max, double min, double tot) // Returns the value of the average of the 3 middle values
{
	return (tot - (max + min)) / 3;
}

int main()
{
	double minScore, maxScore, total;
	double score[5]; // This is an array. It can fit up to 5 values under one variable name, making the code simpler
	double average;

    getScore(score[0]);
    minScore = score[0];
    maxScore = score[0];
	total = score[0];

	for (int x = 1; x <=4 ; x++)
	{
		getScore(score[x]); // Gets the score of the first value input into the array
		total += score[x]; // Adds the value of of the previous score to the next score that was input

		if (isLower(score[x], minScore))
		{
			minScore = score[x]; // Sets the value of min score to an input value if said value is lower than the current min score value
		}

		if (isHigher(score[x], maxScore))
		{
			maxScore = score[x];  // Sets the value of max score to an input value if said value is higher than the current max score value
		}
	}

	average = calcAverage(maxScore, minScore, total);

	cout << "The score is " << fixed << setprecision(1) << average << endl;
}

