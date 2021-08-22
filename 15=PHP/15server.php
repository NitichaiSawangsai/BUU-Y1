<table border="1">
<?php
	foreach($_SERVER as $k => $V){
		echo " <tr> <td>\$_SERVER['$k']</td> <td>$v</td> </tr> ";
	}             
?>
</table>
