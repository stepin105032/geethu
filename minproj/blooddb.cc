#include<iostream>
#include "blooddb.h"
#include "Donors.h"
#include "Bloodgrp.h"
#include<list>
#include <bits/stdc++.h>
std::list<Bloodgrp>grps;
void blooddb::addDonor(std::string name,std::string grp,std::string phoneno,std::string mail,int no,int amount) {

    grps.push_back(Bloodgrp(name,grp,phoneno,mail,no,amount));
}
Bloodgrp* blooddb::Searchdonor(std::string grp){

     std::list<Bloodgrp> :: iterator iter;

    for(iter=grps.begin();iter!=grps.end();++iter)

        if(iter->get_Bloodgrp()==grp)

            return &(*iter);

    return NULL;
}
void blooddb::read_data( std::list<Bloodgrp>&grps)
{
     string S,A,B,C,D,E,F;
    fstream fin;
    fin.open("Blooddata.csv", ios::in);
    while( getline(fin, S))
    { cout<<S<<"\n";
        stringstream X(S);
        getline(X, A, ',');
        getline(X, B, ',');
        getline(X, C, ',');
        getline(X, D, ',');
        getline(X, E, ',');
        getline(X, F, ',');

        Bloodgrp temp(A,B,C,D,stoi(E),stoi(F));
        grps.push_back(temp);
    }
}


///


