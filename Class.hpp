/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Class.hpp
 * Author: Sala 6
 *
 * Created on 29 de agosto de 2018, 02:18 PM
 */


#ifndef CLASS_HPP
#define CLASS_HPP
#include<vector>
#include "Grade.hpp"


class Class {
public:
    Class();
    Class(std::string, std::string);
     void setStudent(std::string);
    std::string getStudent();
     void setMatter (std::string);
    std::string getMatter();
    bool addGrade (float, float);
      float calcDefinitive();
       std::vector <Grade> getGrades();
    
    virtual ~Class();
private:
     std::vector<Grade>grades;
    float calcWeighted();
  
    std::string student;
    std::string matter;

};

#endif /* CLASS_HPP */

