<?php
  class User{
      private $Username;  //No
      private $Password;
      private $Status;
      private $Prefix;
      private $firstname;
      private $lastname;
      private $Email;
      private $Telephone;  //No

            public function check_login($Username,$Password){
              session_start();
              		$obj_connect = mysqli_connect("localhost","root","","mew");
              		if(!$obj_connect){
              			echo "Fail to Connect Database.";
              		}
              		if($Username == ""){
              			echo "<script>window.top.window.alertLogin(1)</script>";
              		}else if($Password == ""){
              			echo "<script>window.top.window.alertLogin(2)</script>";
              		}else{
              			$Username = $obj_connect->real_escape_string($Username);
              			$Password = $obj_connect->real_escape_string($Password);
              			$username = $Username;
              			$password = $Password;
              			$SQL 			= $obj_connect->query("select * from login where Username = '$username' and Password = '$password'");
              			$SQL1		  = $obj_connect->query("select * from person where Username = '$username' ");
              			$SQL2 		= $obj_connect->query("select * from account where Username = '$username' ");
              			$num 			= $SQL->fetch_row();
                    		$num1 = $SQL1->fetch_row();
                        $num2 = $SQL2->fetch_row();
              					if($num==NULL){
              							echo "<script>window.top.window.alertLogin(3)</script>";
              					}else{
                            $_SESSION["Username"] = $num[0];
              							$_SESSION["Status"] 	= $num[2];

                            $_SESSION["Prefix"] 	= $num1[1];
              							$_SESSION["Fname"] 		= $num1[2];
              							$_SESSION["Lname"] 		= $num1[3];
              							$_SESSION["Email"] 		= $num1[4];
              							$_SESSION["Tel"] 			= $num1[5];

              							$_SESSION["Account_num"] = $num2[1];
              							$_SESSION["Balance"] = $num2[2];

              							$_SESSION["prefixa"] = NULL;
              							$_SESSION["namea"] = NULL;
              							$_SESSION["lasta"] = NULL;
              							$_SESSION["acca"] = NULL;
              							$_SESSION["balancea"] = NULL;
              							$_SESSION["money"] = NULL;

              						session_write_close();
              					  if($num[2] == "ADMIN"){
              						        echo "<script>window.top.window.alertLogin(4)</script>";
              					  }else if($num[2] == "USER"){
              						        echo "<script>window.top.window.alertLogin(5)</script>";
              					  }
              				}
              				$obj_connect->close();
              		 }
            }
            public function transfer_money(){
              session_start();
            	date_default_timezone_set('Asia/Bangkok');
            		$objconnect = mysqli_connect("localhost","root","","mew");
            		$objSQL = $objconnect->query(" select balance from account where account_num = '".$_SESSION["Accountt"]."' ");
            		$num = $objSQL->fetch_array();
            		$Balance  = $num['balance']-$_SESSION["money"];
            		$_SESSION["balancea"] = $_SESSION["balancea"]+$_SESSION["money"];
            	session_write_close();
            		$datehis = getdate();
            		$dec = " UPDATE account SET balance='$Balance' WHERE account_num='".$_SESSION["Accountt"]."' ";
            		$in  = " UPDATE account SET balance='".$_SESSION["balancea"]."' WHERE account_num='".$_SESSION["acca"]."' ";
            		$his = " INSERT INTO history (account_num,list,amount,time,date) VALUES ('".$_SESSION["Accountt"]."','TRAN','".$_SESSION["money"]."','".$datehis["hours"].":".$datehis["minutes"].":".$datehis["seconds"]."','".$datehis["year"]."-".$datehis["mon"]."-".$datehis["mday"]."') ";
            		$SQLobj = $objconnect->query($dec);
            		$SQLobj = $objconnect->query($in);
            		$SQLobj = $objconnect->query($his);
            	echo "<script>alert('Transfer Completed.');</script>";
            		unset($_SESSION["prefixa"]);
            		unset($_SESSION["namea"]);
            		unset($_SESSION["lasta"]);
            		unset($_SESSION["acca"]);
            		unset($_SESSION["balancea"]);
            		unset($_SESSION["money"]);
            		unset($_SESSION["Accountt"]);
            	echo "<script>window.location.replace('user_page.php');</script>";
            	$objconnect->close();
            }

}
class Admin extends User {
    public function add_account (){
    }

}
?>
