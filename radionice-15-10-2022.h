#pragma once
#include "helper.h"
void RobotLine::radionica() {
  static int broj = 0;
  if (setup()) {

    armOpen();
  }

  char simbol[10 + sizeof(char)];

  // ZADATAK: napravite if naredbu da se robot zaustavi nakon što se vrati na početak
  if (broj >= 9){
    stop(), end();
    delayMs(500);
  }
  if (broj==2 and front() < 120){
    go(-90, 90);
    delayMs(500);
  }
  if (broj==2 and front() < 120){
    go(-50, -50);
    delayMs(500);
    delayMs(500);
    go(90,-90);
    delayMs(500);
  }
  if (front() < 120) {
    go(-90, 90);
    delayMs(500);
    broj++;
  }
  if (rightFront() < leftFront()) {
    if (rightFront() > 120)
      go(80, 20);
    else
      go(20, 80);
  }
  else {
    if (leftFront() > 120) {
      go(20, 80);
    }
    else {
      go(80, 20);
    }

  }
  sprintf(simbol, "%d", broj);
  display(simbol);
}
