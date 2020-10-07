#include <ftw.h>
#include <stdio.h>

// Declarations
#define MAX_FTW_DEPTH 16
static int readableDirCount;
static int fileCount;

// Method declaration for callback
static int callback(const char *fpath, const struct stat *sb, int typeflag); 

static int callback(const char *fpath, const struct stat *sb, int typeflag) {
	if (FTW_D == typeflag) {
		readableDirCount++;
	}else if (FTW_F == typeflag) {
		fileCount++;
	}	
	return 0;
}

int main (int argc, char** argv) {

	ftw(argv[1], callback, MAX_FTW_DEPTH);

	// Print out the results
	printf("There were %i directories.", readableDirCount);
	printf("\n");
	printf("There were %i regular files.", fileCount);
	printf("\n");
	
	return 0;
}
