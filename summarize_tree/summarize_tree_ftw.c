#define MAX_FTW_DEPTH 16

static int callback(const char *fpath, const struct stat *sb, int typeflag) {
	// Define stuff here
}

int main (int argc, char** argv) {
	// Check arguments and set things up

	ftw(argv[1], callback, MAX_FTW_DEPTH);

	// Print out the results
}
