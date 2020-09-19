#!/bin/bash

#Copyright 2020 Mingyang Tong
#All rights reserved

traverse_dir()
{
    filepath=$1
    
    for file in `ls -a $filepath`
    do
        if [ -d ${filepath}/$file ]
        then
            if [[ $file != '.' && $file != '..' && $file != '.git' ]]
            then
                traverse_dir ${filepath}/$file
            fi
        else
            check_suffix ${filepath}/$file
        fi
    done
}
 
 
check_suffix()
{
    fil=$1
    
    if [ "${fil##*.}"x = "cpp"x ];then
        echo $fil
        g++ $fil -o ${fil%.*}
        rm $fil
    fi    
}
traverse_dir /var/lib/jenkins/workspace/CPPREPO

#zip -r rel.zip ./*