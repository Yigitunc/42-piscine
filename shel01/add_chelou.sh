#!/bin/sh
NUM1=$(echo "$FT_NBR1" | tr \''\\"?!' '01234')
NUM2=$(echo "$FT_NBR2" | tr 'mrdoc' '01234')
echo "obase=13; ibase=5; $NUM1 + $NUM2" | bc | tr '0123456789ABC' 'gtaio luSnemf'