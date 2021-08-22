<?php
include '../Controller/class/bank _class.php';
$fvk = new User;
$fvk->check_login($_POST['txtUsername'],$_POST['txtPassword']);
?>
