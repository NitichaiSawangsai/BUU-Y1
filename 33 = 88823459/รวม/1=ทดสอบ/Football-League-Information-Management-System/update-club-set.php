<?php
...
 	if($_POST){
		include "dblink.php";
        	$league = $_POST['league'];
        	$club = $_POST['club'];
        	$logo = "";
        	if(is_uploaded_file($_FILES['logo']['tmp_name'])){
        		if($_FILES['logo']['error'] == 0){
                		$filename = $_FILES['logo']['name'];
                        	$p = pathinfo($filename);
                       		$ext = $p['extension'];
                       		$logo = $league.date('YmdHis').".$ext";
               		}
				move_uploaded_file($_FILES['logo']['tmp_name'],"images/logo-club/$logo");
       		 }
       		 $sql = "REPLACE INTO clubs VALUES ('','$league','$club','$logo',0,0,0,0,0,0,0,0)";
       		 mysqli_query($link,$sql);
	}

?>
