#!/bin/bash

#FUNCNAME array to retrieve indexed element

backup() {

var=$1    
 

[ -f $var ] && { echo " $var is file"; exit 0; } 
[ -d $var ] && { echo "$var is directory"; exit 0;}
}
backup $1
