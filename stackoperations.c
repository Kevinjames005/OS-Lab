#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

void main(){
	struct stat *nfile;
	char path[10];
	printf("Enter the Filename:");
	scanf("%s",path);
	nfile = (struct stat*) malloc(sizeof(struct stat));
	stat(path,nfile);
	printf("User ID:%d\n",nfile->st_uid);
	printf("Block Size:%ld\n",nfile->st_blksize);
	printf("Last Access Time:%ld\n",nfile->st_atime);
	printf("Last Modification Time:%ld\n",nfile->st_mtime);
	printf("File Size:%ld\n",nfile->st_size);
	printf("Production Mode:%d\n",nfile->st_mode);
	printf("Number of Links:%ld\n",nfile->st_nlink);
	exit(0);
}
