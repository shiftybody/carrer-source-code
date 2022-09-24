<?php

    $IDVehiculo = $_GET['IDVehiculo'];
    $NIV = $_GET['NIV'];
    $Tipo = $_GET['Tipo'];
    $Marca = $_GET['Marca'];
    $SubMarca = $_GET['SubMarca'];
    $Modelo = $_GET['Modelo'];
    $NumSerieV = $_GET['NumSerieV'];
    $Clase = $_GET['Clase'];
    $TipoCarroceria = $_GET['TipoCarroceria'];
    $NumCilindros = $_GET['NumCilindros'];
    $Color = $_GET['Color'];
    $SerieMotor = $_GET['SerieMotor'];
    $CaballosFuerza = $_GET['CaballosFuerza'];
    $TipoCombustible = $_GET['TipoCombustible'];
    $Placa = $_GET['Placa'];

    // print("IDVehiculo: ".$IDVehiculo);
    // print("NIV: ".$NIV);
    // print("Tipo: ".$Tipo);
    // print("Marca: ".$Marca);
    // print("SubMarca: ".$SubMarca);
    // print("Modelo: ".$Modelo);
    // print("NumSerieV: ".$NumSerieV);
    // print("Clase: ".$Clase);
    // print("TipoCarroceria: ".$TipoCarroceria);
    // print("NumCilindros: ".$NumCilindros);
    // print("Color: ".$Color);
    // print("SerieMotor: ".$SerieMotor);
    // print("CaballosFuerza: ".$CaballosFuerza);
    // print("TipoCombustible: ".$TipoCombustible);
    // print("Placa: ".$Placa);


    $sql = "INSERT INTO vehiculos(IDVehiculo,NIV,Tipo,Marca,SubMarca,Modelo,NumSerieV,Clase,TipoCarroceria,NumCilindros,Color,SerieMotor,CaballosFuerza,TipoCombustible,Placa) VALUES ('$IDVehiculo','$NIV','$Tipo','$Marca','$SubMarca','$Modelo','$NumSerieV','$Clase','$TipoCarroceria','$NumCilindros','$Color','$SerieMotor','$CaballosFuerza','$TipoCombustible','$Placa')";
    print("<br>".$sql);

    $con = mysqli_connect("localhost","root","","controlvehicular31");
$result = mysqli_query($con, $sql) or die ("Error al insertar datos".mysqli_error($con));


if ($result) {
    print("Registro insertado correctamente");
}else{
    print("Registro No insertado");
}

mysqli_close($con);

?>