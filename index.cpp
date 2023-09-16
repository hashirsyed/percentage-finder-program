#include <iostream>
using namespace std;

void grade ( ){
}
float grade (int marks,int totalMarks){
    return (static_cast<float>(marks) / totalMarks * 100.0f);
}
char grade (float percentage){
    if (percentage >=90.0f){
    return 'A';
    }else if (percentage >=80.0f){
        return 'B';
    }else if (percentage >=70.0f){
        return 'C';
    }else if (percentage >=60.0f){
        return 'D';
    }else {
        return 'F';
    }

}

int main()
{
    float marks;
    float totalMarks;
    cout<<"Enter your Marks : "<<endl;
    cin >> marks;
    cout<<" / ";
    cin >> totalMarks;


    float percentage = grade(marks,totalMarks);
    char finalGrade = grade(percentage);

    cout<<"Your Percentage is "<<percentage<<"%"<<endl;
    cout<<"And Your Grade is "<<finalGrade;

    return 0;
}
