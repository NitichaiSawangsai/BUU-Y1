<?php
        session_start();
        if($_SESSION['UserID'] == "")
        {
                echo "Please Login!";
                exit();
        }

        if($_SESSION['Status'] != "ADMIN")
        {
                echo "This page for Admin only!";
                exit();
        }

        mysql_connect("localhost","root","mew");
        mysql_select_db("mydatabase");
        $strSQL = "SELECT * FROM member WHERE UserID = '".$_SESSION['UserID']."' ";
        $objQuery = mysql_query($strSQL);
        $objResult = mysql_fetch_array($objQuery);

?>


<html>
<head>
  <title>My first styled page</title>
</head>
<body>
<ul class="navbar">
  <li><a href="index.html">Home page</a>
  <li><a href="musings.html">Musings</a>
  <li><a href="town.html">My town</a>
  <li><a href="links.html">Links</a>
</ul>

</body>
</html>
