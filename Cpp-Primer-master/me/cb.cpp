#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct CB
{
    string ma;
    string ten;
    float diem;
};

int main()
{
    ifstream myfile;
    myfile.open("cb.csv", ios::in);

    string line;

    vector<CB> cacCanBo;

    int lineCount = 0;
    // getline(myfile, line); // ignore header line

    CB cb;

    while (getline(myfile, line) && !line.empty())
    {
        stringstream mystream(line);

        string temp;
        getline(mystream, cb.ma, ',');
        getline(mystream, cb.ten, ',');
        string diem;
        getline(mystream, diem, ',');
        cb.diem = atof(diem.c_str());
        cacCanBo.push_back(cb);
        cout<<cb.ma<<","<<cb.ten<<","<<cb.diem<<endl;
        lineCount++;
    }
    cout<<lineCount<<endl;
    // cout<<cacCanBo<< endl;
}