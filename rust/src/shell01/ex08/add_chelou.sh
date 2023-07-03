#!/bin/sh

# export FT_NBR1="\\'?\"\\\"'\\"
# export FT_NBR2="rcrdmddd"

# export FT_NBR1="\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\""
# export FT_NBR2="dcrcmcmooododmrrrmorcmcrmomo"


# use tr to convert characters in respective bases
# mrdoc will map to 01234
# '\"?! to 01234
# pass translated expression as args to output base 13 and input base as 5, performing the calculation with bc
# tr 0..C to the corresponding characters in gtaio..mf base
echo "$FT_NBR1 + $FT_NBR2" | tr "mrdoc" "01234" | tr "'" "0" | tr '\\"?!' '1234' | xargs echo "obase=13;ibase=5;" | bc | tr "0123456789ABC" "gtaio luSnemf"
