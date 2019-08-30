double avg(int kor, int eng, int math)
{
	int sum = kor + eng + math;
	return (double)sum / 3;
}

char score(double avg)
{
	if (avg > 90)
	{
		return 'A';
	}
	else if (avg > 80)
	{
		return 'B';
	}
	else if (avg > 70)
	{
		return 'C';
	}
	else if (avg > 60)
	{
		return 'D';
	}
	else
	{
		return 'F';
	}
}