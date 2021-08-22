<?php
	//session_start();
	if($_SESSION['Username'] == ""){
		echo "Please Login!";
		exit();
	}

/*	mysql_connect("localhost","root","root");
	mysql_select_db("mydatabase");
	$strSQL = "SELECT * FROM member WHERE UserID = '".$_SESSION['UserID']."' ";
	$objQuery = mysql_query($strSQL);
	$objResult = mysql_fetch_array($objQuery);
*/
?>
<html>
	<title>GUNAUG BANKING</title>
<head>
    <body>
        <form name="form1" method="post" action="check_login.php" target="ifram    e_target">
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8"></head>
	<form name="form1" method="post" action="save_profile.php">
	Edit Profile! <br>
  	<table width="400" border="1" style="width: 400px">
    	<tbody>
     		<tr>
        		<td> &nbsp;Username</td>
        			<td>
          				<?php echo $_SESSION["Username"];?>
        			</td>
      		</tr>

      		<tr>
        		<td> &nbsp;Password</td>
        		<td><input name="EiittxtPassword" type="password" id="txtPassword" value="">
        		</td>
      		</tr>

      		<tr>
        		<td> &nbsp;Confirm Password</td>
        		<td><input name="EdittxtConPassword" type="password" id="txtConPassword" value="">
        		</td>
     		</tr>

                <tr>
        		<td> &nbsp;Prefix</td>
        		<td> <select name="ExitddlPrefix" id="ExitddlPrefix">
            			<option value="Mr.">Mr.</option>
            			<option value="Miss.">Miss.</option>
          		     </select>
        		</td>
      		</tr>

      		<tr>
        		<td>&nbsp;Name</td>
        		<td><input name="EdittxtNamefirst" type="text" id="txtName" value=""></td>
        		<td><input name="EdittxtNamelast" type="text" id="txtName" value=""></td>
      		</tr>

      		<tr>
        		<td>&nbsp;Email</td>
        		<td><input name="EdittxtExit" type="text" id="txtExit" value=""></td>
      		</tr>

      		<tr>
        		<td>&nbsp;Tol.</td>
        		<td><input name="EdittxtTol" type="text" id="txtTol" value=""></td>
      		</tr>

      		<tr>
        		<td> &nbsp;Status</td>
        			<td> <?php echo $_SESSION['Status'];?>
     			</td>
      		</tr>
    	</tbody>
  	</table> <BR>
  		<input type="submit" name="Submit" value="Save">
	</form>
  </body>
</html>
