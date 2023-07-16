#include<iostream>
using namespace std;
void input_student(int row,int col);

int main()
{       
    int row,col;
    cout << "Input number of students = ";
    cin >> row;

    input_student(row+1,3);
    return 0;
}

void input_student(int row,int col)
{
    string name_score[row][col+1];
    string subjects[4] = {"Name","Math","Khmer","Physic"};
    for(int a = 0;a<4;a++)
    {
        name_score[0][a] = subjects[a];
    }
    for(int i=1;i<row;i++)
    {
        cout << "Input Student's name: ";
        cin >> name_score[i][0];
        for(int j=1;j<=col;j++)
        {
            cout << "Input " <<subjects[j] <<" Score = ";
            cin >> name_score[i][j];
        }
        cout << "\n";
    }
    
    cout <<"===OUTPUT===\n";
    for(int k=0;k<=row;k++)
    {
        for (int l=0; l<=col; l++)
        {
            cout << name_score[k][l] <<"\t\t";
        }
        cout << "\n";
    }
}
