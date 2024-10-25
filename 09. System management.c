1. DISK & DRIVES 


		//The main tool for disk management on Linux is the fdisk, which allows us to create, delete, and manage partitions on a drive.
		//The main tool for disk management on Linux is the fdisk, which allows us to create, delete, and manage partitions on a drive.



		FDISK 



			- 'fdisk -l'








2. MOUNTING 



		//Each logical partition or drive needs to be assigned to a specific directory on Linux.
		//The mount tool is used to mount file systems on Linux, and the /etc/fstab file is used to define the default file systems that are mounted at boot time.


		

		- 'mount'									//to see a list of mounted disk
		- 'mount /dev/sdb1 /mnt/usb'
		- 'umount /mnt/usb'		