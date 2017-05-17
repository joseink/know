<?php
function GetProperties( $string="" )  {
    
    if ( !$string )
       return Array();

    if (is_array( $string ) )
        return $string;

    $properties = explode( ";", $string );

    foreach( $properties as $item )    {
        $row = explode( ":", $item );
        $atribute = strtolower( trim( $row[0] ) );
        $value = $row[1];
        $array[$atribute] = $value;
    }

    return $array;
}
?>