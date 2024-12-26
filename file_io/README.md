DESCRIPTION:

File: 0-read_textfile.c

Description: Reads a specified number of letters from a text file and prints them to the standard output. It handles errors related to file opening, reading, and writing, and ensures it returns the actual number of characters read and printed.
File: 1-create_file.c

Description: Creates a new file and writes a NULL-terminated string (text_content) to it. If the file already exists, it is truncated. It ensures the file has read and write permissions for the owner only.
File: 2-append_text_to_file.c

Description: Appends text to the end of a file. It does not create a new file if the file doesn't exist and handles cases where the text content is NULL. It returns an error if it cannot read from or write to the file.
File: 3-cp.c

Description: Copies content from one file (file_from) to another (file_to). It handles various error conditions such as incorrect arguments, file read/write permissions, and file closing issues. It ensures the destination file is truncated if it exists.
File: 100-elf_header.c

Description: Displays information from the ELF (Executable and Linkable Format) header of a file. It checks if the file is an ELF file and prints details like magic number, class, data format, version, OS/ABI, type, and entry point address.

