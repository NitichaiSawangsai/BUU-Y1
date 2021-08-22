<?php
	session_start();
  $objconnect = mysqli_connect("localhost","root","","mew");

	if($_SESSION['Username']==""){
		echo "Please Login!";
		exit();
	}

	if($_SESSION['ShowEdit1'] == "E1"){
		    if($_POST['EditE1_Email'] !=""){
					$edit = "UPDATE person SET Email='".$_POST['EditE1_Email']."' WHERE Username='".$_SESSION["Username"]."'";
					$SQLobj = $objconnect->query($edit);
					 $_SESSION['ShowEdit1']="0";
					 $_SESSION["Email"] = $_POST['EditE1_Email'];
					 echo '<script>window.alert("Completed");</script>';
					 echo "<script>window.top.window.gouser();</script>";
			  }else{
					 echo "<script>window.top.window.dis(1);</script>";
				}
	}else if($_SESSION['ShowEdit1'] =="E2"){
		    if($_POST['EditE1_Tel'] !=""){
		       $edit = "UPDATE person SET Tel='".$_POST['EditE1_Tel']."' WHERE Username='".$_SESSION["Username"]."'";
					 $SQLobj = $objconnect->query($edit);
					 $_SESSION['ShowEdit1']="0";
					 $_SESSION["Tel"] = $_POST['EditE1_Tel'];
					 echo '<script>window.alert("Complete");</script>';
					 echo "<script>window.top.window.gouser();</script>";
				}else{
 					 echo "<script>window.top.window.dis(2);</script>";
 				}
	}else if($_SESSION['ShowEdit1'] =="E3"){
		    if($_POST['EditE1_Email'] !="" && $_POST['EditE1_Tel'] !=""){
		     	$edit = " UPDATE person SET Email='".$_POST['EditE1_Email']."' WHERE Username='".$_SESSION["Username"]."' ";
					$editt = "UPDATE person SET Tel='".$_POST['EditE1_Tel']."' WHERE Username='".$_SESSION["Username"]."' ";
					$SQLobj = $objconnect->query($edit);
					$SQLobj = $objconnect->query($editt);
					$_SESSION['ShowEdit1']="0";
					$_SESSION["Email"] = $_POST['EditE1_Email'];
					$_SESSION["Email"] = $_POST['EditE1_Tel'];
					echo '<script>window.alert("Complete");</script>';
					echo "<script>window.top.window.gouser();</script>";
				}else if($_POST['EditE1_Email'] =="" && $_POST['EditE1_Tel'] ==""){
					echo "<script>window.top.window.dis(3);</script>";
				}else if($_POST['EditE1_Email'] ==""){
					echo "<script>window.top.window.dis(1);</script>";
			  }else if($_POST['EditE1_Tel'] ==""){
					echo "<script>window.top.window.dis(2);</script>";
			  }
	}
session_write_close();



  ?>
