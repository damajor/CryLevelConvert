#include "CustomFormatConverter.h"

CLCDumpConverter::CLCDumpConverter(std::string_view path_in, std::string_view path_out)
{
	fstream_out.open(path_out);
	fstream_in.open(path_in);
}
