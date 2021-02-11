// Copyright 2021 (c) Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in February 2021
// This program makes the 13th pin (LED) blink


void setup() {                
  // Sets up the pins
  pinMode(13, OUTPUT);     
}


void loop() {
  // Loops infinitely after setup
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
