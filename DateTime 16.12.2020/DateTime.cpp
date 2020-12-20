#include "DateTime.h"

DateTime::DateTime(int year, int month, int day, int hours, int minutes)
{
	m_year = year;
	m_month = month;
	m_day = day;
	m_hours = hours;
	m_minutes = minutes;
}

void DateTime::addMinutes(int m)
{
	if (m <= 0)
	{
		m_minutes = 0 + m_minutes;
	}
	else 
	{
		m_minutes = m + m_minutes;
	}
}

void DateTime::addHours(int h)
{
	if (h <= 0)
	{
		m_hours = 0 + m_hours;
	}
	else
	{
		m_hours = h + m_hours;
	}
}

void DateTime::addMonth(int mon)
{
	if (mon <= 0)
	{
		m_month = 0 + m_month;
	}
	else
	{
		m_month = mon + m_month;
	}
}

void DateTime::addYear(int y)
{
	if (y <= 0)
	{
		m_year = 0 + m_year;
	}
	else
	{
		m_year = y + m_year;
	}
}










