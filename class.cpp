#include "class.h"

    clas::clas(){
     ScrieVector();
    }

    void clas::AfisazaVector(){
       for(int i=0;i<n;i++)
          cout<<v[i]<<" ";
    }

    void clas::AfisazaNumar(int in){
         cout<<in<<endl;
    }

    void clas::AfisazaScris(string s){
        cout<<s<<endl;
    }

    void clas::SorteazaVector(string cres/*1 pt crescator 0 pt descrescator*/){
     bool crescator;
     int aux;
      if(cres.find("crescator") != string::npos){
        crescator = true;
        cout<<"sortare crescatoare"<<endl;
      }else if(cres.find("descrescator") != string::npos){
        crescator = false;
        cout<<"sortare descrescatoare"<<endl;
      }else{
       cout<<cres <<" nu este scris corect (crescator/descrescator)!!vectorul va fii sorteat crescator";
       crescator = true;
      }

     for(int i=0;i<(n-1);i++){
        for(int j=(i+1);j<n;j++){
           if(v[i]<v[j]){
              if(crescator){
               aux=v[i];
               v[i]=v[j];
               v[j]=aux;
              }
           }
         }
     }
    }

    void clas::ScrieVector(){
        cout<<"cate elemente sa aiva vectorul=";
       cin>>n;
       for(int i=0;i<n;i++){
        cout<<"ce valoare sa aiva elementul de pe pozitia "<<(i+1)<<" =";
        cin>>v[i];
       }
    }

    void clas::AfisazaNumereDinVectorDivizibileCu(){
        int d;
        cout<<"cu cat sa fie divizibile numerele din vector=";
        cin>>d;
       for(int i =0;i<n;i++){
        if(v[i]%d==0){
            cout<<v[i]<<"este divizibil cu"<<d<<endl;
        }
       }
    }

    void clas::AfisazaCiteNumereDinVectorSuntDivizibileCu(){
        int d,nr=0;
        cout<<"cu cat sa fie divizibile numerele din vector=";
        cin>>d;
       for(int i =0;i<n;i++){
        if(v[i]%d==0){
            nr++;
        }
       }
       cout<<nr<<" atitea numere sunt divizile cu "<<d<<" din vector"<<endl;
    }

    void clas::AfisazaNumarPePozitiaNDinVector(){
    int m;
    cout<<"afisaza numarul de pe pozitia... din vector";
    cin>>m;
    cout<<"numarul de pe pozitia "<<m<<" din vector= "<<v[m-1]<<endl;
    }

    void clas::AfisazaMaiMulteNumerePePozitiiDiferiteDinVector(){
    int m,mn;
    cout<<"cate elemente din vector doriti sa vedeti"<<endl;
    cin>>mn;
    for(int i =1;i<=mn;i++){
    cout<<"afisaza numarul de pe pozitia... din vector";
    cin>>m;
    cout<<"numarul de pe pozitia "<<m<<" din vector= "<<v[m-1]<<endl;
    }
    }

    void clas::AfiseazaNumarPePozitieFixaDinVector(int poz){
    cout<<"numarul de pe pozitia "<<poz<<" din vector= "<<v[poz-1]<<endl;
    }

    void clas::SumaDeNNumereCuAfisare(){
        int m,nm,sum=0;
        cout<<"cate numere se aduna=";
        cin>>nm;
        for(int i =1;i<=nm;i++){
            cout<<"al"<<i<<"este egal=";
            cin>>n;
            sum+=n;
        }
        cout<<"suma lor este egala cu"<<sum;
    }

    void clas::SumaDeNumereDinVectorCuAfisare(){
        int sum=0;
        for(int i = 0;i<n;i++){
            cout<<v[i]<<"+";
            sum+=v[i];
        }
        cout<<"= "<<sum<<endl;v
    }

    void clas::SumaDeNumereDinVectorDivizibileCuAfisare(){
        int sum=0;
        int d;
        cout<<"cu cat sa fie divizibile numerele din vector=";
        cin>>d;
        for(int i = 0;i<n;i++){
            if(v[i]%d==0){
              cout<<v[i]<<"+";
              sum+=v[i];
            }
        }
        cout<<"= "<<sum<<endl;
    }

    void clas::LinieNoua(){
    cout<<endl;
    }


