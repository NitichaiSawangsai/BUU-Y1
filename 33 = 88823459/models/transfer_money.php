<?php
include '../Controller/class/showcss.php';
include '../Controller/function/body.php';
	session_start();
		if($_SESSION['Username']==""){
			echo "Please Login!";
			exit();
		}
		if($_SESSION['Status'] != "USER"){
			echo "This page for User only!";
			exit();
		}
		$objconnect = mysqli_connect("localhost","root","","mew");
?>
<!DOCTYPE html>
<html>
    <title>GUNAUG BANKING</title>
    <?php  showcss();?>
<body>
<BR><BR><BR>
  <?php Menu_bar_USER();
        Menu_USER();
  ?>
    <div class="col-md-12">       <!-- เริ่มโชว์ด้านซ้าย -->
          <div class="col-md-4"> <!-- โชว์ข้อมูลประวัติ -->
              <div class="panel panel-teal" style="visibility: visible; opacity: 1; display: block; transform: translateY(0px);">
                  <div class="panel-heading"> <h2> <font face = "TH Sarabun New" besefont size = "5"> ประวัติส่วนตัว </font> </h2> </div>
              <div class="panel-body">
  							<font face = "Arial Unicode MS" besefont size = "3">
  									  <td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  		<font face = "Bodoni MT Black" besefont size = "3">  <?php echo "Username : "; ?> </font>
                  			<td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  			<?php echo $_SESSION["Username"];?>
              		<BR><BR>
                  		<td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  		<font face = "Bodoni MT Black" besefont size = "3">	 <?php echo "Primary Account Number : "; ?> </font>
                  			<?php echo $_SESSION["Account_num"];?>
              		<BR><BR>
                  		<td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  		<font face = "Bodoni MT Black" besefont size = "3">  <?php echo "Name : "; ?> </font>
                  			<td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  				<font face = "Arial Unicode MS" besefont size = "3"> <?php echo $_SESSION["Prefix"];?> </font>
  												<?php echo "&nbsp;&nbsp;&nbsp;".$_SESSION["Fname"]."&nbsp;&nbsp;&nbsp;&nbsp;".$_SESSION["Lname"]; ?>
                  				<td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>
              		<BR><BR>
                  		<td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                    	<font face = "Bodoni MT Black" besefont size = "3">  <?php echo "Email : "; ?> </font>
                  				<td>&nbsp;&nbsp;&nbsp;</tb>
                  		    <?php echo $_SESSION["Email"]; ?>
              		<BR><BR>
                  		<td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  		<font face = "Bodoni MT Black" besefont size = "3">	 <?php echo "Tel. : "; ?>  </font>
  										    <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                  				<?php echo $_SESSION["Tel"]; ?>
            		</font>
              </div>
             </div>  <!-- จบโชว์ข้อมูลประวัติ -->

					<div class="col-md-12">   <!-- เริ่มโชว์ด้านซ้าย -->
						<div class="col-md-6">  <!-- เริ่มปฎิทิน -->
									<script language="javascript" type="text/javascript">
											var day_of_week = new Array('Sun','Mon','Tue','Wed','Thu','Fri','Sat');
											var month_of_year = new Array('January','February','March','April','May','June','July','August','September','October','November','December');
											//  DECLARE AND INITIALIZE VARIABLES
											var Calendar = new Date();
											var year = Calendar.getFullYear();     // Returns year
											var month = Calendar.getMonth();    // Returns month (0-11)
											var today = Calendar.getDate();    // Returns day (1-31)
											var weekday = Calendar.getDay();    // Returns day (1-31)
											var DAYS_OF_WEEK = 7;    // "constant" for number of days in a week
											var DAYS_OF_MONTH = 31;    // "constant" for number of days in a month
											var cal;    // Used for printing
											Calendar.setDate(1);    // Start the calendar day at '1'
											Calendar.setMonth(month);    // Start the calendar month at now
											/* VARIABLES FOR FORMATTING
											NOTE: You can format the 'BORDER', 'BGCOLOR', 'CELLPADDING', 'BORDERCOLOR' tags to customize your caledanr's look. */
											var TR_start = '<TR>';
											var TR_end = '</TR>';
											var highlight_start = '<TD WIDTH="30"><TABLE CELLSPACING=0 BORDER=1 BGCOLOR=DEDEFF BORDERCOLOR=CCCCCC><TR><TD WIDTH=20><B><CENTER>';
											var highlight_end   = '</CENTER></TD></TR></TABLE></B>';
											var TD_start = '<TD WIDTH="30"><CENTER>';
											var TD_end = '</CENTER></TD>';
											/* BEGIN CODE FOR CALENDAR
											NOTE: You can format the 'BORDER', 'BGCOLOR', 'CELLPADDING', 'BORDERCOLOR'tags to customize your calendar's look.*/
											cal =  '<TABLE BORDER=1 CELLSPACING=0 CELLPADDING=0 BORDERCOLOR=BBBBBB><TR><TD>';
											cal += '<TABLE BORDER=0 CELLSPACING=0 CELLPADDING=2>' + TR_start;
											cal += '<TD COLSPAN="' + DAYS_OF_WEEK + '" BGCOLOR="#EFEFEF"><CENTER><B>';
											cal += month_of_year[month]  + '   ' + year + '</B>' + TD_end + TR_end;
											cal += TR_start;
											//   DO NOT EDIT BELOW THIS POINT  //
											// LOOPS FOR EACH DAY OF WEEK
											for(index=0; index < DAYS_OF_WEEK; index++) { // BOLD TODAY'S DAY OF WEEK
													if(weekday == index){
															cal += TD_start + '<B>' + day_of_week[index] + '</B>' + TD_end;  // PRINTS DAY
													}else{
															cal += TD_start + day_of_week[index] + TD_end;
													}
											 }
											 cal += TD_end + TR_end;
											 cal += TR_start;
											 // FILL IN BLANK GAPS UNTIL TODAY'S DAY
											 for(index=0; index < Calendar.getDay(); index++){
													cal += TD_start + '  ' + TD_end;
											 }
											 // LOOPS FOR EACH DAY IN CALENDAR
										for(index=0; index < DAYS_OF_MONTH; index++){
													if( Calendar.getDate() > index ){  // RETURNS THE NEXT DAY TO PRINT
															week_day =Calendar.getDay();   // START NEW ROW FOR FIRST DAY OF WEEK
															if(week_day == 0){
																cal += TR_start;
															}
															if(week_day != DAYS_OF_WEEK){    // SET VARIABLE INSIDE LOOP FOR INCREMENTING PURPOSES
																	var day  = Calendar.getDate(); // HIGHLIGHT TODAY'S DATE
																	if( today==Calendar.getDate() ){
																			cal += highlight_start + day + highlight_end + TD_end;  // PRINTS DAY
																	}else{
																			cal += TD_start + day + TD_end;
																	}
															 } // END ROW FOR LAST DAY OF WEEK
															if(week_day == DAYS_OF_WEEK){
																cal += TR_end;
															}
														}  // INCREMENTS UNTIL END OF THE MONTH
														Calendar.setDate(Calendar.getDate()+1);
											 }// end for loop
											cal += '</TD></TR></TABLE></TABLE>'; //  PRINT CALENDAR
											document.write(cal); //  End -->
								  </script>
						 </div> <!-- จบปฎิทิน -->

		         <div class="col-md-6">   <!-- เริ่ม นาฬิกา -->
				  	<BR>
							 <font face = "Broadway" besefont size = "6">
							 	<div id="css_time_run">

							 		</div>
								<script type="text/javascript" src="http://code.jquery.com/jquery-latest.min.js"></script>
								<script type="text/javascript">
									$(function(){
    							var nowDateTime=new Date();
    							var d=nowDateTime.getTime();
    							var mkHour,mkMinute,mkSecond;
     							setInterval(function(){
        							d=parseInt(d)+1000;
        							var nowDateTime=new Date(d);
        							mkHour = new String(nowDateTime.getHours());
        							if(mkHour.length==1){
            							mkHour="0"+mkHour;
        							}
        							mkMinute=new String(nowDateTime.getMinutes());
        							if(mkMinute.length==1){
            							mkMinute="0"+mkMinute;
        							}
        							mkSecond=new String(nowDateTime.getSeconds());
        							if(mkSecond.length==1){
            							mkSecond="0"+mkSecond;
        							}
        							var runDateTime=mkHour+":"+mkMinute+":"+mkSecond;
        							$("#css_time_run").html(runDateTime);
     				 			},1000);
					 	  });
					  </script>
							 </font>
						 </div> <!-- จบ นาฬิกา -->
					 </div>  <!-- จบ ปฎิทิน และ นาฬิกา-->
      </div>   <!-- จบโชว์ด้านซ้าย -->

    <form name="form1" method="post" action="account_transfes.php" target="targetf">
        <iframe id="targetf" name="targetf" src="" style="width:500;height:750;border:0px solid #fff;"></iframe>
            <div class="col-md-4">
						  <BR><BR>
                <div class="panel">
                    <div class="panel demo-lime" style="visibility: visible; opacity: 1; display: block; transform: translateY(0px);">
											<div class="panel panel-blue" style="visibility: visible; opacity: 1; display: block; transform: translateY(0px);">
			                    <div class="panel-heading">
			                         <h2> <font face = "TH Sarabun New" besefont size = "5">  โอนเงิน </font> </h2>
			                    </div>
			                </div>
                              <td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                              <input type="text"  name="transfes_account"  placeholder=" #บัญชีที่จะโอนไป" >
															<td>&nbsp;&nbsp;</tb>
                              <input type="text"  name="transfes_money"  placeholder=" #โอนเป็นเงินจำนวน" >
															<BR><BR><td>&nbsp;&nbsp;&nbsp;&nbsp;</tb>

                              <select name="account" id="account">
														    	<option value="a"><-- Please Select Account --></option>
                              			<?php
                              						$strSQL = "SELECT * FROM account WHERE Username = '".$_SESSION["Username"]."'";
                              						$objQuery = $objconnect->query($strSQL);
                              						while($objResult = mysqli_fetch_array($objQuery)){
                              			?>
                              									<option value="<?php echo $objResult['account_num'];?>">
																									<?php echo $objResult['account_num']." - ".$objResult['balance'];?>
																								</option>
									  								<?php } ?>
									  					</select>

                              <td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>
                              <input type="submit" name="Submit" value="ตกลง">
                              <td>&nbsp;&nbsp;&nbsp;</tb>
                                  <input type="button" name="Submit" value="ยกเลิก" onClick='location.replace("user_page.php")'>
                  <BR><BR>
                  		<script language="JavaScript">
                  	  		function reloadd(){
                  	  			window.location.reload();
                  	  		}
                  	  		function toprocess(){
                  					window.location.replace("transfer_process.php");
                  				}
                  	  		function display(dis){
                  						if(dis==1){
								  								document.getElementById("divj").innerHTML = "<td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>  <font color=red>  Not found This Account Number Please Tryagain.   </font> ";
															}if(dis==2){
								  								document.getElementById("divj").innerHTML = "<td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>  <font color=red>  Invaild Amount To Transfer.                      </font> ";
															}if(dis==3){
								  								document.getElementById("divj").innerHTML = "<td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>  <font color=red>  Cannot to transfer to self account!!             </font> ";
															}if(dis==4){
																	document.getElementById("divj").innerHTML = "<td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>  <font color=red>  </font> ";
														  }if(dis==5){
																	document.getElementById("divj").innerHTML = "<td>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</tb>  <font color=red>  Please Select You Account!!                      </font> ";
														  }
                  				}
											</script>
										  <script language="JavaScript">
                              document.getElementById("divj").innerHTML = "<font color=red> Account Number :  <?php echo $_SESSION["acca"]; echo "<br/> ";
							   							echo "Name : ";echo $_SESSION["prefixa"]; echo $_SESSION["namea"]; ?> <?php echo $_SESSION["lasta"];?></font>";
                  				}
                  		</script>
				  							<div id="divj"></div>
                    </div>
                </div>
             </div>
          </from>
      </div>
</body>
</html>
<?php $objconnect->close(); ?>
<?php $_SESSION['ShowEdit1']="0";?>
