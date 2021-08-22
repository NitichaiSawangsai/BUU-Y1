<body>
<?php
if($_POST){
	$email = $_POST['email'];
	$password = $_POST['password'];
	$mobile = $_POST['mobile'];

	$err = " ";
	if(!filter_ver($email, FILTER_VALIDATE_EMAIL)){
		$err .= "<li> pppppppppppppppppp </li>";
	}

	$mobile_pattern = "/^0[89]{1}[0-9]{8}$/";
	if(!preg_match($mobile_pattern, $mobile)){
		$err .= "<li> pppppppppp </li>";
	}

	if($err != " "){
		echo "<div><h3> ppppp </h3><ul>$err</ul></div>";
	}
}
?>
<fore method="post">
