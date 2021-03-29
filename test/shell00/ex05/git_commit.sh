#!/bin/zsh


msglog=`git log -5`

echo $msglog | grep 'commit' | sed 's/.* //'
