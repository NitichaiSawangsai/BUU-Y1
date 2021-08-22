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
		echo "<script>alert('Password Not Match!!');</script>";
		exit();
	}

	if(trim($_POST["txtName"]) == ""){
		echo "<script>alert('Please Enter First Name!!');</script>";
		exit();
	}
	$username = trim($_POST["txtUsername"]);
	$password = trim($_POST["txtPassword"]);
	$objQuery = $obj_connect->query("SELECT Username FROM person WHERE Username LIKE '$username'");
	$objnum = $objQuery->fetch_row();
	if($objnum!=NULL){
			echo "<script>alert('Username already exists!!');</script>";
	}else{
	   $accnum = $obj_connect->query("SELECT * FROM account WHERE account_num = (SELECT MAX(account_num) FROM account)");
     $accnumrow = $accnum->fetch_row();
	   $i=0;
	   $number='123456789';
	   $result=NULL;
	   for($i==1;$i<2;$i++){
		     $random  =rand(0,strlen($number)-1);
		     $cut_txt =substr($number,$random,1);
		     $result =substr($number,$random,1);
     }
	   $newacc = $accnumrow[1] + $result;
	   $ba = 0.00;
	   $inaccnum = "INSERT INTO account (Username,account_num,balance) VALUES ('$username','$newacc','$ba')";
	   $strSQL = "INSERT INTO login (Username,Password,Status) VALUES ('$username','$password','USER')";
     $strSQLl = "INSERT INTO person (Username,Prefix,FName,Lname,Email,Tel) VALUES ('$username','".$_POST["ddlPrefix"]."','".$_POST["txtName"]."','".$_POST["txtlast"]."','".$_POST["txtEmail"]."','".$_POST["txtTel"]."')";
     $objQuery = $obj_connect->query($strSQL);
     $objQuery = $obj_connect->query($strSQLl);
     $objQuery = $obj_connect->query($inaccnum);
	   echo "<script>alert('Register Completed!!');</script>";
		 echo "<script>window.top.alertRegister(1)</script>";
	}
	$obj_connect->close();
?>
