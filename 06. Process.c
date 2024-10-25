1. LINUX PROCESSES

 
        In general, there are two types of services: 

            1. internal //the relevant services that are required at system startup, which for example, perform hardware-related tasks, 
            2. services //that are installed by the user, which usually include all server services. Such services run in the background without any user interaction. These are also called daemons and are identified by the letter 'd' at the end of the program name, for example, sshd or systemd.

            //Most Linux distributions have now switched to systemd. This daemon is an Init process started first and thus has the process ID (PID) 1. This daemon monitors and takes care of the orderly starting and stopping of other services. All processes have an assigned PID that can be viewed under /proc/ with the corresponding number. Such a process can have a parent process ID (PPID), and if so, it is known as the child process.











2. SYSTEMTCL 


            - 'systemctl start ssh'                         //to start a service 
            - 'systemctl status ssh'                        //to check service status
            - 'systemctl enable ssh'                        //to run service after startup
            - 'ps -aux | grep ssh'                          //check the change o services running 
            - 'systemctl list-units --type=service'         //to list all services

            - 'journalctl -u ssh.service --no-pager'        //to check a services did not start by error.












3. KILL AND KILL COMMAND

 
        A process can be in the following states:

            - Running
            - Waiting    //(waiting for an event or system resource)
            - Stopped
            - Zombie    //(stopped but still has an entry in the process table).


 
         //The kill command sends a signal to a process, attempting to stop its execution. When no signal is speciﬁed, SIGTERM (15) is sent
 
         //We use the kill command to terminate processes. The commands syntax is as follows:


 
         - kill [OPTIONS] [ -s SIGNAL | -SIGNAL ] PID [...]


         - 'kill -L'                                  //Provide a full list of signals that can be used in Linux

        1   SIGHUP - //This is sent to a process when the terminal that controls it is closed.
        2   SIGINT - //Sent when a user presses [Ctrl] + C in the controlling terminal to interrupt a process.
        3   SIGQUIT - //Sent when a user presses [Ctrl] + D to quit.
        9   SIGKILL - //Immediately kill a process with no clean-up operations.
        15  SIGTERM - //Program termination.
        19  SIGSTOP - //Stop the program. It cannot be handled anymore.
        20  SIGTSTP - //Sent when a user presses [Ctrl] + Z to request for a service to suspend. The user can handle it afterward.
         
                    



 
                  The most commonly used signals are:
 
                     1 (HUP)     //Reload a process.
                     9 (KILL)    //Kill a process.
                     15 (TERM)   //Gracefully stop a process.
 
 
             - 'kill -9 PID'                        //to kill a process
 














4.  THE ANATOMY OF A PROCESS

 
 
         - pid       //Each. process in Linux has a PID automatically assigned by the kernel when the process is created. The PID is a positive integer and is always guaranteed to be unique.
         - tty       //is short for teletype, more popularly known as a controlling Terminal or device for interacting with a system. In the context of a Linux process, th
         - time      //represents the cumulative CPU utilization (or time) spent by the process (in [DD-]hh:mm:ss format)
         - cmd       //stands for command and indicates the name or full path of the command (including the arguments) that created the process.
 
 
 
 
            ps command
 
             - 'ps'                                //Display your currently running processes
             - 'ps -ef'                            //Display ll the currently running processes on the system.
             - 'ps -ef | head'                     //Display top process
             - 'ps -ef | grep ssh'                 //Display process information for process name
             - 'ps -a'                             //All process associate to TTY
             - 'ps -x'                             //Process no associate with TTY
             - 'ps -f'                             //All process in large format
             - 'ps -u'                             //Process sort by users
             - 'pstree'                            //Display the whole process tree, and it shows the init process at its root
 




         Top command
 
             - 'top'
             - 'top -p +pid'                      //to check an speciﬁc process
             - 'htop'
 
 










 
 






10. WORKING WITH SysV DAEMONS

 
         //In SysV environments, we typically use the service command to explore and control daemons.
         //We can control a daemon (for example, httpd) invoking start, stop, and restart with the service command. For example, the following command will stop the httpd service.
 
 
             - 'chkconfig httpd off'                         //Centos
             - 'chkconfig --list'                            //Display all daemon running
 










11. EXECUTE MULTIPLES COMMANDS

 
     There are three possibilities to run several commands, one after the other. These are separated by:
 
     - Semicolon (;)
     - Double ampersand characters (&&)
     - Pipes (|)
 





12. CRONTAB

 
             //The crontab is a list of commands that you want to run on a regular schedule, and also the name of the command used to manage that list. 
             Crontab stands for “cron table, ” because it uses the job scheduler cron to execute tasks.
 
 
             Crontab Format: MIN HOUR DOM MON DOW CMD
 
             Field    Description    Allowed Value
             MIN      Minute field    0 to 59
             HOUR     Hour field      0 to 23
             DOM      Day of Month    1-31
             MON      Month field     1-12
             DOW      Day Of Week     0-6
             CMD      Command         Any command to be executed.
 
 
             example: 30 08 10 06 * /home/maverick/full-backup
 

 
             ****To access to CRONTAB     = crontab -e**
 