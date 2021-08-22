#ifndef dateType_H
#define dateType_H 
  
class DateType
{
public:
    void setDate(int day, int month, int year);

    int getDay() const;

    int getMonth() const;

    int getYear() const;

    void printDate() const;

    DateType(int day = 1, int month = 1, int year = 1900);

private:
    int dDay;   //variable to store the day
    int dMonth; //variable to store the month
    int dYear;  //variable to store the year
};

#endif
