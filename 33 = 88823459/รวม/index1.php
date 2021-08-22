<html>
<head>
<title>Login Banking</title>
</head>
<body>
<?php
$obj_connect = mysqli_connect("localhost","root","","mew");
	if($obj_connect){
		echo "Database Connected.";
	}else{
		echo "Fail to Connect Database.";
	}
?>
<form name="form1" method="post" action="check_login.php" target="iframe_target">
<iframe id="iframe_target" name="iframe_target" src="#" style="width:0;height:0;border:0px solid #fff;"></iframe>
<script language="JavaScript">
function alertLogin(log){
	if(log==1){
		document.getElementById("divAlert").innerHTML = "<font color=red> Please Enter Username!!</font><br>";
	}else if(log==2){
		document.getElementById("divAlert").innerHTML = "<font color=red> Please Enter Password!!</font><br>";
	}else if(log==3){
		document.getElementById("divAlert").innerHTML = "<font color=red> Incorrect Username or Password!!</font><br>";
	}else if(log==4){
		window.location = "admin_page.php";
	}else if(log==5){
		window.location = "user_page.php";
	}
}
</script>
<div id="divAlert"></div>
  Login<br>
  <table border="1" style="width: 300px">
    <tbody>
      <tr>
        <td> &nbsp;Username</td>
        <td>
          <input name="txtUsername" type="text" id="txtUsername">
        </td>
      </tr>
      <tr>
        <td> &nbsp;Password</td>
        <td><input name="txtPassword" type="password" id="txtPassword">
        </td>
      </tr>
    </tbody>
  </table>
  <br>
  <input type="submit" name="Submit" value="Login">
</form>
</body>
</html>
