<html>
<head>
	<title>Login Banking</title>
</head>
<style> body { background-image: url("background-texture-1014963__340.jpg"); } </style>

<body>
  <CENTER>
	<form name="form1" method="post" action="check_login.php" target="iframe_target">
	<iframe id="iframe_target" name="iframe_target" src="#" style="width:0;height:0;border:0px solid #fff;"></iframe>
                <BR><BR><BR><BR><BR><BR><BR><BR><BR><BR>
                <font face = "Alien Encounters" besefont size = "18" >    Login Banking system </font> <BR><BR><BR><BR>
  		<table border="1" style="width: 300px">
    		<tbody>
      			<tr>
        			<td> &nbsp;Username</td>
        			<td><input name="txtUsername" type="text" id="txtUsername"></td>
      			</tr>
      			<tr>
        			<td> &nbsp;Password</td>
        			<td><input name="txtPassword" type="password" id="txtPassword"></td>
      			</tr>
    		</tbody>
  		</table><BR>
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
		</script> <div id="divAlert"></div> <BR>

                <a href="register.php">Register</a>
                <?php echo "&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp&nbsp";?>
		<input type="submit" name="Submit" value="Login">
	</form>
   </CENTER>
</body>
</html>

