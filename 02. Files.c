1. CREATING FILES

 
         Touch                                           //The touch command is also used to change the modiﬁcation time of a ﬁle without changing the ﬁle  itself.
 
              - 'touch -a file_name'                     //You can also change the access time by using the -a option of the touch command
              - 'ls -la --time=atime file_name'          //to check specific time
              - 'touch  files{1..5}'                     //to create several files
 
 
 

         Echo                                            //Files can also be created by using redirection and the echo command. echo isa command that prints the string given as a parameter to 
                                                         //the standard
 
              - 'echo text  >> new_files'                //we redirected the text from the echo command to the presentation ﬁle. It did not exist at the beginning
              - 'echo add text >> new files'             //This echo command appended a new line of text to the end of the ﬁle, by using the  operator.














2. LISTING FILES


 
        ls
 
 
             - ls -lh:                   //The -l option lists the ﬁles in an extended format, while the -h option shows them in a human- readable form, with the size in kilobytes or 
             - ls -la:                   //The -a option shows all the ﬁles, including hidden ones. Combined with the -l option, the output will be a list of all the ﬁles and their details.
             - ls -lt                    //sort the list by modification time
             - ls -ltr:                  //The -t option sorts ﬁles by their modiﬁcation time, showing the newest ﬁrst; the -r option reverses the order of the sort.
             - ls – lS:                  //The -S option sorts the ﬁles by their size, with the largest ﬁle ﬁrst.
             - ls -R:                    //The -R option shows the contents of the current or speciﬁed directory in recursive mode.
             - ls -i                     //to review ID, index number or inode
  
 
 
 
 
        PWD
 
            - pwd                        //to find out in which directory we are
 















3. CREATING & DELETING DIRECTORY

 
        mkdir

 
             - mkdir files_name                           //one directory
             - mkdir -p reports/files/folder1             //create multiples directories
             - mkdir -m                                   //set the permision               kdir -m u=wrx, g=rx, o=test3**
             - mkdir - v                                  //Verbose to see all the steps















4.  COPYING AND MOVING FILES


 
        cp
 
 
                 - cp file1 file2                         //Copy file1 to file2
                 - cp -i                                  //ask before to write
                 - cp -u                                  //only copy new files
                 - cp -a                                  //copies an entire directory hierarchy in recursive mode by preserving all the attributes and links
                 - cp -r                                  //This option is similar to -a, but it does not preserve attributes, only symbolic links.
                 - cp -p                                  //The -p option retains the ﬁle permissions and timestamps. Otherwise, just by using cp in its simplest form



    mv
 
 
                 - mv file1 file2                          //Rename or move file1 to file2. If file2 is an existing directory, move file1 into directory file2
                 - mv -i                                   //ask before to write
                 - mv office.txt office1.text              //change the name
                 - mv file /var                            //move the directory
 














5. LINK


         //Links are a compelling option in Linux. They can be used as a means of protection for the original ﬁles, or just as a tool to keep multiple copies of a ﬁle without having separate hard copies. 
 
         //The command is ln, and it can be used to create two types of links:
 
                 - Symbolic links
                 - Hard links
 
 
         //Those two links are diﬀerent types of ﬁles that point to the original ﬁle. In the case of a symbolic link, it is a physical ﬁle that points to the original ﬁle, and a hard link is a virtual ﬁle that points to the original ﬁle.
 
 
                 - 'ln -s [original_filename] [link_filename]'
 
                 - 'ln -s folder1 folder2-link'                        //Symbolic link     ls -i to check different id
                 - 'ln folder1 folder2'                                //hard link        - both folder contains the same information.
 













6. DELETING FILES

 
     rm
 
                - 'rm -i files'               //ask persmision
                - 'rm -f files'               //force
                - 'rm -r files'               //recursive methods
                - 'rm -rf files'              //delete all without persmision.
 












7.  FILE VIEWING

 
 
                cat
 
                  - 'cat -n'                         //enumerate the lines
 



        les
 
                  - 'less /etc/passwd'
          



 
        Head



                - 'head -n 5 /etc/passwd'          //to print specific lines



        tail
                 - 'tail -f files.txt'              //to print the last lines of the file.



 
        More
 
                 - 'stat files'                      //This command gives you more information than the ls command does.
                 - 'file files'                      //The ﬁle command determines the ﬁle type more by its contents than anything else.
 




         Sort
 
                 SORT command is used to sort a file, arranging the records in a particular order. By default, the sort command sorts file assuming the contents are ASCII. 
                 Using options in the sort command can also be used to sort numerically.
 
                 - 'cat /etc/passwd | sort'                       //Depending on which results and files are dealt with, they are rarely sorted.
                 - 'sort inputfile.txt  filename.txt'



 


 
        Grep
 
 
             grep -v: Show the lines that are not according to the search criteria.
             grep -l: Show only the ﬁlenames that match the criteria.
             grep -L: Show only the lines that do not comply with the criteria.
             grep -c: A counter that shows the number of lines matching the criteria.
             grep -n: Show the line number where the string was found.
             grep -i: Searches are case insensitive.
             grep -R: Search recursively inside directory structure.
             grep -E: Use Extended Regular Expressions.
             grep -F: Use a strict list of strings instead of regular expressions.
 
 
             - sudo grep sudo /var/log/auth.log                         //Find out the last time the sudo command was used
             - grep -R packt /etc                               //Search for the packt string inside text ﬁles from the /etc directory
             - grep -Rn packt /etc                              //Show the exact line where the match was found
             - grep pattern file                                //Search for pattern in file
             - grep -r pattern directory                        //Search recursively for pattern in directory
 
             - cat /etc/passwd | grep /bin/bash
             - cat /etc/passwd | grep -v false\|nologin
 
 



             Regular Expressions
 
             . Any one char
             * Match anu number of previous
             + match any number of previous
             $ end of line                                                rep "e$" names.txt       (find a name ended on e)
             ^ beginning of the line                                      grep "e^" names.txt       (find a name ended on e)
 
 
 
 



 
        Cut
 
             Specific results with different characters may be separated as delimiters. The cut command in UNIX is a command for cutting out the sections from each line of
             files and writing the result to standard output.
 
             The most used options are
 
                 -b (Cut by bites)                            cut -b 1 names.txt           cut -b 1,2 names.txt
                 -c (cut by characters)                       cut -b 1 names.txt           cut -b 1,2 names.txt
                 -d (cut by delimiters)                       cut -d " " -f 1 names.txt
                 -f (cut by field)
 
 
 
             - 'cat /etc/passwd | grep -v false\|nologin | cut -d: -f1'





 
 
        uniq
 
             The uniq command in Linux is a command-line utility that reports or filters out the repeated lines in a file.
             In simple words, uniq is the tool that helps to detect the adjacent duplicate lines and also deletes the duplicate lines
 
 
             Example
 
             $cat kt.txt
             I love music.
             I love music.
             I love music.
 
             I love music of Kartik.
             I love music of Kartik.
 
 
             Example
 
             //...using uniq command.../
 
             $uniq kt.txt
             I love music.
 
             I love music of Kartik.
 
             Thanks.
 
             /* with the use of uniq all
             the repeated lines are removed*/
 




 
 
 
        tr
 
            //El comando tr (translate) se usa en Linux principalmente para traducir y eliminar caracteres.
 
 
            - 'cat /etc/passwd | grep -v false\|nologin | tr : ' 
 







 
        Columm
 
            //Since such results can often have an unclear representation, the tool column is well suited to display such results in tabular form using the -t.
 
            - 'cat /etc/passwd | grep -v false\|nologin | tr :   | column -t'
 







 
        AWK
 
 
             //Awk is a scripting language used for manipulating data and generating reports. The awk command programming language requires no compiling and allows the user to use variables
 
 
             Example
 
             $cat  employee.txt
 
                 ajay manager account 45000
                 sunil clerk account 25000
                 varun manager sales 50000
                 amit manager account 47000
                 tarun peon sales 15000
                 deepak clerk sales 23000
                 sunil peon sales 13000
                 satvik director purchase 80000
 
 
 
             $ awk /manager/ {print} employee.txt
 
 
                 ajay manager account 45000
                 varun manager sales 50000
                 amit manager account 47000





 
 
 
        SED
 
 
             //SED command in UNIX stands for stream editor and it can perform lots of functions on file like searching, find and replace, insertion or deletion
 
 
             Example
 
             $cat  geekfile.txt
 
                 unix is great os. unix is opensource. unix is free os.
                 learn operating system.
                 unix linux which one you choose.
                 unix is easy to learn.unix is a multiuser os.Learn unix .unix is a powerful.
 
 
             Replacing or substituting string : Sed command is mostly used to replace the text in a file. The below simple sed command replaces the word “unix” 
             with “linux” in the file.
 
             $sed s/unix/linux/ geekfile.txt
 











8. FILE COMPRESSION

 
         This command is used with options and does not oﬀer compression by default. To use compression, we would need to use speciﬁc options
 
                    - tar -c: Creates an archive
                    - tar -r: Appends ﬁles to an already existing archive
                    - tar -u: Appends only changed ﬁles to an existing archive
                    - tar -A: Appends an archive to the end of another archive
                    - tar -t: Lists the contents of the archive
                    - tar -x: Extracts the archive contents
                    - tar -z: Uses gzip compression for the archive
                    - tar -j: Uses bzip2 compression for the archive
                    - tar -v: Uses verbose mode by printing extra information on the screen
                    - tar -p: Restores original permission and ownership for the extracted ﬁles
                    - tar -f: Speciﬁes the name of the output ﬁle
 
 
                    - tar cf archive.tar directory                //Create tar named archive.tar containing directory.
                    - tar xf archive.tar                          //Extract the contents from archive.tar.
                    - tar czf archive.tar.gz directory            //Create a gzip compressed tar file name archive.tar.gz.
                    - tar xzf archive.tar.gz                      //Extract a gzip compressed tar file.
                    - tar cjf archive.tar.bz2 directory           //Create a tar file with bzip2 compression
                    - tar xjf archive.tar.bz2                     //Extract a bzip2 compressed tar file.













9. SEARCH


 
 
        LOCATE**
 
 
          //This command creates an index of all the ﬁle locations on your system. Thus, when you execute the command, it searches for your ﬁle inside the database. It uses the updatedb command as its partner.
 
 
                    - updatedb           //Before starting to use the locate command, you should execute updatedb to update the location database
                    - locate file        //to locate an archive





 
 
        Find
 
 
          - 'find / -type f'                                 //Hereby, we define the type of the searched object. In this case, f stands for file
          - 'find / -type -d'                            //directory

          - 'find / -name .conf'                                 //Find all .conf files in a directory
          - 'find / -type f -name file*.*'               //find Find all extension with name files


          - 'find / -type f -name *.conf -user root -size +20k -size +30k -newermt 2020-03-03 -exec ls -al {} \; 2>/dev/null'
          - 'find / -type f -name *.conf -user root -exec ls -al {} \; 2>/dev/null | wc -l'                                            //to count all files

                            // 2>/dev/null: This redirects error messages (stderr) to /dev/null, meaning that error messages generated by find will be discarded and not shown in the output.


          - 'find / type -f -name shadow 2>/dev/null > result.txt'                  
          - 'find / type -f -name shadow 2>/dev/null > result.txt  | grep systemd'






10. WHICH


 
         //This tool returns the path to the file or link that should be executed. This allows us to determine if specific programs, like cURL, netcat, wget, python, gcc, are available on the operating system.
 
             - 'which python'                              /usr/bin/python
 











13. WC

 
         - 'find /etc/ -name *.conf 2/dev/null | grep systemd | wc -l'







14. CURL


 
         - 'curl http://www.parrot.com'








15. WGET


 
         - 'wget http:www.parrot.com'         //we can download files from FTP or HTTP servers directly from the terminal and serves as a good download manager.