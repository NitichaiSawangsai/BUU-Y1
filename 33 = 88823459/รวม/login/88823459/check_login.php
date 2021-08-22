<?php
	session_start();
	$obj_connect = mysqli_connect("localhost","root","","mew");
	if(!$obj_connect){
		echo "Fail to Connect Database.";
	}if($_POST['txtUsername']==""){
		echo "Please Enter Username";
	}else if($_POST['txtPassword']==""){
		echo "Please Enter Password";
	}else{
		$_POST['txtUsername'] = $obj_connect->real_escape_string($_POST['txtUsername']);
		$_POST['txtPassword'] = $obj_connect->real_escape_string($_POST['txtPassword']);
		$username = $_POST['txtUsername'];
		$password = $_POST['txtPassword'];
		$SQL = $obj_connect->query("select * from login where Username = '$username' and Password = '$password'");
		$num = $SQL->fetch_row();
	if($num==NULL){
			echo "Username or Password Incorrect!";
	}else{
                        $_SESSION['Username'] = $_POST['txtUsername'];
			$_SESSION["Status"] = $num[2];
			session_write_close();
			if($num[2] == "ADMIN"){
				header("location:admin_page.php");
			}else if($num[2] == "USER"){
				header("location:user_page.php");
			}
	}
	$obj_connect->close();
}
?>
