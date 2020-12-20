#pragma once
class DateTime
{
	int m_year = 0;
	int m_month = 0;
	int m_day = 0;
	int m_hours = 0;
	int m_minutes = 0;

public:
	DateTime(int year, int month, int day, int hours, int minutes);
	void addMinutes(int m);
	void addHours(int h);
	void addMonth(int mon);
	void addYear(int y);

	int getYear() { return m_year; }
	void setYear(int year) { m_year = year; } 

	int getMonth() { return m_month; }
	void setMonth(int month) { m_month = month; } 

	int getDay() { return m_day; } 
	void setDay(int day) { m_day = day; } 

	int getHours() { return m_hours; } 
	void setHours(int hours) { m_hours = hours; } 

	int getMinutes() { return m_minutes; } 
	void setMinutes(int minutes) { m_minutes = minutes; } 

	// get /set
};



