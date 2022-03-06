#!/bin/bash
checkRoot(){
if [ "$EUID" -ne 0 ]
  then echo "Not root"
  else
  "you are root"
  exit
fi }

checkRoot
