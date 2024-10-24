#include "izn_wrapper_aom.hxx"
#include <tcinit/tcinit.h>

using namespace std; 

void izn_aom_ask_value_string(const tag_t &objectTag, const std::string &propertyName, std::string &value) {
	char* valueChar = NULL;
	AOM_ask_value_string(objectTag, propertyName.c_str(), &valueChar);
	value.assign(valueChar);
	MEM_free(valueChar);
}