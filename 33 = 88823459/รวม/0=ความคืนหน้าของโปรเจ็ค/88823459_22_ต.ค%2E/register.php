<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <title>Register GUNAUG BANKING</title>
    <link type="text/css" href="http://10.103.46.16/88823459/assets/fonts/font-awesome/css/font-awesome.min.css" rel="stylesheet">        <!-- Font Awesome -->
    <link type="text/css" href="http://10.103.46.16/88823459/assets/fonts/themify-icons/themify-icons.css" rel="stylesheet">              <!-- Themify Icons -->
    <link type="text/css" href="http://10.103.46.16/88823459/assets/css/styles.css" rel="stylesheet">                                     <!-- Core CSS with all styles -->
    <link type="text/css" href="http://10.103.46.16/88823459/assets/plugins/codeprettifier/prettify.css" rel="stylesheet">
    <link type="text/css" href="http://10.103.46.16/88823459/assets/plugins/datatables/dataTables.bootstrap.css" rel="stylesheet">
    <link type="text/css" href="http://10.103.46.16/88823459/assets/plugins/datatables/dataTables.themify.css" rel="stylesheet">
  </head>
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
                        <td><input name="txtPassword" type="password" id="txtPassword" size="20"></td>
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
                    <td><input name="txtTel" type="text" id="txtTel" size="20"></td>
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
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  <input type="submit" name="Submit" value="Save">
</form>
                  <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                      <input type="button" name="Submit" value="Canceled" onClick='location.replace("login.php")'>
              </div>
           </div>
         </div>
<script language="JavaScript">
function alertRegister(logg){
	if(logg==1){
		window.location = "login.php";
	}
}
</script>
</body>
</html>
