/*************************************************************************
	> File Name: main.cpp
	> Author:
	> Mail:
	> Created Time: Sat Mar 26 11:17:53 2016
 ************************************************************************/

#include<iostream>
#include"vtkRenderWindow.h"
#include"vtkSmartPointer.h"
using namespace std;
int main(){
    vtkSmartPointer<vtkRenderWindow> renWin=vtkSmartPointer<vtkRenderWindow>::New();
    renWin->Render();
    cin.get();
    return 0;
}

