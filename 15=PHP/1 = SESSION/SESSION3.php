<?php
session_start();
//unset($_SESSION["strName"]); // ลบบาง Session
//unset($_SESSION["strSiteName"]); // ลบบาง Session
session_destroy(); // ลบ Session ทั้งหมด
?>
<html>
<head>
<title>ThaiCreate.Com Tutorial</title>
</head>
<body>
Created Check.<br>
$strName = <?php echo $_SESSION["strName"];?><br>
$strSiteName = <?php echo $_SESSION["strSiteName"];?><br>
<br>
<a href="PageSession1.php">Create Session</a><br>
<a href="PageSession2.php">Check Session</a><br>
</body>
</html>
