<?php
echo "เบราเซอร์ผู้ใช้ : ".$_SERVER['HTTP_USER_AGENT']."<br>";
echo "ชื่อโฮสต์ที่รันกับเซิร์ฟเวอร์ : ".$_SERVER['HTTP_HOST']."<br>";
echo "IP Address ของเครื่องเซร์เซิร์ฟเวอร์ : ".$_SERVER['REMOTE_ADDR']."<br>";
echo "กำลังเปิด : ".$_SERVER['SCRIPT_FILENAME']."<br>";
echo "เมธอดใช้ในส่งข้อมูลของผู้ใช้ : ".$_SERVER['REQUEST_METHOD']."<br>";
echo "เว็บที่เปิดในขณะนี้ : ".$_SERVER['PHP_SELF']."<br><br><br>";


date_default_timezone_set('Asia/Bangkok');
echo "Nitichai Sawangsai <br> ";
echo "วันเวลาปัจจุบัน: ".date('Y/m/d H:i')."<br>";
$datetime_compare = "2017/07/26 14:13";
$ts = strtotime($datetime_compare);
$now = strtotime ('now');
	if (!$ts||$ts>$now){
            exit;
        }//if !$ts||$ts>$now
	$diff =$now-$ts;
 	$second = 1;
	$minute = 60*$second;
        $hour = 60*$minute;
        $day = 24*$hour;
	$yesterday = 48*$hour;
        $month = 30*$day;
$year = 365*$day;
$ago="";
	if($diff>=$year){
		$ago=round($diff/$year)."ปีที่แล้ว";
	}else if($diff>=$month){
           	$ago=round($diff/$month)."เดือนที่แล้ว";
	}
        else if ($diff >$yesterday){
	   	$ago=intval($diff/$day)."วันที่แล้ว";
	}
        else if ($diff <= $yesterday && $diff > $day ){
		$ago="เมื่อวานนี้";
        }
        else if ($diff>=$hour){
                $ago=intval($diff/$hour)."ชั่วโมงที่แล้ว";
        }
        else if ($diff>=$minute){
                $ago=intval($diff/$minute)."นาทีที่แล้ว";
        }
        else if ($diff>=(5*$second)){
                $ago=intval($diff/$second)."วินาทีที่แล้ว";
        }else{
		$ago="เมื่อสักครู่";
	}
       echo "วันเวลาที่โพสต์: $datetime_compare &raquo: ";
       echo "<span>$ago</span>";     
?>
