#include <iostream> 
using namespace std;

int mediapond(int nota1,int nota2,int nota3){
    return ((nota1*3)+(nota2*4)+(nota3*5))/(3+4+5);
}

int main(){
    int n1, n2, n3;
    int media;
    char aluno [100];

    cout<<"qual o nome do aluno? "<<endl;
    cin>>aluno;

    cout<<"Primeira Nota: "<<endl;
    cin>>n1;

    cout<<"Segunda Nota: "<<endl;
    cin>>n2;

    cout<<"terceira nota: "<<endl;
    cin>>n3;

    media = mediapond(n1, n2, n3);
    cout<<"o aluno "<< aluno <<" obteve a media: "<<media<<endl;

}