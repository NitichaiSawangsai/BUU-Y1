<?php function Menu_bar_USER(){ ?>
<div class="col-md-12"> <!-- แท็บเมนู -->
	<header id="topnav" class="navbar navbar-fixed-top navbar-yellow" >
		<div class="logo-area">
				<span id="trigger-sidebar" class="toolbar-trigger toolbar-icon-bg" onClick='location.replace("user_page.php")'>
						<a data-toggle="tooltips" data-placement="right" title="Toggle Sidebar">
								<span class="icon-bg"> <i><img src="../jpg/2.12.png" width="30" height="30"></i> </span>
						</a>
				</span>
							<!-- ท้ายส่วนปุ่มเมนูหลัก -->
          	 <BR> <font face = "Alien Encounters" besefont size = "4"> GUNANG BANKING  </font>
       	</div>

					<!-- ต้นคำสั่งคลิกแล้วแสดงเมนู -->
					<div class="toolbar-icon-bg hidden-xs" id="toolbar-search" ng-class="{ active: getLayoutOption('showSmallSearchBar') }">
								<div class="input-group">
										<span class="input-group-btn"><button class="btn" type="button"><i><img src="../jpg/2.png" width="30" height="30"></i></button></span>
													<input type="text" class="form-control" placeholder="     Search...">
								    </span>
								</div> <!-- ท้ายคำสั่งค้นหาข้อมูล -->
					</div>
              <ul class="nav navbar-nav pull-right toolbar">
              		<li class="dropdown ng-hide" ng-show="!isLoggedIn">
              					<a href="logout.php" style="font-size: 14px"> <i><img src="../jpg/logout.png" width="30" height="30"></i> <font face = "Alfphabet" besefont size = "3"> Log out </font></a>
						  		</li>
							</ul>
</div>   <!-- จบแท็บเมนู -->
<?php }?>
<?php function Menu_bar_ADMIN(){ ?>
	<div class="col-md-12"> <!-- แท็บเมนู -->
				<header id="topnav" class="navbar navbar-fixed-top navbar-red">
					<div class="logo-area">
						<span id="trigger-sidebar" class="toolbar-trigger toolbar-icon-bg" onClick='location.replace("admin_page.php")'>
								<a data-toggle="tooltips" data-placement="right" title="Toggle Sidebar">
										<span class="icon-bg"> <i><img src="../jpg/2.12.png" width="30" height="30"></i> </span>
								</a>
						</span>  <!-- ท้ายส่วนปุ่มเมนูหลัก -->
							 <BR> <font face = "Alien Encounters" besefont size = "4" color = "#FFFF99"> GUNANG BANKING  </font>
					</div>

						<!-- ต้นคำสั่งคลิกแล้วแสดงเมนู -->
						<div class="toolbar-icon-bg hidden-xs" id="toolbar-search" ng-class="{ active: getLayoutOption('showSmallSearchBar') }">
									<div class="input-group">
											<span class="input-group-btn"><button class="btn" type="button"><i><img src="../jpg/2.png" width="30" height="30"></i></button></span>
														<input type="text" class="form-control" placeholder="   Search...">
											</span>
									</div> <!-- ท้ายคำสั่งค้นหาข้อมูล -->
						</div>
								<ul class="nav navbar-nav pull-right toolbar">
										<li class="dropdown ng-hide" ng-show="!isLoggedIn">
													<a href="logout.php" style="font-size: 14px"> <i><img src="../jpg/logout.png" width="30" height="30"></i> <font face = "Alfphabet" besefont size = "3"> Log out </font></a>
										</li>
								</ul>
	</div>   <!-- จบแท็บเมนู -->
	<?php }?>
	<?php function Menu_USER(){ ?>
		<CENTER>
			<div class="col-md-12">  <!-- เมนูหลัก -->
						<div class="col-md-6">
							<BR>
										<div class="col-md-2">
														<a href="withdraw.php">
															<div class="btn btn-midnightblue btn-sm-body" href="withdraw.php">
																			<i><img src="../jpg/withdraw.png" width="30" height="30"></i>
																			&nbsp; ถอนเงิน
															</div>
														 </a>
										</div>
							<div class="col-md-2">
											<a href="transfer_money.php">
												<div class="btn btn-midnightblue btn-sm-body">
														 <i><img src="../jpg/transfer_money.png" width="30" height="30"></i>
															โอนเงิน
												</div>
											</a>
							</div>

								<div class="col-md-3">
											<a href="account_history.php">
												<div class="btn btn-midnightblue btn-sm-body">
														 <i><img src="../jpg/account_history.png" width="30" height="30"></i>
														 รายการถอน-ฝาก
												</div>
											</a>
								</div>

								<div class="col-md-2">
											<a href="Edit_data.php">
												<div class="btn btn-midnightblue btn-sm-body">
														 <i><img src="../jpg/Edit.png" width="30" height="30"></i>
															แก้ไขข้อมูลตัวเอง
												</div>
											</a>
								</div>
						 </div>
			</div>
			</CENTER> <BR><BR><BR><BR> <!-- จบเมนูหลัก -->
	<?php }?>
	<?php function Menu_ADMIN(){ ?>
		<div class="col-md-12">  <!-- เมนูหลัก -->
					<div class="col-md-6">
						<BR>
									<div class="col-md-2">
													<a href="withdraw.php">
														<div class="btn btn-midnightblue btn-sm-body">
																	<i><img src="../jpg/deposit.png" width="30" height="30"></i>
																	&nbsp; ฝากเงิน
														</div>
													</a>
									</div>
						<div class="col-md-3">
										<a href="Edit_data1.php">
											<div class="btn btn-midnightblue btn-sm-body">
													 <i><img src="../jpg/Edit.png" width="30" height="30"></i>
													 แก้ไขข้อมูลตัวเอง
											</div>
										</a>
						</div>

					 </div>
		</div>
		</CENTER> <BR><BR><BR><BR> <!-- จบเมนูหลัก -->
	<?php }?>
