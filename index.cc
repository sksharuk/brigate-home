<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title></title>
	<link rel="stylesheet" href="index.css">
    
</head>

<body>
	<h1> SK SHARUK MEHETAB </h1>
	</p> I am from Purba Medinipur</p>
	<button onclick= "onClickBtn" id ="btn"> Click Me</button>
	<p id = "demo"></p>
	
	<script>
		document.getElementById('btn').onclick = onClickBtn;
		function onClickBtn(){
			document.getElementById('demo').innerHTML = Date();
		}
	</script>
    
</body>
</html>