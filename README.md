# todo-script
Simple CLI program that calls `gerp` on a directory to search for the "TODO" phrase, a common one to put near items that still need to be visited in popular coding practice.

Initially a program I wrote to ensure I was done with my projects in a shell script, but felt the need to go to a CLI program. 
## Usage
```todo [target-directory]```

Install on system by download the project files, and copy the binary to your local bin file

```sudo cp ./todo /usr/local/bin```

## Notes

Calls `gerp` recursively, and will print line numbers
