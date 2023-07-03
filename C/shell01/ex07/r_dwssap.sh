#!/bin/sh


# cat password, remove comments (#), print every line starting from second line, extracts the password by limiter, reverses login (username), reverse sort,  prints login between 7-15 inclusive, replaces newlines with comma and space, replace trailing comma with period

# export FT_LINE1=7
# export FT_LINE2=15

cat /etc/passwd | sed '/^#/d' | sed -n '0~2p' | cut -d ':' -f 1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | tr '\n' ', ' | sed 's/,$/./' | sed 's/,/, /g'

