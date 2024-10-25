1. SYSTEMS LOGS 



		//here are several different types of system logs on Linux, including:

		- Kernel Logs						//These logs contain information about the system's kernel, including hardware drivers, system calls, and kernel events. They are stored in the 
											'/var/log/kern.log'
		- System Logs						//These logs contain information about system-level events, such as service starts and stops, login attempts, and system reboots. They are stored in the
											'var/log/syslog file'
		- Authentication Logs				//These logs contain information about user authentication attempts, including successful and failed attempts. They are stored in the 
											'/var/log/auth.log file.' //It is important to note that while the /var/log/syslog file may contain similar login information, the /var/log/auth.log file specifically focuses on user authentication attempts, making it a more valuable resource for identifying potential security threats. 
		- Application Logs					//These logs contain information about the activities of specific applications running on the system. They are often stored in their own files, such as 
											'/var/log/apache2/error.log'
		- Security Logs						//These security logs and their events are often recorded in a variety of log files, depending on the specific security application or tool in use. For 
											//example, the Fail2ban application records failed login attempts in the /var/log/fail2ban.log