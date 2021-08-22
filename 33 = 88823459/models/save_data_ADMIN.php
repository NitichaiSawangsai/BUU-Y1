<?php
	session_start();
        $objconnect = mysqli_connect("localhost","root","","mew");

	if($_SESSION['Username']==""){
		echo "Please Login!";
		exit();
	}

    if($_POST['Edit1']=="E0"){
              $_SESSION['ShowEdit1']="E0";
    }else if($_POST['Edit1']=="E1"){
              $_SESSION['ShowEdit1']="E1";
    }else if($_POST['Edit1']=="E2"){
              $_SESSION['ShowEdit1']="E2";
    }else if($_POST['Edit1']=="E3"){
              $_SESSION['ShowEdit1']="E3";
    }
	//	if($_SESSION['Username'] == "ADMIN"){
				//header("location:Edit_data1.php");
		//}
	//else if($_SESSION['Username'] == "USER"){
		 	header("location:Edit_data1.php");
		//}

		$objconnect->close();
?>
