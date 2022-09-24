<?php

    // 1. Create a database connection and select db
    $con = mysqli_connect("localhost","root","","controlvehicular31");

    //3. Execute the query
    $sql = "INSERT INTO oficiales VALUES ('32129','David','Cano','Cabrera','A+','https://firma')";
    $result = mysqli_query($con, $sql) or die ("Error al insertar datos".mysqli_error($con));
    
    // print $result 
    if ($result) {
        print("Registro insertado correctamente");
    }else{
        print("Registro No insertado");
    }

    // 5. Close connection
     mysqli_close($con);

?>