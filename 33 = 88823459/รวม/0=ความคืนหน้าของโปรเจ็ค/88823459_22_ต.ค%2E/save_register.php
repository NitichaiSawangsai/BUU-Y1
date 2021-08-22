<?php
        $obj_connect = mysqli_connect("localhost","root","","mew");

	if(trim($_POST["txtUsername"]) == ""){
		echo "<script>alert('Please Enter Username!!');</script>";
		exit();
	}

	if(trim($_POST["txtPassword"]) == ""){
		echo "<script>alert('Please Enter Password!!');</script>";
		exit();
	}

	if($_POST["txtPassword"] != $_POST["txtConPassword"]){
		echo "<script>alert('Password not Match!!');</script>";
		exit();
	}

	if(trim($_POST["txtName"]) == ""){
		echo "<script>alert('Please Enter Name!!');</script>";
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

		echo "<script>alert('Register Completed!!');</script>";
		echo "<script>window.top.alertRegister(1)</script>";
	}
	$obj_connect->close();
?>
