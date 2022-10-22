#pragma once
#include "helper.h"
void RobotLine::radionica() {
  static int broj = 0;
  if (setup()) {

    armOpen();
  }

  char simbol[10 + sizeof(char)];

  // ZADATAK: napravite if naredbu da se robot zaustavi nakon što se vrati na početak
  if (rightFront()<leftFront()){
    if (rightFront() < 120) {
      if (rightFront()>100)
        go(80,20);
       else
        go(20,80);
    }
  }
  if (leftFront()<120) {
    if (leftFront() >100)
      go(20,80);
     else
      go(80,20);
  }
  else{
    go(50,50);
  }
    if (broj==0 && front() < 120){
    go(90, -90);
    delayMs(500);
    broj++;
  }
    if (broj==1 && front() < 120){
    go(-90, 90);
    delayMs(500);
    broj++;
  }
    if (broj==2 && front() < 120){
    go(-90, 90);
    delayMs(500);
    broj++;
  }
    if (broj==3 && front() < 120){
    go(90, -90);
    delayMs(500);
    broj++;
  }
    if (broj==4 && front() < 120){
    go(90, -90);
    delayMs(500);
    broj++;
  }
  if (broj==5 && front() < 120){
    go(-90, -90);
    delayMs(500);
    go(90,-90);
    delayMs(500);
    broj++;
  }
    if (broj==6 && front() < 120){
    go(90, -90);
    delayMs(500);
    broj++;
  }
    if (broj==7 && front() > 300 && leftFront() > 300){
    go(-20,80);
    delayMs(2000);
    broj++;
    }
    stop();
    end();
  if (rightFront() < leftFront()) {
    if (rightFront() > 120)
      go(90, 30);
    else
      go(30, 90);
  }
  else {
    if (leftFront() > 120) {
      go(30, 90);
    }
    else {
      go(90, 30);
    }

  }
  sprintf(simbol, "%d", broj);
  display(simbol);
}

