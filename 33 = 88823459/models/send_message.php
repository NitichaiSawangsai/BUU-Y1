<?php
  //$strTo = "59160668@go.buu.ac.th";
  $strTo = "postmaster@localhost";

  //$strSubject = $_POST['Type_US']."จากผู้ใช้".$_POST['Name_US'];
  //$strHeader = "From: ".$_POST['Email_US'];
  //$strMessage = $_POST['Msg_US'];
  
  $strSubject = "postmaster@localhost";
  $strHeader = "From: postmaster@localhost";
  $strMessage = "เราได้รับข้อความจากคุณแล้ว";
  $flgSend = @mail($strTo,$strSubject,$strMessage,$strHeader);
  if($flgSend){
      echo "Email Sending.";
  }else{
      echo "Email Can Not Send.";
  }
?>
