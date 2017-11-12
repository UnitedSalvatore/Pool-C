#!/bin/sh
ldapsearch -Q sn="*bon*" | grep "sn:" | sed "s/sn: //g" | wc -l | tr -d " "
