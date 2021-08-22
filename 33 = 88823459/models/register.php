<?php
        include '../Controller/class/showcss.php';
?>
<!DOCTYPE html>
<html>
    <meta charset="utf-8">
    <title>Register GUNAUG BANKING</title>
    <?php  showcss();?>
<body>
<form name="form1" method="post" action="save_register.php" target="targetf">
<BR><BR><BR>

<div class="col-md-12">
<iframe id="targetf" name="targetf" src="#" style="width:0;height:0;border:0px solid #fff;"></iframe>
        <div class="col-md-3">
        </div>
        <div class="col-md-6">
            <div class="panel">
              <div class="btn btn-success-alt" style="visibility: visible; opacity: 1; display: block; transform: translateY(0px);">
                  <div class="panel-heading">
                      <h2>   <font face = "Alien Encounters" besefont size = "5" >สมัครสมาชิก GUNAUG BANKING </font></h2>
                  </div>
              </div>
              <div class="panel-body">
            <BR>
                  <tr>
                    <td>&nbsp;</tb>
                    <td width="125"> &nbsp;Username</td>
                    <td width="180">
                        <input name="txtUsername" type="text" id="txtUsername" size="20">
                    </td>
                  </tr>
            <BR><BR>
                  <tr>
                    <td>&nbsp;&nbsp;</tb>
                    <td> &nbsp;Password</td>
                        <td><input name="txtPassword" type="password" id="txtPassword" minlength="6"></td>
                  </tr>

                  <tr>
                      <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                      <td>&nbsp;Confirm Password</td>
                        <td><input name="txtConPassword" type="password" id="txtConPassword" size="20"></td>
                  </tr>
            <BR><BR>
                  <tr>
                      <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                      <td> &nbsp;Prefix</td>
                      <td>
                          <select name="ddlPrefix" id="ddlPrefix">
                              <option value="Mr.">Mr.</option>
                              <option value="Miss.">Miss.</option>
                          </select>
                      </td>
                  </tr>

                  <tr>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    <td>&nbsp;First name</td>
                    <td><input name="txtName" type="text" id="txtName" size="20"></td>
           <BR><BR>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    <td>Last names</td>
                    <td><input name="txtlast" type="text" id="txtlast" size="20"></td>
                  </tr>
            <BR><BR>
                  <tr>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    <td>&nbsp;&nbsp;Email</td>
                    <td><input name="txtEmail" type="text" id="txtEmail" size="20"></td>
                  </tr>

                  <tr>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    <td>&nbsp;&nbsp;</tb>
                    <td>&nbsp;Telephone</td>
                    <td><input name="txtTel" type="text" id="txtTel" maxlength="10" onKeyPress="CheckNum()"><div id="divA" align=right></div></td>
                  </tr>
             <BR><BR>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <input type="submit" name="Submit" value="Save">
</form>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <input type="button" /*name="Submit" value="Canceled"*/ onClick='location.replace("login.php")'>
              </div>
           </div>
         </div>

<script language="JavaScript">
function alertRegister(logg){
	if(logg==1){
		window.location = "login.php";
	}
}
function CheckNum(){
		if (event.keyCode < 48 || event.keyCode > 57){
		      event.returnValue = false;
		      document.getElementById("divA").innerHTML = "<font color=red> Please Enter Number Only!!</font><br>";
	    	}else{
	    	  document.getElementById("divA").innerHTML = "<font color=red></font><br>";
	    }
	}
</script>

</body>
</html>
