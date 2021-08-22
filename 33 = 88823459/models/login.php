<?php
        include '../Controller/class/showcss.php';
?>
<!DOCTYPE html>
<html>
     <title>Login GUNAUG BANKING</title>
     <?php  showcss();?>
<body>
  <form name="form1" method="post" action="check_login.php" target="iframe_target">
  <iframe id="iframe_target" name="iframe_target" src="#" style="width:0;height:0;border:0px solid #fff;"></iframe>
<BR><BR><BR><BR>
  <CENTER>  <font face = "Alien Encounters" besefont size = "18" >    Login GUNAUG BANKING </font> </CENTER> <BR><BR><BR>

<div class="col-md-12">
     <!-- <div class="panel"><BR> -->
        <div class="col-md-4">
        </div>
        <div class="col-md-4">
            <div class="panel">
              <div class="panel panel-warning" style="visibility: visible; opacity: 1; display: block; transform: translateY(0px);">
                 <div class="panel-heading">
                  <h2>Login</h2>
                </div>
              </div>
              <div class="panel-body">
            <CENTER>
                <tr>
                  <td> &nbsp;Username</td>
                  <td><input name="txtUsername" type="text" id="txtUsername"></td>
                </tr>
                <tr>
             <BR><BR>
                  <td> &nbsp;Password</td>
                  <td><input name="txtPassword" type="password" id="txtPassword"></td>
                </tr>
             </CENTER>

             <BR>
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

                  </script> <div id="divAlert"></div>
            <BR>
                        <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td>
                        <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td>
                        <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td>
                        <a href="register.php">Register</a>
                        <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</td>
                        <input type="submit" name="Submit" value="Login">
            <BR>
                        <a href="Contact_Us.php">ติดต่อผู้ดูแลระบบ</a>

              </div>
           </div>
         </div>
</body>
</html>
