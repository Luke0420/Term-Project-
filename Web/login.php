<?php

    // start the session

    session_start();
    if($_POST)
    {
        var_dump($_POST); // Get things user submit 

        $username = $_POST['username'];
        $password = $_POST['password'];

        include('database/connection.php');
        
        $query = 'SELECT * FROM Users WHERE Users.Account="'. $username .'" AND Users.password="'. $password .'"';  //Unable to select corresponding
        $stmt = $conn->prepare($query);
        $stmt ->execute();

 
        var_dump($stmt->rowCount());
        die;

    
        
    }

?>

<!DOCTYPE html>
<html lang = "eng">
    <head>
        <title>
            The Guessing Game
        </title>

        <link rel="stylesheet" type = "text/css" href = "css/signin.css">    

    </head>

    <body>

        <div class = "error"> <?php

        if(!empty($error_message))     //display error message if it's not empty 
            echo "Error: $error_message";
        
        ?>
        </div>
        <div class = "Whole">

            <div class = "loginHeader">
                <h1>WELCOME TO THE GUESSING GAME</h1>
                <hr>
            </div>

            <div class = "loginBody">

                <form action = "login.php" method = "POST" class = "form">
                <div>
                    <label for ="username" > Username</label>
                    <input name = "username" type = "text" id = "username" >
                </div>

                <div>
                    <label for="password">Password</label>
                    <input name = "password" type="password" id = "password">
                </div>

                <div>
                    <button id = "loginButton">Login</button>
                </div>

                <div>
                    <button id = "registerButton">Register</button>
                    <button id = "returnHome"> Home Page</button>
                </div>

            </form>

            </div>

        </div>
    </body>
</html>