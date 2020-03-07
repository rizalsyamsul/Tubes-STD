// Syamsul Rizal - 1301184064
// Ridhwan Rifky H - 1301184284
// Tubes I Was Here Skema C
#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#define first(L) L.first
#define last(L) L.last
#define firstrelasi(L) L.firstrelasi
#define info(P) P->info
#define info1(P) P->info1
#define info2(P) P->info2
#define next(P) P->next
#define prev(P) P->prev
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

typedef struct Parent *adrparent
typedef struct Relasi *adrrelasi
struct Parent{
    string info;

    adrparent prev;
    adrparent next;
};
struct Relasi{
    adrparent info1;
    adrparent info2;
    int infopen;
    adrrelasi next;
} ;
struct Listparent{
    adrparent first;
    adrparent last;
};

struct Listrelasi{
    adrrelasi firstrelasi;
};
//Guest
void printtop10(Listrelasi &R);
void printrelasi(Listrelasi &R);

//Admin
void printparent(Listparent &LP);
void insertlast(Listparent LP, adrparent P);
void Delete(Listparent LP, adrparent &P);
void update(Listparent LP, adrparent P);
adrparent searchdata(Listparent LP);

//User
void insertfirst(Listparent LP, adrparent P);
int berkunjung(adrparent P);
void printkunjungan(Listparent &LP);
// update pake yang admin

//lain-lain
void createListparent(Listparent &LP);
void createListrelasi(Listrelasi &LR);
void createNewUser(string ID, string password, )


#endif // TUBES_H_INCLUDED
