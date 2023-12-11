#!/bin/bash

EXE=a.out

a=`ls *.cpp`
echo $a
for f in $a ;do
   echo $f
done


exit

if [ $? -eq 0];then 
  ...

if [ -e $EXE ];then
   rm $EXE
fi
g++ Vector.cpp Matrix.cpp Solver.cpp main.cpp

if [ -e $EXE ];then
   ./$EXE
fi
