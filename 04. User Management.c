1. CREATING USERS

 
 
         Useradd
 
                 - 'useradd -m'                          //Create an account named Parrot with a comment and create the users home directory.
 
 
                 - 'cat /etc/passwd | grep parrot'      //to review the information
                                                             - jess:x:1001:1001:Parrot,,,:/home/Parrot:/usr/bin/zsh
                                                             - Name: Parrot
                                                             - x: Password encripted locate in /etc/shadow
                                                             - 1001: The UID     - id parrrot to review this information
                                                             - 1001: The user group id
                                                             - /home/parrot
                                                             - /usr/bin/zsh: The default login shell for user
 
                    //The information is stored in /etc/passwd  The password is stored in /etc/shadow
 
 


 
                 - 'getent passwd parrot'                      //to check the user information
                 - 'cat /etc/passwd | cut -d: -f1 | less'      //to view the list users of the systems
 
 











2. DELETING USERS

 
 
         Userdel
 
 
                 - 'userdel Parrot'                      //detete user
                 - 'sudo userdel -f -r parrot'           //to remove an user
                                                         -f, --force: Removes all ﬁles in the users home directory, even if not owned by the user
                                                         -r, --remove: Removes the users home directory and mail spool
 






3. MODIFY USERS


 
         Usermod
 
 
                 - 'usermod -l parrot Parrot1'        //to change the name of a username
                 - 'usermod -L parrot'                //to lock the user
                 - 'usermod -U julian'                //to unblock an user
                 - 'usermod -aG sudo julian'          //Add the john account to the root users
 










4. MANAGING PASSWORDS


         passwd
 
 
                 - passwd parrot                     //to change the password
                 - passwd -l                         //block the password
                 - passwd -u  user                   //unblock the password
                 - passwd -e  date                   //set expiration date
                 - passwd -x  days                   //minimum days
                 - passwd -S  user                   //passwd information













5. CREATING AND DELETING GROUPS

 
 
             - groupadd developers                               //to create a developers group The group information is stored in the /etc/group.
                      -cat /etc/group | grep developers
                      - getent group developers
 
             - groupdel devops                                   // to delete the group
 
 
             - gpasswd developers                                //to create a password for developers group
             - groupmod -n devops developers                     //to change the name developers to devepos
 












6. ADD & DELETE USER TO GROUP


 
         addgroup & delgroup
 
                 - addgroup parrot developers      //adding parrot to developers groups
                 - delgroup parrot developers      //removing parrot to developers groups
 