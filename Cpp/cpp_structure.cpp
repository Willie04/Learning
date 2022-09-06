#include <iostream>
#include <iostream>

using namespace std;

struct Student
{
    int id;
    char name[8];
    char sex;
    int age;
    char addr[30];
    float score;
}Amy,Willie;

Student newone_init(){
    Student init_people;
    init_people = {0,{'D','e','f','a','u','l','t'},'F','0'};
    return init_people;
};

void add_people(Student new_one){
    new_one.id = 1000 + new_one.id;
    for (int i=0 ;new_one.name[i]!= '\0';i++){
        new_one.name[i] = toupper(new_one.name[i]);
    } 
    printf("%s id is %d\n",new_one.name,new_one.id);
};

int main(){
    cout << " Traing my cpp for struct" << endl;
    // Student Amy,Willie;
    // Have two way to announcement.
    Student john = {291,{'J','o','h','n'}};
    cout << "John id is " << john.id << "\t name is " << john.name<< endl;
    for (int i=0 ;john.name[i]!= '\0';i++){
        john.name[i] = toupper(john.name[i]);
    }    
    printf("John name toupper() : %s \n",john.name);

    cout << "new one people Wesley "<<endl;
    Student Wesley = newone_init();
    cout << "Create new one people Wesley = newone_init() : \n";
    printf("%s id is %d\n",Wesley.name,Wesley.id);
    Wesley= {4,{'w','e','s','l','e','y'}};
    add_people(Wesley);

    system("pause");
}