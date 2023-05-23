#include "Premium.h"

Premium::Premium()
{
}

Premium::Premium(std::string descriptionStr, const std::vector<std::string>& datesStr)
{
	description = descriptionStr;
	dates = datesStr;
}
