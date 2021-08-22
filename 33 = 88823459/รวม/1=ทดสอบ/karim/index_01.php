<?php
session_start();
$msg = "";
if($_POST){
	$login = $_POST['login'];
	$pw = $_POST['pswd'];
	if(($login != "admin") && ($pw != "abc456")){
		$msg = 'Login PPPPP Password PPPPP';
	}
	else{
		$_SESSION['admin'] = "admin";
		header("location: product.php");
		exit;
	}
}
?>

<!doctype html>
<body>
<img src-"images/data-store.jpg"><br>
<div class="warn"><?php echo $msg; ?></div>
<form method="post">
	<input type="text" name="login" placeholder="Login" required>
	<input type="password" name="pswd" placeholder="Password" required>
	<button type="submit"> PPPPP </button>
</form>
</body>
