#! /bin/bash

cat /etc/passwd | grep -v '#' | awk 'NR%2!=1'| cut -d ':' -f 1 | rev | sort -r | awk -v f1=$FT_LINE1 -v f2=$FT_LINE2 '(NR >= f1) && (NR <= f2)' | tr '\n' ',' | sed 's/,/, /g'  | rev | sed 's/ ,/./' | rev | tr -d '\n'  
