 #include <iostream>
using namespace std;
int main()
{

    int marks;
    cout<<"enter the marks\n ";
    cin>>marks;
    if (marks > 100 || marks < 0) cout << "invalid marks";
    if (marks <50) cout<<"fail";
    else if (marks >= 80) cout<<"Grade A";
    else if (marks >= 70) cout<<"Grade B";
    else if (marks >= 60) cout<<"Grade C";
    else if (marks >= 50) cout<<"Grade D";
       return 0;
}
