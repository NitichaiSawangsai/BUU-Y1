<?php
	session_start();
        mysqli_connect("localhost","root","","mew");

	if($_SESSION['Username']==""){
		echo "Please Login!";
		exit();
	}

	if($_SESSION['Status'] != "ADMIN"){
		echo "This page for Admin only!";
		exit();
	}
/*	mysql_connect("localhost","root","mew");
	mysql_select_db("mydatabase");
	$strSQL = "SELECT * FROM member WHERE UserID = '".$_SESSION['UserID']."' ";
	$objQuery = mysql_query($strSQL);
	$objResult = mysql_fetch_array($objQuery);
*/

?>
<html>
<head>
<title>Banking system Wecome ADMIN</title>
</head>
<body>
  Welcome to Admin Page! <br>
  <table border="1" style="width: 300px">
    <tbody>
      <tr>
        <td width="87"> &nbsp;Username</td>
        <td width="197"><?php echo $_SESSION["Username"];?>
        </td>
      </tr>
      <tr>
        <td> &nbsp;Name</td>
        <td><?php echo $_SESSION["Fname"];?></td>
      </tr>
    </tbody>
  </table>
  <br>
  <a href="edit_profile.php">Edit</a><br>
  <br>
  <a href="logout.php">Logout</a>
</body>
</html>
