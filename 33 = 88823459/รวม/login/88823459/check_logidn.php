<?php
	session_start();
	mysql_connect("localhost","root","mew");
	mysql_select_db("mydatabase");
	$strSQL = "SELECT * FROM member WHERE Username = '".mysql_real_escape_string($_POST['txtUsername'])."' and Password = '".mysql_real_escape_string($_POST['txtPassword'])."'";
	$objQuery = mysql_query($strSQL); // เชื่อมต่อกับฐานข้อมูล MySQL ต้องมีการจัดการข้อมูลไม่ว่าจะเป็น เพิ่ม แก้ไข 
	$objResult = mysql_fetch_array($objQuery); //ใช้ในการคืนค่าข้อมูลในฐานข้อมูลที่อยู่ในลักษณะเป็นแถวหรือว่าเป็น record
	if(!$objResult){
			echo "Username and Password Incorrect!";
	}else{
			$_SESSION["UserID"] = $objResult["UserID"];
			$_SESSION["Status"] = $objResult["Status"];

			session_write_close(); //จะถูกเรียกอัตโนมัติหลังจาก script ทำงานถึงคำสั่งสุดท้ายอยู่แล้ว
			
			if($objResult["Status"] == "ADMIN"){
				header("location:admin_page.php");
			}else{
				header("location:user_page.php");
			}
	}//END !$objResult
	mysql_close();
?>
