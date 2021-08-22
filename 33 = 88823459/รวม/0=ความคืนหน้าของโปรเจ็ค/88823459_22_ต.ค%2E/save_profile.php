<?php
	//session_start();
        $obj_connect = mysqli_connect("localhost","root","","mew");

	if($_SESSION["UserID"] == ""){
		echo "Please input Username!";
		exit();
	}else if($_POST["EiittxtPassword"] != $_POST["EdittxtConPassword"]){
		echo "Password not Match!";
		exit();
	}
        
        $username = trim($_SESSION["UserID"]);
        $password = trim($_POST["EiittxtPassword"]);
        $objQuery = $obj_connect->query("SELECT Username FROM person WHERE Username LIKE '$username'");
        $objnum = $objQuery->fetch_row();

        if($objnum!=NULL){
                echo "Username already exists!";
        }else{
                $strSQL = "INSERT INTO login (Username,Password,Status) VALUES ('UserID','$password','USER')";
                $strSQLl = "INSERT INTO person (Username,Prefix,FName,Lname,Email,Tel) VALUES ('UserID','".$_POST["ExitddlPrefix"]."','".$_POST["EdittxtNamefirst"]."','".$_POST["EdittxtNamelast"]."','".$_POST["EdittxtExit"]."','".$_POST["EdittxtTol"]."')";
                $objQuery = $obj_connect->query($strSQL);
                $objQuery = $obj_connect->query($strSQLl);

                echo "Register Completed!<br>";
                echo "<br> Go to <a href='login.php'>Login page</a>";
        }
        $obj_connect->close();

/*
	$strSQL = "UPDATE member SET Password = '".trim($_POST['txtPassword'])."' 
	,Name = '".trim($_POST['txtName'])."' WHERE UserID = '".$_SESSION["UserID"]."' ";
	$objQuery = mysql_query($strSQL);
	
	echo "Save Completed!<br>";		
	
	if($_SESSION["Status"] == "ADMIN") {
		echo "<br> Go to <a href='admin_page.php'>Admin page</a>";
	}else{
		echo "<br> Go to <a href='user_page.php'>User page</a>";
	}
	
	mysql_close();
*/
?>
