<?
$host = "localhost";
$user = "Nitichai";
$pass = "Sawangsai";
$dbname = "db_test";
 
$conndb = mysql_connect($host,$user,$pass) or die ("Error");
mysql_select_db($dbname,$conndb);
mysql_query("SET NAMES UTFS"); 
?>
