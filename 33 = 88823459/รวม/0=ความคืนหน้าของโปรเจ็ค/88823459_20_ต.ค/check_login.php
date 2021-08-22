<?php
	session_start();
		$obj_connect = mysqli_connect("localhost","root","","mew");
	if(!$obj_connect){
		echo "Fail to Connect Database.";
	}
	if($_POST['txtUsername']==""){
		echo "<script>window.top.window.alertLogin(1)</script>";
	}else if($_POST['txtPassword']==""){
		echo "<script>window.top.window.alertLogin(2)</script>";
	}else{
		$_POST['txtUsername'] = $obj_connect->real_escape_string($_POST['txtUsername']);
		$_POST['txtPassword'] = $obj_connect->real_escape_string($_POST['txtPassword']);
		$username = $_POST['txtUsername'];
		$password = $_POST['txtPassword'];
		$SQL = $obj_connect->query("select * from login where Username = '$username' and Password = '$password'");
		$num = $SQL->fetch_row();
		var_dump($num);
		if($num==NULL){
			echo "<script>window.top.window.alertLogin(3)</script>";
		}else{
			$_SESSION["Status"] = $num[2];
			$_SESSION["Username"] = $num[0];

			session_write_close();
			
			if($num[2] == "ADMIN"){
				echo "<script>window.top.window.alertLogin(4)</script>";
			}else if($num[2] == "USER"){
				echo "<script>window.top.window.alertLogin(5)</script>";
			}
		}
		$obj_connect->close();
	}
?>
