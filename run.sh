#!/bin/bash

#Valores de n 
n=(50 100 200 400 800 1000 2000 4000 8000 16000 32000 64000 128000) 
out=$1

function exec {
for j in ${n[@]}; 
	do 
		for x in {1..10}
		do
			./$out $1 $2 $3 $4 $5 $6 $7 $j
		done
	done
}


for g in {1..3};
	do 
		exec 1  2 0 0 1 0 $g
		exec 2  2 0 0 1 0 $g
		exec 4  2 0 0 1 0 $g
		exec 8  2 0 0 1 0 $g
		exec 16 4 0 0 1 0 $g
		exec 2  1 1 0 1 0 $g
		exec 1  1 1 0 1 0 $g
		exec 1  1 1 0 1 2 $g
		exec 1  4 0 1 2 0 $g
		exec 8  4 0 8 2 0 $g
	done
