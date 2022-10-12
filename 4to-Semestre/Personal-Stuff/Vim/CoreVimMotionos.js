// hjkl para moverse caracter por caracter
// i para ingresar al MODO INSERT
// kj para ingresar al MODO NORMAL 
// tambien se puede usar ESC, ctrl+c, ctrl+ [

// :w para guardar desde el MODO NORMAL

// si queremos hacer saltos palabra por palabra 
// usamaos w para adelante y b .para atras al inicio de la alabra
// usamos e para adelante y ge para atras al final de la palabra

// una palabra es un conjunto de caracteres sin espacio
// sin embargo exiten PALABRAS que combinan caracteres con . ; () {} [] etc
 
// para hacer saltos largos usamos entre PALABRAS
// utilizamos ls capitales W, B, E, gE.

// podemos usar f{caracter} para find hacia adelante y F{caracter} para find hacia atras
// NOTA: solo funciona dentro de una misma linea
// Para t (until) es lo mismo pero se detiene antes del caracter 
// importante para modificar el texto
function helloword(){


}

// find solo funcionoa ingreando un caracter pero podemos usar ;
// para repetir el ultimo find y , para repetir el ultimo find hacia atras

  let damage = weapon.damage * d20();   

// movimiento extremo HORIZONTALES
// 0:  hasta el inicio de la linea 
// ^: hasta el inicio de la linea sin contar espacios
// muy util cuando se usa TAB
// $:  hasta el final de la linea
// g_: hasta el final de la linea sin contar espacios

// NOTA : los espacios aunque no los veamos en el editor estan ahí

// movimiento extremo VERTICALES
// }: hasta el final de un parrafo (un conjunto de lineas)
// {: hasta el principio de un parrafo
// CTRL + D y CTRL: U para down y up respectivamente

// BUSCAR VERTICALMENTE

// /{palabra} para buscar hacia adelante
// ?{palabra} para buscar hacia atras
// usamos n N para movernos al siguiente match
// de la misma forma podemos usar /?ENTER para buscar
// el ultimo match
// o usar * para buscar la palabra sobre el cursor
// y # para buscar la palabra sobre el cursor hacia atras

// CONTADORES : numeros que permiten repetir acciones

// 3w para mover 3 palabras hacia adelante
// 5j para mover 5 lineas hacia abajo
// en general {numero}{accion}

// la importancia de los numeros RELATIVOS
// se usan para sab0er el numer de lineas que tenemos que movernos
// sin necesidad de hacer cuentas EXTREMAS

// gd para ir al ultimo lugar donde se modifica el documento
// gf para saltar a un archivo en un import

// gg para ir al inicio del documento
// G para ir hasta el final
// 10G para ir a la linea 10
// % para ir al parentesis que cierra el que esta sobre el cursor

// practicar search motions, repeaters, counts, and line motions jumps.