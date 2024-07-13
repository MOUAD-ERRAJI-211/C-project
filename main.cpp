#include <iostream>
#include<cstring>

using namespace std;

class chaine{
private :
    int l;
    char *ptr;
public :
    chaine();
    chaine(char *);
    chaine(chaine&);
    void afficher();
    void operator=(chaine&);
    int operator==(chaine&);
    chaine operator+(chaine&);
    char operator[](int);

};

chaine::chaine(){
this->l=1;
this->ptr=new char[l];
*ptr='0/';
}

chaine::chaine(char *C){
this->l=strlen(C);
this->ptr=new char[l+1];
int i;
for(i=0;i<l;i++)ptr[i]=C[i];
*ptr='0/';}

chaine::chaine(chaine &C){
this->l=C.l;
this->ptr=new char[l+1];
for(i=0;i<l;i++)ptr[i]=C.ptr[i];
*ptr='0/';
}

void chaine::afficher(){
cout<<ptr<<endl;
}

void chaine::operator=(chaine &C){
delete  [] this->ptr;
this->l=C.l;
this->ptr=new char[l];
strcpy(this->ptr,C.ptr);
}

int chaine::operator==(chaine &C){
return strcmp(this->ptr,C.ptr)==0;
}

char chaine::operator[](int i){
return this->ptr[i];
}

chaine chaine::operator+(chaine&C){
chaine Q;
Q.l=strlen(this->ptr)+strlen(C.ptr);
Q.ptr=new char[Q.l];
Q.ptr=strcat(this->ptr,C.ptr);
return Q;
}




int main()
{
    chaine T("sama");
    chaine A("sama");
    chaine B;
    cout<<A[3];

    return 0;
}
