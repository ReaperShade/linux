1. FILE PERMISSIONS

 
 
             Read  = r = 4
             Write = w = 2
             Execution = x = 1
 
 
 
             **USERS**
 
             User = u
             group = g
             another = o
 
 
 
             PERMISSION      EXAMPLE.
 
             U   G   O
             rwx rwx rwx      chmod 777 filename
             rwx rwx r-x      chmod 775 filename
             rwx r-x r-x      chmod 755 filename
             rw- rw- r--      chmod 664 filename
             rw- r-- r--      chmod 644 filenames
 
 
 
             The first letter indicates the type of file:
 
                 - - means its a normal file
                 - d means its a directory
                 - l means its a symbolic link
                 - p means named pipeline
                 - s means socket
                 - b means a block device
                 - c means charachter device
 


 
             Then you have 3 sets of values:
 
                 - The first set represents the permissions of the owner of the file
                 - The second set represents the permissions of the members of the group the file is associated to
                 - The third set represents the permissions of the everyone else
 
 


 
             - chmod can be used in 2 ways. The first is using symbolic arguments, the second is using numeric arguments. Lets start with symbols first, which is more intuitive.
 
             You type chmod followed by a space, and a letter:
 
                 a stands for all
                 u stands for user
                 g stands for group
                 o stands for others
 
 

 
             We use them in pairs of 3, to set the permissions of all the 3 groups altogether:
 
             - chmod 777 filename
             - chmod 755 filename
             - chmod 644 filename
 
 










2. CHMOD

 
 
         //We can modify permissions using the chmod command, permission group references (u - owner, g - Group, o - others, a - All users), and either a [+] or a [-] to add remove the designated permissions. In the following example, a user creates a new shell script owned by that user, not executable, and set with read/write permissions for all users.
 
 
             - chmod [OPTIONS] PERMISSIONS FILE
 
 
 
             +------------------------------------ 1. File Type
 
 
 
 
             - rwx rw- r--   1 root root 1641 May  4 23:42 /etc/passwd
             - --- --- ---   |  |    |    |   |__________|
             |  |   |   |    |  |    |    |        |_ Date
             |  |   |   |    |  |    |    |__________ File Size
             |  |   |   |    |  |    |_______________ Group
             |  |   |   |    |  |____________________ User
             |  |   |   |    |_______________________ Number of hard links
             |  |   |   |_ Permission of others (read)
             |  |   |_____ Permissions of the group (read, write)
             |  |_________ Permissions of the owner (read, write, execute)
             |____________ File type (- = File, d = Directory, l = Link, ... )
 
 
 
             - chmod u=rwx,g=rx,o=r myfile
             - chmod 754 myfile
             - chmod a+r myfile
 
 


             Chmod options
 
             -c, --changes 	                 //Like --verbose, but gives verbose output only when a change is actually made.
             -f, --silent, --quiet 	         //Quiet mode; suppress most error messages.
             -v, --verbose                   //Verbose mode; output a diagnostic message for every file processed.
             --no-preserve-root 	         //Do not treat  (the root directory) in any special way, which is the default setting.
             --preserve-root 	             //Do not operate recursively on .
             --reference=RFILE 	             //Set permissions to match those of file RFILE, ignoring any specified MODE.
             -R, --recursive 	             //Change files and directories recursively.
             --help 	                     //Display a help message and exit.
             --version 	                     //Output version information and exit.
 
 
 










3. CHOWN

 
             - The chown command allows you to change the user and/or group ownership of a given file, directory, or symbolic link.
 
             - chown [OPTIONS] USER[:GROUP] FILE(s)
 
 
             -rw-r--r-- 12 linuxize users 12.0K Apr  8 20:51 filename.txt
             |[-][-][-]-   [------] [---]
                             |       |
                             |       +----------- Group
                             +------------------- Owner
 
 
             - chown root:root shell                     //to change the persmission
             - chown USER:GROUP FILE                     //The following command will change the ownership of a file named file1 to a new owner named
             - chown www-data: symlink1                  //For example, if you try to change the owner and the group of the symbolic link symlink1 that points to /var/www/file1, chown will change the ownership
 











4. SPECIAL PERSMISSION

 
 
             Here are the special permission ﬂags, with their respective octal values:
 
             - setuid: 2 ^ 2 = 4 (bit 2 set)
             - setgid: 2 ^ 1 = 2 (bit 1 set)
             - sticky: 2 ^ 0 = 1 (bit 0 set)
 
 
             The setuid permission (for user permission)
             //With the setuid bit set, when an executable ﬁle is launched, it will run with the privileges of the ﬁle owner instead of the user who launched it. For example, if the executable is owned by root and 
             //launched by a regular user, it will run with root privileges. The setuid permission could pose a potential security risk when used inadequately, or when vulnerabilities of the underlying process could be 
             //exploited. Setuid is a Linux file permission setting that allows a user to execute that file or program with the permission of the owner of that file. This is primarily used to elevate the privileges of the current user. If a file is “setuid” and is owned by the user “root” then a user that has the ability to execute that program will do so as the user root instead of themselves. The most common example of this in Linux is ‘sudo’. In this example, the user ‘test’ located the executable ‘sudo’ and did a full listing of it with the ‘ls -l’ command.
 
 
             - 'chmod u+s  filename'               
                                    //to set the permission over an file to be executing by an user. The lowercase ‘s’ we were looking for is the now a capital ‘S.’ This signifies that the setuid IS set, but the user that owns the file does not have execute permissions.
 

 
 



             The setgid permission (for groups PERSMISSION)
             //While setuid controls user impersonation privileges, setgid has a similar eﬀect for group impersonation permissions. An executable ﬁle with the setgid bit set runs with the privileges of the group that owns the ﬁle, instead of the group associated with the user who started it.
 
 
             - 'chmod g+s filename'
 
 
 



             Sticky Bit (rename or change the files)
             //The sticky bit has no eﬀect on ﬁles. For a directory with sticky permission, only the user owner or group owner of the directory can delete or rename ﬁles within the directory. Users or groups with write access to the directory, by way of user or group ownerships, cannot delete or modify ﬁles in the directory. The sticky permission is useful when a directory is owned by a privileged group whose members share write access to ﬁles in that directory.
 
             - 'chmod +t mydir'                    //The resulting directory permissions are shown here (including the octal value): drwxrwxr-t (1775
             - 'chmod -t mydir'                    //to revoke the permission
 
 
 
 
             UNMASK COMMAND
             //The umask command is used to view or set the default ﬁle mode mask in the system. The ﬁle mode represents the default permissions for any new ﬁles and irectories created by a user.
 











