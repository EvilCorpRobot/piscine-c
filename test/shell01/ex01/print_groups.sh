#!/bin/zsh

FT_USER=tconte

id -G -n $FT_USER | sed s/' '/','/g | cat -e
