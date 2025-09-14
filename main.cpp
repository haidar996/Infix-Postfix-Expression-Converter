#include <iostream>
#include<string>
#include<stack>
using namespace std;
class inftopos
{
private:
    string  infx;
     string posx;

public:

    inftopos(string  n=" ")
    {
string *p=new string;
p=&n;
        infx=*p;
string *g=new string;
*g="";
        posx=*g;



    }

~inftopos(){
   string* p=new string;
    p=&infx;
    delete p;
    string* h=new string;
    h=&posx;
    delete  h;

}





    void getinfx(string n)
    {
        infx=n;

    }
    void showinfx()
    {
        cout<<infx;


    }
    void showposx()
    {
        cout<<posx;
    }
    bool precedence(char n1,char n2)
    {
        int a,b;
        if(n1=='+' || n1=='-' ) a=0;
        if(n1=='*' ||n1=='/' ) a=1;
        if(n2=='+' ||n2=='-' ) b=0;
        if(n2=='*' ||n2=='/' ) b=1;
        if(a>b) return 1;
        if(a<=b) return 0;
    }
    void converttoposx()
    {stack <char>s;


        int x;
        int u;

        for(int i=0; i<infx.size(); i++)
        {
            x=(int)infx[i];
char d=infx[i];
            if(x>50) {

                    posx+=d;





            }



            if(x==40){
        s.push(infx[i]);

            u=1;}

            if(x==41)
            {
                int y;
                for(int j=s.size()-1; (int)s.top()!=40; j--)
                {
                    posx+=s.top();
                    s.pop();





                }
s.pop();
                u=0;
            }
            if(x>41 && x<50)
            {
                if(u==1)
                {
                    for(int j=s.size()-1; s.top()!='('; j--)
                    {
                        if(this->precedence(infx[i],s.top())==0) {posx+=s.top();
                        s.pop();}


                    }
                }


            s.push(infx[i]);




            }


        }
        while(!s.empty())
            {
                posx+=s.top();
                s.pop();

            }

    }

};
int main()
{
    string n;
    getline(cin,n);

    inftopos s(n);

    s.converttoposx();
    s.showposx();



    return 0;
}
