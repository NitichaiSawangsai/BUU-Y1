<?php
$(function(){
   $(' #tabs').tabs({ active: 0});
   $(' #tabs a').click(function(event)){
        window.location
   });
}
?>

<div id="tabs">
<ul>
   <li><a href="#tab1">อัพเดพโปรแกรมการแข่งขัน<a></li>
   <!-- เมื่อคลิกแท็บใดต่อไปนี้ ให่้เปิดไปที่เพจที่ระบุไว้ที่ <a> -->
   <li><a href="update-result.php">อัปเดตผลการแข่งขัน</a></li>
   <li><a href="updata-new-season.php">อัปเดตฤดูกาลใหม่</a></li>
   <!-- กำหนดเฉพาะเนื้อหาของ #tab1 ส่วนเนื้อหาของแท็บอื่นๆจะกำหนดที่เพจอื่น -->
   <div id="tab1">...</div>
 </ul>
</dir>
