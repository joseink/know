<?php

function SetProperties($array, $onfocus = "on", $onblur = "on") {
    if (count($array) == 0)
        return "";
    if (isset($array["name"]) && !isset($array["id"])) {
        $array["id"] = $array["name"] . "ID";
    } elseif (isset($array["id"]) && !isset($array["name"])) {
        $array["name"] = $array["id"];
        $array["id"] = $array["name"] . "ID";
    }

    if ($array["popup"]) {
        $array["ondblclick"] ? $array["ondblclick"] = $array["ondblclick"] . "; " . $array["popup"] : $array["ondblclick"] = $array["popup"];
    }

    if ($array["calendar"]) {
        $array["type"] = "date";
        //$array["onblur"] .= $array["onblur"] ? '; BlurDate( this )' : 'BlurDate( this )';
        $array["onblur"] .= $array["onblur"] ? '; BlurDate( this )' : 'BlurDate( this )';
    }

    if ($array["numeric"]) {
        $array["onblur"] .= $array["onblur"] ? '; BlurMoney( this )' : 'BlurMoney( this )';
    }

    if ($array["type"]) {
        if (strtolower($array["type"]) == "decimal")
            $function = "return DecimalInput( event )";
        elseif (strtolower($array["type"]) == "alpha")
            $function = "return AlphaInput( event )";


        elseif (strtolower($array["type"]) == "time")
            $function = "return EvalTime( event, '00:00', this )";


        elseif (strtolower($array["type"]) == "numeric" || strtolower($array["type"]) == "date")
            $function = "return NumericInput( event )";
        if ($array["onkeypress"])
            $array["onkeypress"] = $array["onkeypress"] . "; " . $function;
        else
            $array["onkeypress"] = $function;
    }


    if ($onfocus == "on") {

        if ($array["calendar"])
            $calendar = "calendar";

        echo ' onfocus="this.className=\'campo_texto_on ' . $calendar . '\';';
        if ($array["onfocus"])
            echo ' ' . $array["onfocus"] . '"';
        echo '"';
    }
    else
    if ($array["onfocus"])
        echo ' onfocus="' . $array["onfocus"] . '"';

    if (strtolower($array["type"]) == "placa") {
        $array["maxlength"] = "8";
        $array["size"] = "8";
    }

    if (strtolower($array["type"]) == "time") {
        $array["maxlength"] = "5";
        $array["size"] = "4";
    }


    if ($array["type"] == "decimal")
        $array["onkeydown"] = "ValidateDecimalFormat( this ); " . $array["onkeydown"];
    //    $array["onkeyup"] = "ValidateDecimalFormat( this ); ".$array["onkeyup"];

    if ($array["<"])
        $array["onkeyup"] = "LimitNumber( '<', " . $array["<"] . ", this ); " . $array["onkeyup"];

    if ($array["<="])
        $array["onkeyup"] = "LimitNumber( '<=', " . $array["<="] . ", this ); " . $array["onkeyup"];

    if ($array["type"] == "money") {
        $array["onkeyup"] = "puntos( this,this.value.charAt( this.value.length-1 ) ); " . $array["onkeyup"];
        $array["onblur"] .= $array["onblur"] ? '; BlurMoney( this )' : 'BlurMoney( this )';
    }

    if (strtolower($array["type"]) == "time") {
        $array["onblur"] .= $array["onblur"] ? '; OnblurTime( this )' : 'OnblurTime( this )';
    }


    if ($array["limit"])
        $array["onkeyup"] = "LimitChars( this, " . $array["limit"] . " ); " . $array["onkeyup"];

    if (strtolower($array["type"]) == "placa")
        $array["onkeyup"] = "ValidatePlacaFormat( this ); " . $array["onkeyup"];
    elseif (strtolower($array["type"]) == "date") {
        $array["onkeyup"] = "CalendarFormat( this ); " . $array["onkeyup"];
    }





    $array["onblur"] = $array['type'] == 'numeric' || $array['type'] == 'decimal' ? 'BlurNumeric( this ); ' . $array["onblur"] : $array["onblur"];


    if ($array["type"] == 'container') {
        $array["onkeyup"] = $array["onkeyup"] ? 'OnkeyupContainer( this ); ' . $array["onkeyup"] : 'OnkeyupContainer( this )';
        $array["onblur"] = $array["onblur"] ? 'OnblurContainer( this );  ' . $array["onblur"] : 'OnblurContainer( this )';
        $array["size"] = '18';
        $array["maxlength"] = '17';
    }

    if ($onblur == "on") {

        if ($array["calendar"])
            $calendar = "calendar";

        echo ' onblur="this.className=\'campo_texto ' . $calendar . '\';';
        if ($array["onblur"])
            echo ' ' . $array["onblur"];
        echo '"';
    }
    else
    if ($array["onblur"])
        echo ' onblur="' . $array["onblur"] . '"';


    if ($array["onkeypress"])
        echo ' onkeypress="' . $array["onkeypress"] . '"';


    if ($array["method"])
        echo ' method="' . $array["method"] . '"';
    if ($array["action"])
        echo ' action="' . $array["action"] . '"';
    if ($array["target"])
        echo ' target="' . $array["target"] . '"';
    if ($array["enctype"])
        echo ' enctype="' . $array["enctype"] . '"';
    if ($array["multipar"])
        echo ' multipar="yes"';
    if ($array["class"])
        echo ' class="' . $array["class"] . '"';
    if ($array["name"])
        echo ' name="' . $array["name"] . '"';
    if ($array["id"])
        echo ' id="' . $array["id"] . '"';
    if ($array["value"] != '')
        echo ' value="' . $array["value"] . '"';
    //     if ( $array["width"] ) echo ' width="'.$array["width"].'"';
    if ($array["height"])
        echo ' height="' . $array["height"] . '"';
    if ($array["size"])
        echo ' size="' . $array["size"] . '"';
    if ($array["maxlength"])
        echo ' maxlength="' . $array["maxlength"] . '"';
    if ($array["rowspan"])
        echo ' rowspan="' . $array["rowspan"] . '"';
    if ($array["colspan"])
        echo ' colspan="' . $array["colspan"] . '"';
    if ($array["cols"])
        echo ' cols="' . $array["cols"] . '"';
    if ($array["rows"])
        echo ' rows="' . $array["rows"] . '"';
    if ($array["wrap"])
        echo ' wrap="' . $array["wrap"] . '"';
    if ($array["for"])
        echo ' for="' . $array["for"] . '"';
    if ($array["title"])
        echo ' title="' . $array["title"] . '"';
    if ($array["onclick"])
        echo ' onclick="' . $array["onclick"] . '"';
    if ($array["ondblclick"])
        echo ' ondblclick="' . $array["ondblclick"] . '"';
    if ($array["onchange"])
        echo ' onchange="' . $array["onchange"] . '"';
    if ($array["href"])
        echo ' href="' . $array["href"] . '"';
    if ($array["src"])
        echo ' src="' . $array["src"] . '"';
    if ($array["style"])
        echo ' style="' . $array["style"] . '"';


    if ($array["onkeyup"])
        echo ' onkeyup="' . $array["onkeyup"] . '"';
    if ($array["onkeydown"])
        echo ' onkeydown="' . $array["onkeydown"] . '"';

    if ($array["onmouseover"])
        echo ' onmouseover="' . $array["onmouseover"] . '"';
    if ($array["onmouseout"])
        echo ' onmouseout="' . $array["onmouseout"] . '"';
    if ($array["onmouseup"])
        echo ' onmouseup="' . $array["onmouseup"] . '"';
    if ($array["selected"])
        echo ' selected="selected"';
    if ($array["checked"])
        echo ' checked="checked"';
    if ($array["disabled"])
        echo ' disabled="disabled"';
    if ($array["readonly"])
        echo ' readonly="readonly"';
}

?>