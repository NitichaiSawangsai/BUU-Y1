<?php 
 $f="18ยอดจำนวนผู้ชม.php";
 $v=0;
	if(file_exists($f)){
		$v=file_get_contents($f);
	}else{
		$v=1000;
	}
	$v=intval($v)+1;
	$htmal_decimal=array("&#9450;","&#9312;","&#9313;","&#9314;","&#9315;",
                             "&#9316;","&#9317;","&#9318;","&#8319;","&#9320;");
	$visitor = number_format($v);
        $len = strlen($visitor);
        $counter = "";
                echo "$visitor";
            for($i=0;$i < $len;$i++){
       		$n=$visitor[$i];
		if($n!=","){
			$counter.=$html_decimal[$n];
		}else{
                        $counter.=",";
	       	}//if $i=0;$i<$len;$i++
            }//for
        echo "<div id=\"visitor\">ผู้เยี่ยมชมลำดับที่:<span>$len$counter</span></dir>";
	file_put_contents($f,$v);
     
?>
