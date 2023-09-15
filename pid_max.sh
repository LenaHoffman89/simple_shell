#!/bin/bash
pid_max=$(cat /proc/sys/kernel/pid_max)
echo "MAXIMUM PIP VALUE: $pid_max"
