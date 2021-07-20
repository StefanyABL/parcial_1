/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Sala 6
 *
 * Created on 29 de agosto de 2018, 03:10 PM
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

#include "Class.hpp"

using namespace std;
Class*  cla = new Class;

/*s
 * 
 */
void addGrade(){
    float  percentage;
    float  grade;

    
    cout<<"Digite la nota del estudiante"<<endl;
    cin>>grade;
    cout<<"Digite el porcentaje de la nota"<<endl;
    cin>>percentage;
    cla->addGrade(grade, percentage);
}



void exit(){
    printf("salió del programa");
}

void mainMenu(){
    std::string options="[1]Agregar [2]Buscar [3]Listar [4]Eliminar [5]Salir";
    short int option;
    do{
        cout<<options;
        cin>>option;
        
        switch(option){
            case 1:
                addGrade();
            break;
            case 2:
               
            break;
           
            case 5:
               exit();
               break;
        }
    }
        while(option!=5);

    }
int main() {
   
    /*
    if(handling->addProduct("3515","Disco duro",200000,52)){
        cout<<"Se agregó correctamente"<<endl;
    }else{
        cout<<"No se agregó"<<endl;
    }
    cout<<handling->findProduct("3515")->toString();
*/  
    mainMenu();
 
    return 0;
}