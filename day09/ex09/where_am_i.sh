#!/bin/sh
if test -z "arp -a"
then 
	echo "Je suis perdu!"
else
	arp -a | cut -d ' ' -f2 | tr -d "(" | tr -d ")"
fi
