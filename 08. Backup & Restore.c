1. BACKUP AND RESTORE


		When backing up data on an Ubuntu system, we can utilize tools such as:

		- Rsync.      //is an open-source tool that allows us to quickly and securely back up files and folders to a remote location. It is particularly useful for transferring large amounts of data over the network, as
		 			  //it only transmits the changed parts of a file.
		- Deja        //graphical backup tool for Ubuntu that provides users with comprehensive data protection and secure backups. It also uses Rsync as a backend and additionally offers the possibility to encrypt
		 			  //backup copies and store them on remote storage media, such as FTP servers, or cloud storage services, such as Amazon S3.
		- Duplicity   //is a graphical backup tool for Ubuntu that simplifies the backup process, allowing us to quickly and easily back up our data





		1. BACKUP 

		- 'apt install rsync -y'					
		- 'rsync -av /path/to/mydirectory user@backup_server:/path/to/backup/directory'				//to start a backup
		- 'espinjohandry@htb[/htb]$ rsync -avz --backup --backup-dir=/path/to/backup/folder --delete /path/to/mydirectory user@backup_server:/path/to/backup/directory'.   //compress folder




		2. RESTORE BACKUP 


		- 'rsync -av user@remote_host:/path/to/backup/directory /path/to/mydirector'			//Restore data