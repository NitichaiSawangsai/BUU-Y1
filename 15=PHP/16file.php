<body>
 <?php $path = "/home/BUU/59160668/public_html/0=study_code_snippet/15=PHP";?>
<table>
<caption> รายชื่อไฟล์ใน: <?php echo $path;?></caption> 
<tr><tr> <th>ชื่อไฟล์</th> <th><th>ชนิดไฟล์</th></th> <th>ขนาด</th> </tr></tr>
<?php
	$dir = opendir($path);
	while($file = readdir($dir)){
        	if($file == "." || $file == ".."){
                	continue;
                }//if $file == "." || $file == ".."
                $file_name =$file;
                $real_path = $path."/".$file;
		$type = "dir";	
		if(is_file($real_path)){
                     $info = pathinfo($real_path);
		     $type = $info['extension'];
                }//if is_file($real_path)
  		$size = filesize($real_path);
 		if($size >= 1048576){
			$size = round($size/1048576,2)."MB";
		}else if($size >= 1024){
			$size = round ($size/1024,2)."KB";
		}
		echo "<tr><tr> <td>$file_name</td> <td><td>$type</td></td> <td>$size</td> </tr></tr>";
        }//while $file = readdir($dir)
closedir($dir);
?>
</table>
</body>
