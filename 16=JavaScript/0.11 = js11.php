<html>
<head>
<style>
div.img {
    margin: 5px;
    padding: 5px;  //ระยะห่างของรูปภาพ ภายในกรอบ
    border: 1px solid #0000ff;  //ความหนาและสีของเส้นกรอบ
    height: auto;  //ความสูง ตั้งอัตโนมัติ
    width: auto;  //ความกว้างตั้งอัตโนมัติ
    float: left;  //จัดให้ชิดซ้าย
    text-align: center;  //จัดรูปภาพให้อยู่ตรงกลาง
}   
div.img a:hover img {       //เมื่อเอาเมาส์ไปวางภาพจะขยาย
    border: 1px solid #0000ff;
}
div.desc {
  text-align: center;        //จัดข้อความให้อยู่ตรงกลาง
  font-weight: normal;     //ขนาดตัวหนังสือ
  width: 120px;        //ความกว้างตัวอักษร
  margin: 5px;        //ระยะห่างของข้อความทั้งสี่ด้าน
}
</style>
</head>
<body>
<div class="img">
 <a target="_blank" /*href="klematis_big.htm"*/><img src="Check.png" alt="Klematis" width="110" height="90"></a>         //ส่วนของรูปภาพ
<div class="desc">ดูภาพขนาดใหญ่</div>       // ส่วนของข้อความ
</div>
</body>
</html>
