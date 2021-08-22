<select id="select-league">
	<option value="">เลือกลีก</option>
        <?php  
        	include_once "leagues.php";
 		for($i=0;$i<count($leagues);$i++)){
                	echo "<option value=\"{$leagues[$i][0]}\">{$leagues[$i][1]}</option>";
                }
	?>
</select>

<?php
$('button#add-club').click(function() { 
        if(!isLeagieSelected()){
                alert('PPPPP');
                return;
        }
        var select = $('#select-league option:selected');
        $('#form-add-club')[0].reset();
        $('#form-add-club').dialog({
                title: 'เพิ่มสโมสรใน:: '+select.text(),width:350,modal:true,
                position:{ my:"left top", at:"left bottom", of:$(this)}
        });
        $(this).focus();
});
$('#bt-add-club-ok').click(function(){ 
        var lg = $('#select-league option:selected').val();
        $('#form-add-club [name=league]').val(lg);
        $('#form-add-club').ajaxForm({
                url:'update-club-set.php', type:'post', dataType:'script',
                beforeSend:function(){
                        $.blockUI({message:'<h3> กำลังส่งข้อมูล... </h3>'});
                },
                complete:function(){
                        $.unblockUI();
                        $('#form-add-club').dialog("close");
                        $('#select-league').change();
                }
        });
});
?>


<select id="select-league">...</select>
<button type="button" id="add-club">&laquo; เพิ่มสโมสรในลีกที่เลือก </button>
<!-- ฟอร์มต่อไปนี้จะถูกซ่อนเอาไว้ จะนำไปแสดงเมื่อเปิดไดอะล็อกเท่า่นั้น -->
<form id="form-add-club" method="post" enctype="multipart/form-data">
	<input type="text" name="club" placeholder="ชื่อสโมสร *" required>
	<input type="file" name="logo"> <br>* ภาพโลโก้ของสโมสร<br><br>
	<button type="submit" id="bt-add-club-ok">ตกลง</button>
	<input type="hidden" name="league">
</form>



<?php
$('#select-league').change(function(){
   	$('p#list-club').html('');
    	var lg = $('#select-league option:selected').val();
     	$.ajax({ url:'updata-club-get.php', type:'get', dataType:'html', data:{league:lg}, beforeSend:function(){
		$.blockUI({message:'<h3>กำลังโหลดข้อมูล...</h3>'});
     	},
     	complete:function(){
     		$.unblockUI();
        	$('#form.add-club').dialog("close");
     	}
    });
});
<div id="tab4">
    <p id="list-club"></p>
</div>


    
     }
     }
     



