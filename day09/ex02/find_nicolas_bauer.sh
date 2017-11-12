cat ${1} | grep -i "Nicolas\tBauer" | grep -o -E '[0-9]{6}-[0-9]{4}'
cat ${1} | grep "NiCoLaS\tbauer" | grep -o -E '[0-9]{5}'
cat ${1} | grep -i "Bauer\tNicolas" | grep -o -E '[0-9]{3}-[0-9]{6}-[0-9]{1}'
