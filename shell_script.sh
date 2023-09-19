#!/bin/bash

#Custom shell promt
PS1=":)"

#Main loop for the shell
while true; do
	#Read user input
	read -p "$PS1" user_input

	#Check if the user input is empty
	if [ -z "$user_input" ]; then
		continue
	fi

	#Split the user input into command and arguments
	command=$(echo "$user_input" | awk '{print $1}')
	arguments="$(user_input#"$command")"

	#Check if the command exists in the PATH
	if command -v "$command" >/dev/null 2>&1; then
		#Execute the command
		eval "$user_input"
	else
		echo "Command not found: $command"
	fi
done
