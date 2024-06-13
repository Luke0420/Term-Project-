<?php
    $servername = 'localhost'; // localhost 
    $username ='root';  // root 
    $password = '';

    //connection

    try{
        $conn = new PDO("mysql:host=$servername; dbname=1A2B", $username, $password);

        $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
        echo "Connected Successfully.";
    }catch(\Exception $e)
    {
        $error_message = $e -> getMessage();
        // echo "$error_message";
    }
?>