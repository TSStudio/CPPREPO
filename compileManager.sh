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
            if [[ $file != '.' && $file != '..' ]]
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
    file=$1
    
    if [ "${file##*.}"x = "cpp"x ];then
        echo $file
        g++ $file -o {$file%.*}
    fi    
}