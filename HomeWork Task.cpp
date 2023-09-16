#include <iostream>
using namespace std;

void grade ( ){
}
float grade (int marks,int totalMarks){
    return (static_cast<float>(marks) / (totalMarks)) * 100.0f;
}
char grade (float percentage){
    if (percentage >=90.00){
    return 'A';
    }else if (percentage >=80.00){
        return 'B';
    }else if (percentage >=70.00){
        return 'C';
    }else if (percentage >=60.00){
        return 'D';
    }else {
        return 'F';
    }

}

int main()
{
    int marks;
    int totalMarks;
    cout<<"Enter your Marks : "<<endl;
    cin >> marks;
    cout<<" / ";
    cin >> totalMarks;


    float percentage = grade(marks);
    char finalGrade = grade(percentage);

    cout<<"Your Percentage is "<<percentage<<"%"<<endl;
    cout<<"And Your Grade is "<<finalGrade;

    return 0;
}
