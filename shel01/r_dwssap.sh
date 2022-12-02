#!/bin/sh
cat /etc/passwd | grep -v ^\s*\# | sed -n 'n;p' | cut -d : -f 1 | rev | sort -r | tail -n +$FT_LINE1 | head -n $((1+FT_LINE2-FT_LINE1)) | sed -z 's/\n/, /g' | sed 's/, $/./'