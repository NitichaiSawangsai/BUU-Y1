<?php

$abb = "th";

switch ($abb) {
	case "de":
		$country = "Germany";
		break;
	case "th":
		$country = "Thailand";
		break;
	case "hu":
		$country = "Hungary";
		break;
	case "tr":
		$country = "Turkey";
		break;
	default:
		$country = "Unknown country";
}

echo "Your country is $country.";

?>
