<html>
		<?php
				session_start();
				$objconnect = mysqli_connect("localhost","root","","mew");
				$accnum = $_POST['transfes_account'];
				$money = $_POST['transfes_money'];
				$SQL = $objconnect->query("select * from account where account_num = '$accnum' ");
				$num = $SQL->fetch_row();
				if($num==NULL){
						echo "<script>window.top.window.display(1);</script>";
				}else if($_SESSION["Balance"]<$money||$money<1){
						echo "<script>window.top.window.display(2);</script>";
				}else if($accnum==$_POST['account']){
						echo "<script>window.top.window.display(3);</script>";
				}else if($_POST['account']=="a"){
						echo "<script>window.top.window.display(5);</script>";
				}else{
						$SQLl = $objconnect->query("select * from person where Username = '$num[0]'");
						$numl = $SQLl->fetch_row();

						$_SESSION["prefixa"]  = $numl[1];
						$_SESSION["namea"]    = $numl[2];
						$_SESSION["lasta"]    = $numl[3];
						$_SESSION["acca"]     = $num[1];
						$_SESSION["balancea"] = $num[2];
						$_SESSION["money"]    = $money;
						$_SESSION["Accountt"] = $_POST['account'];
						session_write_close();
					}

	   	 if($num==NULL){
						echo "<script>window.top.window.display(1);</script>";
				 }else if($_SESSION["Balance"]<$money||$money<1){
					 	echo "<script>window.top.window.display(2);</script>";
				 }else if($accnum==$_POST['account']){
					  echo "<script>window.top.window.display(3);</script>";
				 }else if($_POST['account']=="a"){
						echo "<script>window.top.window.display(5);</script>";
				 }else{
	 ?>
		 				<?php echo "<script>window.top.window.display(4);</script>"; ?>
		 				<font face = "Anita  Semi-square" besefont size = "2">
							<?php	echo "Name :"                ?>
							<td>&nbsp;</tb>
									<?php $pre = $_SESSION["prefixa"];
					      		$_SESSION["prefixa"] = " ";
					      		echo $pre;   ?>
							<td>&nbsp;</tb>
									<?php $Fname = $_SESSION["namea"];
					      		$_SESSION["namea"] = "";
					      		echo $Fname;     ?>
							<td>&nbsp;</tb>
									<?php $Lasta = $_SESSION["lasta"];
					      		$_SESSION["lasta"] = "";
					      		echo $Lasta;     ?>
							<BR><BR>
									<?php	echo "Account Number :"      ?>
										<td>&nbsp;</tb>
										<?php $acca = $_SESSION["acca"];
					      		$_SESSION["acca"] = "";
					      		echo $acca;      ?>
			  			<BR><BR>
				  				<?php	$money = $_SESSION["money"];
					      		$_SESSION["money"] = "";
					      		echo "Amount to Transfer: ".$money." "."BATH";  ?>
							<BR><BR>
							<?php echo '<button style = �background-color:transparent� onClick="window.top.window.toprocess()"> <b>Confirm</b> </button>'; ?>
		 </font>
	 <?php
       }
	     $_SESSION["NUM"] = "";
	 ?>
</html>
