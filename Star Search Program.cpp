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

bool isLower(double lower, double higher)
{
    return lower <= higher;
}

bool isHigher(double higher, double lower)
{
    return higher >= lower;
}

double calcAverage(double max, double min, double tot)
{
	return (tot - (max + min)) / 3;
}

int main()
{
	double minScore, maxScore, total;
	double score[5];
	double average;

    getScore(score[0]);
    minScore = score[0];
    maxScore = score[0];
	total = score[0];

	for (int x = 1; x <=4 ; x++)
	{
		getScore(score[x]);
		total += score[x];

		if (isLower(score[x], minScore))
		{
			minScore = score[x];
		}

		if (isHigher(score[x], maxScore))
		{
			maxScore = score[x];
		}
	}

	average = calcAverage(maxScore, minScore, total);

	cout << "The score is " << fixed << setprecision(1) << average << endl;
}

