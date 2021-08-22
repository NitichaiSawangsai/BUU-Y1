<?php
        $obj_connect = mysqli_connect("localhost","root","","mew");
	
	if(trim($_POST["txtUsername"]) == ""){
		echo "Please input Username!";
		exit();	
	}
	
	if(trim($_POST["txtPassword"]) == ""){
		echo "Please input Password!";
		exit();	
	}	
		
	if($_POST["txtPassword"] != $_POST["txtConPassword"]){
		echo "Password not Match!";
		exit();
	}
	
	if(trim($_POST["txtName"]) == ""){
		echo "Please input Name!";
		exit();	
	}
	
	$username = trim($_POST["txtUsername"]);
	$password = trim($_POST["txtPassword"]);
	$objQuery = $obj_connect->query("SELECT Username FROM person WHERE Username LIKE '$username'");
	$objnum = $objQuery->fetch_row();

	if($objnum!=NULL){
		echo "Username already exists!";
	}else{	
		$strSQL = "INSERT INTO login (Username,Password,Status) VALUES ('$username','$password','USER')";	
		$strSQLl = "INSERT INTO person (Username,Prefix,FName,Lname,Email,Tel) VALUES ('$username','".$_POST["ddlPrefix"]."','".$_POST["txtName"]."','".$_POST["txtlast"]."','".$_POST["txtEmail"]."','".$_POST["txtTel"]."')";
		$objQuery = $obj_connect->query($strSQL);
		$objQuery = $obj_connect->query($strSQLl);
		
		echo "Register Completed!<br>";		
		echo "<br> Go to <a href='login.php'>Login page</a>";	
	}
	$obj_connect->close();
?>
