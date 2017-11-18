#!/bin/sh
ifconfig -a | grep "ether"| sed 's/ether //' | cut -c 2- | cut -c -17
