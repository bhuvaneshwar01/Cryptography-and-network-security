<?php
    $dbhost= "localhost";
    $dbuser= "root";
    $dbpass= "";
    $dbname= "sql_injection";
    $conn = new mysqli($dbhost,$dbuser,$dbpass,$dbname);
    if($conn->connect_error){
        echo "couldnt connected to database".$conn->connect_error;
    }
?>