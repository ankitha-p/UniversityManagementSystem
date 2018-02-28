#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

class college
{
    char clg_name[5];
    int ranks[5];

public:
    void putdata()
    {

    }
};

int main()
{
    college clg_obj[5];
    fstream inoutfile;
        inoutfile.open("COLLEGE.DAT",ios::ate|ios::in|ios::out|ios::binary);
        for(int i=0;i<5;i++)
            while(inoutfile.read((char *) & clg_obj[i],sizeof clg_obj[i]))
            {
                clg_obj.putdata();
            }
        inoutfile.clear();
        inoutfile.seekg(0);
        cout<<endl;
        while(inoutfile.read((char *) & clg_obj,sizeof clg_obj))
            clg_obj.putdata();
        inoutfile.close();
    return 0;
}
