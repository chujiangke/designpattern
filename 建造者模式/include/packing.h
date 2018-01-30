/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Packing.h
 * Author: leixiao
 *
 * Created on January 30, 2018, 3:36 PM
 */

#ifndef PACKING_H
#define PACKING_H

#ifdef __cplusplus
extern "C" {
#endif

#include <string>
#include <iostream>
using namespace std;

class Packing
{
public:
    string virtual pack() = 0;
};


#ifdef __cplusplus
}
#endif

#endif /* PACKING_H */

