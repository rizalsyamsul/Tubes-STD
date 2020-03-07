#include "tubes.h"

//Admin
void printparent(Listparent &LP)
{
    if(first(LP) == NULL){
        cout<<"Data Tempat : ";
        while (first(LP) != next(last(LP))){
            cout<<info(first(LP))<<" ";
            first(LP) = next(first(LP));
        }cout<<endl;
    }
}
void insertlast(Listparent LP, adrparent P){

}
void Delete(Listparent LP, adrparent &P)
{
    string id;
    cout<<"Masukan Data Yang Akan Dihapus : ";cin>>id;
    P = searchdata(id,LP);
    if (first(LP) != NULL){
        P = First(LP);
        first(LP) = next(P);
        prev(P) = NULL;
    }else if (first(LP != NULL){
        P = Last(LP);
        last(LP) = Prev(P);
        next(last(LP)) = NULL);
    }else if (first(LP) != NULL){
        address prec;
        P = next(prec);
        next(prec) = next(P);
        prev(next(prec)) = prec;
    }
}
void update(Listparent LP, adrparent P)
{
    string id,New_id,New_pass;

    cout<<"Masukan Data Yang Ingin Di Update : ";cin>>id;
    P = searchdata(id,LP);
    cout<<"Masukan ID baru : ";cin>>New_id;
    cout<<"Masukan Password Baru : ";cin>>New_pass;
    infoid(P) = New_id;
    infopas(P) = New_pas;
}
adrparent searchdata(string info, Listparent LP)
{
   address P = first(L);
   if (first(LP) == NULL){
        while (((info(P)) != info && next(P) != first(LP))){
            P = next(P);
        }
        if (info(P) != info){
            P = NULL;
        }
   }
   return P;
}

//User
void insertfirst(Listparent LP, adrparent P){

}
int berkunjung(adrparent P){

}
void printkunjungan(Listparent &LP);
// update pake yang admin

//lain-lain
void createListparent(Listparent &LP){
    first(LP)= NULL;
    last(LP) = NULL;
}
void createListrelasi(Listrelasi &LR){
    firstrelasi(LR) = NULL;
}
void createNewUser(string ID, string password, adrparent &P){
    P = new Parent;
    infoid(P) = ID;
    infopas(P) = password;
    next(P) = NULL;
    prev(P) = NULL;
}
