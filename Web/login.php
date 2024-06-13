<?php

    // start the session

    session_start();
    if($_POST)
    {
        // var_dump($_POST);

        $username = $_POST['username'];
        $password = $_POST['password'];

        include('database/connection.php');

        $query = 'SELECT * FROM Users WHERE Users.Account ="' . $username . ' " AND Users.Password="'. $password .'" LIMIT 1';  //Search in database
        $stmt = $conn->prepare($query);
        $result = $stmt->execute();

        

        if($stmt->rowCount() > 0)  // check if the data exist    // BUG 
        {
            $stmt->setFetchMode(PDO::FETCH_ASSOC);      
            $Users = $stmt->fetchAll()[0];
            $_SESSION['Users'] = $Users;

            header('Location: afterSignIn.php');   // Redirect 

        }
        else 
             $error_message = "Please make sure user name and password are correct";
       
    }

?>

<!DOCTYPE html>
<html lang = "eng">
    <head>
        <title>
            The Guessing Game
        </title>

        <link rel="stylesheet" type = "text/css" href = "css/login.css"> 
        
    </head>

    <body>

        <div> <?php

        if(!empty($error_message))     //display error message if it's not empty 
            echo "Error: $error_message";
        
        ?></div>
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
                    <button>Login</button>
                </div>

            </form>

            </div>

        </div>
    </body>
</html>