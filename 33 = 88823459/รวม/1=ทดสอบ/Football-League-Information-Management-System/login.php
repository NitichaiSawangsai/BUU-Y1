<?php
session_start();
ob_start();
?>
<!doctype html>
<?php
if($_POST){
	$login = $_POST['login'];
	$pw = $_POST['pswd'];
	if(($login == "admin") && ($pw == "abc456")){
		$_SESSION['admin'] = "admin";
		header("location: index.php");
		ob_end_flush();
		exit;
	}
	else{ echo '<h4 class="err"> PPPPP Login PPPPP Password PPPPP</h4>'; }
}
?>
<form method="post">
	<input type="text" name="login" placeholder="Login" required>
	<input type="password" name="pswd" placeholder="Password" required>
	<button> PPPPP </button>
</form>
