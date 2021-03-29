#!/bin/zsh

ifconfig | grep 'ether' | cut -c 8-24
