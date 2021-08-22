<?php
	$servername = "localhost";
	$username = "s57160074"; //	user database
	$password = "s57160074"; // pass database
	$dbname = "s57160074"; // database name
	
	// Create connection
	$conn = new mysqli($servername, $username, $password);
	
	// Check connection
	if ($conn->connect_error) {
		die("Connection failed: " . $conn->connect_error);
	} 
	echo "<script> console.log('Connected successfully'); </script>";
	
	if(!$conn->select_db($dbname)){ // Select Database Name 
		die("Select DB failed");
	}
	echo "<script> console.log('Select DB successfully'); </script>";
	$conn->set_charset("utf8"); // Change character set to utf8
?>
