<!DOCTYPE html>
<html lang="en">
 
<head>
    <meta charset="UTF-8">
    <title>GFG User Details</title>
    <!-- CSS FOR STYLING THE PAGE -->
    <style>
        table {
            margin: 0 auto;
            font-size: large;
            border: 1px solid black;
        }
 
        h1 {
            text-align: center;
            color: #006600;
            font-size: xx-large;
            font-family: 'Gill Sans', 'Gill Sans MT',
            ' Calibri', 'Trebuchet MS', 'sans-serif';
        }
        h2 {
            text-align: center;
            color: #006655;
            font-size: xx-large;
            font-family: 'Gill Sans', 'Gill Sans MT',
            ' Calibri', 'Trebuchet MS', 'sans-serif';
        }
 
        td {
            background-color: #E4F5D4;
            border: 1px solid black;
        }
 
        th,
        td {
            font-weight: bold;
            border: 1px solid black;
            padding: 10px;
            text-align: center;
        }
 
        td {
            font-weight: lighter;
        }
    </style>
</head>
 
<body>
    <section>
<?php
    include 'config.php';

    if(isset($_POST['uname'])){
        $uname = ($_POST['uname']);
    
        $pass = ($_POST['password']);

        $sql = "SELECT * FROM login WHERE username='$uname'  AND password='$pass'";
    
        if($result = $conn->query($sql)){
            echo "\n<h1>Logged in!</h1><br><br>";
        
            echo "\n\n\n<h2>Query : " .$sql,"<h2>";
            ?>
            <br><br>
            <center>
            <table>
            <tr>
                <th>Username</th>
                <th>Password</th>
            </tr>
            <?php
            while($rows = $result->fetch_array(MYSQLI_ASSOC)){ ?>
                <tr>
                <td><?php echo $rows['username'];?></td>
                <td><?php echo $rows['password'];?></td>              
                </tr>
                <?php
            }
            ?>
            </table>
        </center>
            <?php
        }  
    }
?>
</section>
</body>
</html>
