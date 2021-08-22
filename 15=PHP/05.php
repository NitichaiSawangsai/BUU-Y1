<?php

$name = "Mateo";

$logged_in = true;
$lang = "en";

if ($logged_in) {
	echo "Hello $name, you now logged in.\n";
	
	if ($lang == "en") {
		echo "The website displayed in English.\n";
	}
	else if ($lang == "th") {
		echo "The website displayed in Thai.\n";
	}
	else {
		echo "The language was not set.\n";
	}
}
else {
	echo "You are not logged in.\n";
}

?>
