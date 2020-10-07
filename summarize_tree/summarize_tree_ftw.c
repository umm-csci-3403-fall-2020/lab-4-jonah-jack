#include <ftw.h>

// Declarations
#define MAX_FTW_DEPTH 16
static int readableDirCount = 0;
static int fileCount = 0;

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
	// Check arguments and set things up

	ftw(argv[1], callback, MAX_FTW_DEPTH);

	// Print out the results
	printf("There were %i directories", readableDirCount);
	printf("There were %i files", fileCount);	
	return 0;
}
