#ifndef COURSE_H
#define COURSE_H

#include <QString>

class Course
{
public:
    Course(QString,QString,QString,QString);
private:
    QString courseName;
    QString semester;
    QString score;
    QString credit;
};

#endif // COURSE_H
