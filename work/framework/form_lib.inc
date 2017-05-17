<?php
/**************************************************************************************************************/
/*********En esta Librer? se Especifican Clases tiles para la creaci? de formularios html*******************/
/**************************************************************************************************************/

/*La clase Formulario permite la implementaci? de formularios html*********************************************/
class Formulario
{
    //Atributos
    var $titulo,//titulo del formulario
        $accion,//archivo al que se dirige
        $metodo,//metodo de envio
        $nombre,//nombre del formulario
        $ancho,//ancho en px de la tabla de formulario
        $jscript;//llamadas a eventos y demas codigo javaScritp
    //Metodos

    function Formulario($ac = "index.php", $me = "post", $ti = "Formulario", $no = "form", $bl = "_self", $en = 0, $an = "95%", $js = 0)//Constructor de la clase
    {
        $this -> titulo = $ti;
        $this -> accion = $ac;
        $this -> metodo = $me;
        $this -> nombre = $no;
        $this -> jscript = $js;
        $this -> ancho = $an;
        echo "<script language=\"JavaScript\" src=\"../".DIR_APLICA_CENTRAL."/js/byexample.js\"></script>\n";


        echo '<table width="100%" align="center" border="0" cellpadding="0" cellspacing="0">';
        echo "\n  ";
        echo '<tr>';
        echo "\n  ";
        echo '<td id="MenubarID" class="Menubar" onclick="ShowMenu( \'bar\' );">';
        echo "&nbsp;";
        echo '</td>';

        echo "\n  ";
        echo '<td width="">';

        echo "\n";
        echo "\n";
        echo "\n";
        echo '<div class="StyleAppDIV" id="AppDIV">';

        echo "<table border=\"0\" width=\"100%\" cellspacing=\"0\" cellpadding=\"0\" style='padding: 0; margin: 0;'>
               
               <tr>
               <td align=\"center\" class='celda_titulo2'>
                 <b>" . $this -> titulo . "&nbsp;</b>
               </td>
               </tr>
               <tr>
                <td align=\"center\" valign=\"middle\">
                 <form name =\"$no\" method =\"$me\" action =\"$ac\" target=\"$bl\"";

        if($en)
            echo " enctype=\"$en\" ";

        if($js)
            echo " $js ";

        echo ">
                  <table cellpadding=\"0\" cellspacing=\"0\" width=\"100%\">
                   <tr>\n";

    }
                                               //003399
    function cerrar()
    {
        echo "      </tr>
                   </table>
                  </form>
                </td>
                <!--<td background=\"../".DIR_APLICA_CENTRAL."/imagenes/form_der.gif\"></td>-->
               </tr>
               <!--<tr>
                <td background=\"../".DIR_APLICA_CENTRAL."/imagenes/form_inf_izq.gif\"></td>
                <td background=\"../".DIR_APLICA_CENTRAL."/imagenes/form_inf.gif\" height=\"25\" align=\"right\" valign=\"middle\" border=\"0\"><b>" . $this -> titulo . "&nbsp;</b></td>
                <td background=\"../".DIR_APLICA_CENTRAL."/imagenes/form_inf_der.gif\"></td>
               </tr>-->
              </table>";

        echo "\n";
        echo "\n";
        echo "\n";
        echo '</div>';
        echo "\n";

        echo "\n    ";
        echo '</td>';
        echo "\n  ";
        echo '</tr>';
        echo "\n";
        echo '</table>';

        echo "\n";
        echo "\n";
        echo '<script language="javascript">
                $(document).ready(function(){
                    ShowMenu( \'load\' );    
                });
              </script>';

        echo "\n              ";
        echo "\n              ";
        echo '<div id="AplicationEndDIV"></div>';

        echo "\n              ";
        echo "\n              ";
        echo '<div id="RyuCalendarDIV" style="position: absolute; background: white; left: 0px; top: 0px; z-index: 3; display: none; border: 1px solid black; "></div>';

        echo "\n              ";
        echo "\n              ";
        echo '<div id="popupDIV" style="position: absolute; left: 0px; top: 0px; width: 300px; height: 300px; z-index: 3; visibility: hidden; overflow: auto; border: 1px solid black; background: white; "></div>';


    }

    function nueva_tabla( $id = "")
    {

       echo "    </tr>
                 </table>
                 <table cellpadding=\"0\" cellspacing=\"0\" width=\"100%\" class=\"formulario\" border=\"0\" id=\"$id\" >
                  <tr>\n";

    }

    function espacio($alt = "10")
    {
            echo "</tr>\n<tr>\n<td height=\"".$alt."\"></td>\n</tr>\n<tr>";

    }

   function archivo($et, $no, $an, $mc, $js, $sl)
    {
        $archivo = new Form_archivo($et, $no, $an, $mc, $js, $sl);
    }

     function texto($et, $ti, $no, $sl, $an, $al, $wr, $vi, $scrp = '')
    {
        $texto = new Form_texto($et, $ti, $no, $sl, $an, $al, $wr, $vi, $scrp);
    }

    function boton($et, $ti, $sl)
    {
        $boton = new Form_boton($et, $ti, $sl);
    }

    function oculto($no, $va, $sl)
    {
        $oculto = new Form_oculto($no, $va, $sl);
    }

    function radio($et, $no, $va, $ei, $sl)
    {
        $radio = new Form_radio($et, $no, $va, $ei, $sl);
    }

    function lista($et, $no, $va, $sl)
    {
        $linea = new Form_lista($et, $no, $va, $sl);
    }
    function lista_titulo($et=NULL, $no=NULL, $va=NULL, $sl=NULL, $mu=NULL)
    {
        $linea = new Form_lista_titulo($et, $no, $va, $sl, $mu);
    }
    function linea($te, $sl, $an = 0, $est=NULL, $color=NULL, $id=NULL)
    {
        $linea = new Form_linea($te, $sl, $an, $est, $color, $id);
    }

    function caja($et, $no, $va, $ei, $sl)
    {
        $caja = new Form_caja($et, $no, $va, $ei, $sl);
    }
    function imagen($et, $ar, $ta, $an, $al, $bo, $js, $sl, $in=0)
    {
        $caja = new Form_imagen($et, $ar, $ta, $an, $al, $bo, $js, $sl, $in);
    }
    function botoni($et=NUL, $js=NULL, $sl=NULL, $me=NULL)
    {
        $botoni = new Form_botoni($et, $js, $sl, $me);
    }
    function fecha_calendar($et, $no, $fo, $vi, $ti, $sl, $as = 0, $ob = 0)
    {
        $fecha_calendar = new Form_fecha_calendar($et, $no, $fo, $vi, $ti, $sl, $as, $ob);
    }
}

class Form_fecha_calendar
{
    var $etiqueta,
        $nombre,
        $formulario,
        $val_inicial,
        $tip_formato,
        $salto_linea,
        $obligatorio;

    function  Form_fecha_calendar($et, $no, $fo, $vi, $ti, $sl, $as, $ob)

    {

        $this -> etiqueta = $et;

        $this -> nombre = $no;

        $this -> formulario = $fo;

        $this -> val_inicial = $vi;

        $this -> tip_formato = $ti;

        $this -> salto_linea = $sl;

        $this -> obligatorio = $ob;

        if($ob)
         $textobliga = "*";

        if($as)
         $aplica_submit = " onChange=\"".$fo.".submit()\"";
        else
         $aplica_submit = NULL;

        echo "<script language=\"javascript\" src=\"../".DIR_APLICA_CENTRAL."/js/dhtmlgoodies_calendar.js\"></script>";
        echo "<td align=\"right\" class=\"celda_titulo\">\n$textobliga $et\n</td>\n<td class=\"celda_info\">\n";

        echo "<input CLASS=\"campo_texto\" type=\"text\" readonly name=\"".$no."\" value=\"".$vi."\"".$aplica_submit.">
              <input type=\"button\" value=\"...\" onclick=\"displayCalendar(".$fo.".".$no.",'".$ti."',this,true)\">
             ";

        echo "</td>";

        if($sl)
            printf("</tr>\n<tr>\n");

    }
}

class Form_archivo
{
    //Atributos
    var $etiqueta,//etiqueta que va a tener el campo de archivo
        $nombre,//nombre que tomera el archivo al ser subido
        $ancho,//ancho del campo de bsqueda
        $max_caracteres,//m?imo nmero de caracteres de la ruta del archivo
        $jscript,//llamadas a eventos y demas codigo javaScritp
        $salto_linea;//si esta en 1 indica que se debe cerrar la fila y abrir una nueva

    //Metodos
    function Form_archivo($et, $no, $an, $mc, $js, $sl)
    {
        $this -> etiqueta = $et;
        $this -> nombre = $no;
        $this -> ancho = $an;
        $this -> max_caracteres = $mc;
        $this -> jscript = $js;
        $this -> salto_linea = $sl;

        echo "     <td class=\"etiqueta\" align=\"right\"><font size = \"1\">$et</td>
                   <td><input type=\"file\" name=\"$no\" size=\"$an\" maxlength=\"$mc\"";
        if($js)
            echo " $js ";
        echo "></td>\n";
        if($sl)
            echo "    </tr>
                      <tr>\n";
    }
}

class Form_texto
{
    //Atributos
    var $etiqueta,//titulo descriptivo del campo
        $tipo,//puede ser text, password, textarea.
        $salto_linea,//si esta en 1 indica que se debe cerrar la fila y abrir una nueva
        $ancho,//ancho de un campo de texto
        $alto,//alto de un textarea o m?imo de caracteres de un text
        $wrap,//Solo se utiliza si $tipo es textarea y puede ser OFF, VIRTUAL, PHYSICAL
        $nombre,//nombre del campo
        $scrp,//busqueda
        $val_inicial;//valor inicial

    //Metodos
    function  Form_texto($et = "Texto", $ti = "text", $no = "texto", $sl = 0, $an = "10", $al = "10", $wr = "OFF", $vi = "", $scrp = "")
    {
        $this -> etiqueta = $et;
        $this -> tipo = $ti;
        $this -> salto_linea = $sl;
        $this -> ancho = $an;
        $this -> alto = $al;
        $this -> wrap = $wr;
        $this -> nombre = $no;
        $this -> val_inicial = $vi;
        $this -> scrp = $scrp;
        echo "<td align=\"right\" class=\"celda_titulo\">\n$et\n</td>\n<td class=\"celda\">\n";
        if($ti == "textarea")
        {
            echo "<textarea name=\"$no\" cols=\"$an\" rows=\"$al\" wrap=\"$wr\">$vi</textarea>";
        }
        else
        {
            printf("<input type=\"%s\" name=\"%s\" size=\"%s\" value=\"%s\" maxlength=\"%s\">\n", $ti, $no, $an, $vi, $al);
        }
        if($this -> scrp)
        {
           $datos = explode(';', $this -> scrp);
           echo "<script language=\"javascript\" src=\"../".DIR_APLICA_CENTRAL."/js/pagina_hija.js\"></script>";
           echo "<a href=\"#\" onClick=\"hija('', '', '".$datos[2]."', '".$datos[0].";".$datos[3].";".$datos[4].";".$datos[5]."','".$GLOBALS["cod_servic"]."', '".BASE_DATOS."', 'b', '350', '".$datos[1]."')\"><img src=\"../".DIR_APLICA_CENTRAL."/imagenes/botone/puntos.gif\" border=\"0\" alt=\"buscar\"></a>";
        }
        printf("</td>\n");
        if($sl)
            printf("</tr>\n<tr>\n");
    }
}

class Form_boton
{
    var $etiqueta,//la etiqueta del boton
    //Atributos
        $tipo,//typo del boton submit, reset o button
        $salto_linea;//si esta en 1 indica que se debe cerrar la fila y abrir una nueva
    //Metodos
    function Form_boton($et = "Boton", $ti = "button", $sl = 0)
    {
        $this -> etiqueta = $et;
        $this -> tipo = $ti;
        $this -> salto_linea = $sl;
        printf("<td align=\"center\">\n<input class= \"bot\" type=\"%s\" name=\"%s\" value=\"%s\">\n</td>\n", $ti, $et, $et);
        if($sl)
            printf("</tr>\n<tr>\n");
    }
}

class Form_caja
{
    //Atributos
    var $etiqueta,//Etiqueta que va a identificar el boton
        $nombre,//nombre de la variable
        $valores,//valor que tomera la variable al checar esta caja
        $estado_inicial,//estado inicial 1 se?lado, 0 sin se?lar
        $salto_linea;//si esta en 1 indica que se debe cerrar la fila y abrir una nueva
    //Metodos
    function Form_caja($et = "check", $no = "check", $va = "on", $ei = 0, $sl = 0)
    {
        $this -> etiqueta = $et;
        $this -> nombre = $no;
        $this -> valores = $va;
        $this -> estado_inicial = $ei;
        $this -> salto_linea = $sl;
        echo "<td align=\"right\" class=\"celda_titulo\">\n$et\n</td>\n<td class=\"celda\">\n<input type=\"checkbox\" name=\"$no\" value=\"$va\"";
        if($ei)
            echo "checked";
        echo ">\n</td>\n";
        if($sl)
            echo "</tr>\n<tr>\n";
    }
}
class Form_radio//cr4ea un conjunto de radio buttons
{
    //Atributos
    var $etiqueta,//Etiqueta que va a identificar el boton
        $nombre,//nombre de la variable
        $valores,//valor que tomera la variable al checar este radio button
        $estado_inicial,//estado inicial 1 se?lado, 0 sin se?lar
        $salto_linea;//si esta en 1 indica que se debe cerrar la fila y abrir una nueva
    //Metodos
    function Form_radio($et = "radiobutton", $no = "radiobutton", $va = "radiobutton", $ei = 0, $sl = 0)
    {
        $this -> etiqueta = $et;
        $this -> nombre = $no;
        $this -> valores = $va;
        $this -> estado_inicial = $ei;
        $this -> salto_linea = $sl;
        printf("<td align=\"right\" class=\"etiqueta\">\n%s\n</td>\n<td class=\"celda\">\n<input type=\"radio\" name=\"%s\" value=\"%s\" ", $et, $no, $va);
        if($ei)
            printf("checked");
        printf(">\n</td>\n");
        if($sl)
            printf("</tr>\n<tr>\n");
    }
}

class Form_lista
{
    //Atributos
    var $etiqueta,//etiqueta que va a tener el menu
        $nombre,//nombre que va a tomar al variable que representa este menu
        $valores,//vector que contiene los valores que va a tomar la lista en el vector va[i][0] los value y en el va[i][1] los textos que se van a mostrar en la lista
        $salto_linea;//si esta en 1 indica que se debe cerrar la fila y abrir una nueva

    //Metodos
    function Form_lista($et, $no, $va, $sl)
    {
        $this -> etiqueta = $et;
        $this -> nombre = $no;
        $this -> valores = $va;
        $this -> salto_linea = $sl;

        echo "<td align=\"right\" class=\"celda_titulo\">\n$et\n</td>\n<td class=\"celda\">\n<select name=\"$no\"";
        echo " onKeypress=buscar_op(this) onblur=borrar_buffer() onclick=borrar_buffer() ";
        echo ">\n";
        $n = sizeof($va);

        for($i = 0; $i < $n; $i++)
        {
            printf("<option value=\"%s\">%s</option>\n", $va[$i][0], $va[$i][1]);
        }
        printf("</select>\n</td>\n");
        if($sl)
            printf("</tr>\n<tr>\n");
    }
}
class Form_lista_titulo
{
    //Atributos
    var $etiqueta,//etiqueta que va a tener el menu
        $nombre,//nombre que va a tomar al variable que representa este menu
        $valores,//vector que contiene los valores que va a tomar la lista en el vector va[i][0] los value y en el va[i][1] los textos que se van a mostrar en la lista
        $salto_linea,//si esta en 1 indica que se debe cerrar la fila y abrir una nueva
        $multiple; // si esta en 1 indica que la lista es multiple
    //Metodos
    function Form_lista_titulo($et, $no, $va, $sl, $mu)
    {
        $this -> etiqueta = $et;
        $this -> nombre = $no;
        $this -> valores = $va;
        $this -> salto_linea = $sl;
        $this -> multiple = $mu;
        if($mu)
        printf("<td class=\"celda\">\n<select name=\"%s\" multiple='multiple' size='12'>\n",$no);
        else
        printf("<td class=\"celda\">\n<select name=\"%s\">\n",$no);
        
        $n = sizeof($va);

        for($i = 0; $i < $n; $i++)
        {
            printf("<option value=\"%s\">%s</option>\n", $va[$i][0], $va[$i][1]);
        }
        printf("</select>\n</td>\n");
        if($sl)
            printf("</tr>\n<tr>\n");
    }
}

class Form_oculto
{
    //Atributos
    var $nombre,//nombre del campo oculto
        $valor,//valor que tomara el campo oculto
        $salto_linea;//si esta en 1 indica que se debe cerrar la fila y abrir una nueva

    //Metodos
    function Form_oculto($no = "hidden", $va = "hidden", $sl = 0)
    {
        $this -> nombre = $no;
        $this -> valor = $va;
        $this -> salto_linea = $sl;
        printf("<input type=\"hidden\" name=\"%s\" value=\"%s\">\n", $no, $va);
        if($sl)
            printf("</tr>\n<tr>\n");
    }
}
class Form_imagen
{
    //Atributos
    var $etiqueta,//la etiqueta del boton
        $archivo,//ruta para el archivo de la imagen
        $texto_alterno,//texto alterno para la imagen
        $ancho,//ancho de la imagen
        $alto,//alto de la imagen
        $borde,//borde de la imagen
        $jscript,//llamadas a eventos y demas codigo javaScritp
        $salto_linea,//si esta en 1 indica que se debe cerrar la fila y abrir una nueva
        $tab_index;//indica el indice del objeto en el formulario

    //Metodos
    function Form_imagen($et, $ar, $ta, $an, $al, $bo, $js, $sl, $in)
    {
        $this -> etiqueta = $et;
        $this -> archivo = $ar;
        $this -> texto_alterno = $ta;
        $this -> ancho = $an;
        $this -> alto = $al;
        $this -> borde = $bo;
        $this -> jscript = $js;
        $this -> salto_linea = $sl;
        $this -> tab_index = $in;

        echo "     <td align=\"center\"><input type=\"image\" name=\"$et\" src=\"$ar\" alt=\"$ta\" width=\"$an\" height=\"$al\" border=\"$bo\"";
        if($in)
            echo " tabindex=$in ";
        if($js)
            echo " $js ";
        echo " ></td>\n";
        if($sl)
            echo "    </tr>
                      <tr>\n";
    }
}

class Form_linea
{
    //Atributos
    var $texto,//texto que va a contener la linea
        $sl,//si esta en 1 indica que se debe cerrar la fila y abrir una nueva
        $color,
        $est,
        $an; //ancho
    //Metodos
    function Form_linea($te, $sl, $an, $est=NULL, $color=NULL, $id=NULL)
    {
     switch($est)
     {
      case "t":
           $estilo_et = "celda_titulo";
           break;

      case "t2":
           $estilo_et = "celda_titulo2";
           break;

      case "h":
           $estilo_et = "header";
           break;

      case "e":
           $estilo_et = "celda_error";
           break;

      case "a":
           $estilo_et = "celda_aproba";
            break;

      case "ie":
            $estilo_et = "celda_error_relleno";
            break;

      case "iu":
            $estilo_et = "celda_urban_relleno";
            break;

      case "in":
            $estilo_et = "celda_ultim_relleno";
            break;

      case "c":
            $estilo_et = "celda";
            break;

      case "c2":
            $estilo_et = "celda2";
            break;

      case "i":
            $estilo_et = "celda_info";
            break;

      default:
            $estilo_et = "celda_etiqueta";
            break;
     }

     echo "\n<td class=\"$estilo_et\"";
     if($color)
        echo " style =\"background-color:".$color.";\"";
     if($id)
        echo " id =\"".$id."\"";

        if($an)
           echo " width=\"$an\"";
        echo ">\n<b>$te</b></td>\n";
        if($sl)
            printf("</tr>\n<tr>\n");
    }
}

class Form_botoni
{
    var $etiqueta,//la etiqueta del boton
    //Atributos
        $onClick,//Inclusi? de Javascript
        $mens,//Mensaje cuando pone el mouse encima del boton
        $salto_linea;//si esta en 1 indica que se debe cerrar la fila y abrir una nueva
    //Metodos
    function Form_botoni($et = "aceptar",$oc=NULL, $sl = 0,$me=NULL)
    {
        $this -> etiqueta = strtolower($et);
        $this -> onClick = $oc;
        $this -> mens = $me;
        $this -> salto_linea = $sl;
        $im = "../".DIR_APLICA_CENTRAL."/imagenes/botone/".$this -> etiqueta.".gif";
        if(($this -> etiqueta != "aceptar") && ($this -> etiqueta != ""))
        {
                if(!file_exists($im))
                        $im = "../".DIR_APLICA_CENTRAL."/imagenes/botone/aceptar.gif";
        }
        echo "<td align=\"center\">\n";
            echo '<input id="soportSpgID" onclick="'.$this -> onClick.'" class="button_enviar" value="'.ucfirst($et).'" type="button">';
        #echo "<a class=\"enlace\" href=\"#\" onMouseOver=\"this.style.cursor='hand'\" onClick=\"".$this -> onClick."\">\n";
        #echo "<img src=\"".$im."\" border=\"0\" alt=\"".$this -> mens."\">\n";
        #echo "</a>\n";
        echo "</td>\n";
        //echo "<img alt=\"".$this -> mens."\" src=\"".$im."\" onMouseOver=\"this.style.cursor='hand'\" onClick=\"".$this -> onClick."\">\n</td>\n";
        if($sl)
            printf("</tr>\n<tr>\n");
    }
}
/******* desde aqui lo nuevo 20081119*******************************************************/

//--------------------------------------------------------------------------------------------------------------------------------


Class Form  {

    function Form( $properties="", $ajax="", $hidden=false ) {
        $this->browser = $this->Browser();
 //       $properties = $this->GetProperties( $properties, "off", "off" );

        $properties = $this->GetProperties( $properties );

        if ( !$ajax )
        {

            echo "\n";



            echo '<table width="100%" align="center" border="0" cellpadding="0" cellspacing="0">';
            echo "\n  ";
            echo '<tr>';
            echo "\n  ";
            echo '<td id="MenubarID" class="Menubar" onclick="ShowMenu( \'bar\' );">';
            echo "&nbsp;";

            echo '</td>';

            echo "\n  ";
            echo '<td width="">';

            echo "\n";
            echo "\n";
            echo "\n";
            echo '<div class="StyleAppDIV" id="AppDIV">';
            echo "\n";
            echo "\n";
            echo "\n  ";

            echo "\n";
            echo "\n                    ";

            echo '<form';
            $this->SetProperties( $properties, "off", "off" );
            echo '>';

        }

        if(!$hidden){
            echo "\n";
            echo "\n";
            echo '<table width="100%" cellpadding="0" cellspacing="0" class="formulario">';
        }

        

    }

    function CloseForm()
    {

        echo "\n";
        echo "</table>";

        echo "\n";
        echo "\n                    ";
        echo "</form>";
        echo "\n                  ";


        echo "\n";
        echo "\n";
        echo "\n";
        echo '</div>';
        echo "\n";

        echo "\n    ";
        echo '</td>';
        echo "\n  ";
        echo '</tr>';
        echo "\n";
        echo '</table>';

        echo "\n";
        echo "\n";
        echo '<script language="javascript">
                $(document).ready(function(){
                    ShowMenu( \'load\' );    
                });
              </script>';

        echo "\n              ";
        echo "\n              ";
        echo '<div id="AplicationEndDIV"></div>';

        echo "\n              ";
        echo "\n              ";
        echo '<div id="RyuCalendarDIV" style="position: absolute; background: white; left: 0px; top: 0px; z-index: 3; display: none; border: 1px solid black; "></div>';

        echo "\n              ";
        echo "\n              ";
        echo '<div id="popupDIV" style="display: none;"></div>';
        /*echo '<div id="popupDIV" style="position: absolute; left: 0px; top: 0px; width: 300px; height: 300px; z-index: 3; visibility: hidden; overflow: auto; border: 1px solid black; background: white; "></div>';*/
        
        

        /*
        echo "\n              ";
        echo "\n            ";
        echo '</td>';
        echo "\n          ";
        echo '</tr>';

*/


    }


    function Column()  {
        echo "\n      ";
        echo '<td>';
    }

    function CloseColumn()  {
        echo "\n      ";
        echo '</td>';
    }


    function Row( $td="" )  {
        echo "\n  ";
        echo '<tr>';
        if ( $td ) {
            echo "\n    ";
            echo '<td>';
        }
    }


    function CloseRow( $td="" )  {
        if ( $td ) {
            echo "\n    ";
            echo '</td>';
        }
        echo "\n  ";
        echo '</tr>';
    }

    function Table( $tr1="", $tr2="" )    {
        if ( !$tr1 ){
            echo "\n  ";
            echo '<tr>';
            echo "\n  ";
            echo '<td align="center" width="100%">';
        }
        echo "\n  ";
        echo '<table width="100%" align="center" cellpadding="3" cellspacing="0" border="0">';
        if ( !$tr2 ){
            echo "\n    ";
            echo '<tr>';
        }
    }

    function CloseTable( $tr1="", $tr2="" )    {
        if ( !$tr2 ){
            echo "\n    ";
            echo '</tr>';
        }
        echo "\n  ";
        echo '</table>';
        if ( !$tr1 ){
            echo "\n  ";
            echo '</td>';
            echo "\n  ";
            echo '</tr>';
        }
    }



    function Browser() {
        if ( stristr( $_SERVER['HTTP_USER_AGENT'], "MSIE" ) ) return "Explorer";
        if ( stristr( $_SERVER['HTTP_USER_AGENT'], "Firefox" ) ) return "Firefox";
    }


    function Alert( $string="alert() desde Javascript." )  {
       echo "\n  ";
       echo '<script language="javascript">';
       echo "alert( '$string' );";
       echo '</script>';
    }


    function Javascript( $string )  {
       echo "\n  ";
       echo '<script language="javascript">';
       echo $string;
       echo '</script>';
    }

    function Javascript_URL( $string )  {
       echo "\n  ";
       echo '<script language="javascript" src="' . $string . '"></script>';
    }
 /*
    function GetProperties( $string="" )  {
        if ( !$string )
           return Array();
        $properties = explode( ";", $string );
        foreach( $properties as $item )    {
            $row = split( ":", $item );
            $atribute = strtolower( trim( $row[0] ) );
            $value = $row[1];
            $array[$atribute] = $value;
        }
        return $array;
    }
*/

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



    function SetProperties( $array, $onfocus="on", $onblur="on" )    {
        if ( count( $array )==0 )
           return "";
        if ( isset( $array["name"] ) && !isset( $array["id"] ) )   {
           $array["id"] = $array["name"]."ID";
        }
        elseif ( isset( $array["id"] ) && !isset( $array["name"] ) )   {
           $array["name"] = $array["id"];
           $array["id"] = $array["name"]."ID";
        }

        if ( $array["popup"] )  {
            $array["ondblclick"] ? $array["ondblclick"] = $array["ondblclick"]."; ".$array["popup"] : $array["ondblclick"] = $array["popup"];
        }

        if ( $array["calendar"] )
        {
           $array["type"] = "date";
           //$array["onblur"] .= $array["onblur"] ? '; BlurDate( this )' : 'BlurDate( this )';
           $array["onblur"] .= $array["onblur"] ? '; BlurDate( this )' : 'BlurDate( this )';
        }

        if ( $array["numeric"] )
        {
          $array["onblur"] .= $array["onblur"] ? '; BlurMoney( this )' : 'BlurMoney( this )';
        }

        if ( $array["type"] )  {
            if ( strtolower( $array["type"] ) == "decimal" )
                $function = "return DecimalInput( event )";
            elseif ( strtolower( $array["type"] ) == "alpha" )
                $function = "return AlphaInput( event )";
                
                
            elseif ( strtolower( $array["type"] ) == "time" )
                $function = "return EvalTime( event, '00:00', this )";
                
                
            elseif ( strtolower( $array["type"] ) == "numeric" || strtolower( $array["type"] ) == "date" )
                $function = "return NumericInput( event )";
            if ( $array["onkeypress"] )
                $array["onkeypress"] = $array["onkeypress"]."; ".$function;
            else
                $array["onkeypress"] = $function;
        }


        if ( $onfocus=="on" )    {

            if ( $array["calendar"] )
                $calendar = "calendar";

            echo ' onfocus="this.className=\'campo_texto_on '.$calendar.'\';';
            if ( $array["onfocus"] )
                echo ' '.$array["onfocus"].'"';
            echo '"';
        }
        else
            if ( $array["onfocus"] ) echo ' onfocus="'.$array["onfocus"].'"';

        if ( strtolower( $array["type"] ) == "placa" )  {
            $array["maxlength"] = "8";
            $array["size"] = "8";
        }
        
        if ( strtolower( $array["type"] ) == "time" )  {
            $array["maxlength"] = "5";
            $array["size"] = "4";
        }
        

        if ( $array["type"] == "decimal" )
            $array["onkeydown"] = "ValidateDecimalFormat( this ); ".$array["onkeydown"];
        //    $array["onkeyup"] = "ValidateDecimalFormat( this ); ".$array["onkeyup"];

        if ( $array["<"] )
            $array["onkeyup"] = "LimitNumber( '<', ".$array["<"].", this ); ".$array["onkeyup"];

        if ( $array["<="] )
            $array["onkeyup"] = "LimitNumber( '<=', ".$array["<="].", this ); ".$array["onkeyup"];

        if ( $array["type"] == "money" )
        {
            $array["onkeyup"] = "puntos( this,this.value.charAt( this.value.length-1 ) ); ".$array["onkeyup"];
            $array["onblur"] .= $array["onblur"] ? '; BlurMoney( this )' : 'BlurMoney( this )';
        }
        
        if ( strtolower( $array["type"] ) == "time" )
        {
            $array["onblur"] .= $array["onblur"] ? '; OnblurTime( this )' : 'OnblurTime( this )';
        }
        

        if ( $array["limit"] )
            $array["onkeyup"] = "LimitChars( this, ".$array["limit"]." ); ".$array["onkeyup"];

        if ( strtolower( $array["type"] ) == "placa" )
            $array["onkeyup"] = "ValidatePlacaFormat( this ); ".$array["onkeyup"];
        elseif ( strtolower( $array["type"] ) == "date" )
        {
            $array["onkeyup"] = "CalendarFormat( this ); ".$array["onkeyup"];
        }





        $array["onblur"] = $array['type'] == 'numeric' || $array['type'] == 'decimal' ? 'BlurNumeric( this ); '.$array["onblur"] : $array["onblur"];


        if ( $array["type"] == 'container' )
        {
          $array["onkeyup"] = $array["onkeyup"] ? 'OnkeyupContainer( this ); '.$array["onkeyup"] : 'OnkeyupContainer( this )';
          $array["onblur"]  = $array["onblur"]  ? 'OnblurContainer( this );  '.$array["onblur"] : 'OnblurContainer( this )';
          $array["size"]      = '18';
          $array["maxlength"] = '17';
        }

        if ( $onblur=="on" )    {

            if ( $array["calendar"] )
                $calendar = "calendar";

            echo ' onblur="this.className=\'campo_texto '.$calendar.'\';';
            if ( $array["onblur"] )
                echo ' '.$array["onblur"];
            echo '"';
        }
        else
            if ( $array["onblur"] ) echo ' onblur="'.$array["onblur"].'"';


       if ( $array["onkeypress"] ) echo ' onkeypress="'.$array["onkeypress"].'"';


        if ( $array["method"] ) echo ' method="'.$array["method"].'"';
        if ( $array["action"] ) echo ' action="'.$array["action"].'"';
        if ( $array["target"] ) echo ' target="'.$array["target"].'"';
        if ( $array["enctype"] ) echo ' enctype="'.$array["enctype"].'"';
        if ( $array["multipar"] ) echo ' multipar="yes"';
        if ( $array["class"] ) echo ' class="'.$array["class"].'"';
        if ( $array["name"] ) echo ' name="'.$array["name"].'"';
        if ( $array["id"] ) echo ' id="'.$array["id"].'"';
        if ( $array["value"] != '' ) echo ' value="'.$array["value"].'"';
   //     if ( $array["width"] ) echo ' width="'.$array["width"].'"';
        if ( $array["height"] ) echo ' height="'.$array["height"].'"';
        if ( $array["size"] ) echo ' size="'.$array["size"].'"';
        if ( $array["maxlength"] ) echo ' maxlength="'.$array["maxlength"].'"';
        if ( $array["rowspan"] ) echo ' rowspan="'.$array["rowspan"].'"';
        if ( $array["colspan"] ) echo ' colspan="'.$array["colspan"].'"';
        if ( $array["cols"] ) echo ' cols="'.$array["cols"].'"';
        if ( $array["rows"] ) echo ' rows="'.$array["rows"].'"';
        if ( $array["wrap"] ) echo ' wrap="'.$array["wrap"].'"';
        if ( $array["for"] ) echo ' for="'.$array["for"].'"';
        if ( $array["title"] ) echo ' title="'.$array["title"].'"';
        if ( $array["onclick"] ) echo ' onclick="'.$array["onclick"].'"';
        if ( $array["ondblclick"] ) echo ' ondblclick="'.$array["ondblclick"].'"';
        if ( $array["onchange"] ) echo ' onchange="'.$array["onchange"].'"';
        if ( $array["href"] ) echo ' href="'.$array["href"].'"';
        if ( $array["src"] ) echo ' src="'.$array["src"].'"';
        if ( $array["style"] ) echo ' style="'.$array["style"].'"';


        if ( $array["onkeyup"] ) echo ' onkeyup="'.$array["onkeyup"].'"';
        if ( $array["onkeydown"] ) echo ' onkeydown="'.$array["onkeydown"].'"';

        if ( $array["onmouseover"] ) echo ' onmouseover="'.$array["onmouseover"].'"';
        if ( $array["onmouseout"] ) echo ' onmouseout="'.$array["onmouseout"].'"';
        if ( $array["onmouseup"] ) echo ' onmouseup="'.$array["onmouseup"].'"';
        if ( $array["selected"] ) echo ' selected="selected"';
        if ( $array["checked"] ) echo ' checked="checked"';
        if ( $array["disabled"] ) echo ' disabled="disabled"';
        if ( $array["readonly"] ) echo ' readonly="readonly"';

    }




    function OpenCell( $id="", $class="celda_info", $align="", $valign="middle", $rowspan=1, $colspan=1, $width="" )  {
        if ( !$align ) $align = "right";
        if ( $id ) $id = $id."TD";
        echo "\n      ";
        echo '<td id="'.$id.'" class="'.$class.'" align="'.$align.'" valign="'.$valign.'" rowspan="'.$rowspan.'" colspan="'.$colspan.'" width="'.$width.'" style="position: relative;">';
        echo "\n        ";
    }

    function CloseCell( $end="" )  {
        echo "\n      ";
        echo '</td>';
        if ( $end ) {
            echo "\n    </tr>";
            echo "\n    <tr>";
        }
    }


    function Label( $label="", $properties="" )    {
        $properties = $this->GetProperties( $properties );
        if ( !$properties["class"] ) $properties["class"] = "celda_etiqueta";
        $this->OpenCell( $properties["name"], $properties["class"], $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        $properties["class"] = "";
        echo '<label';
        $this -> SetProperties( $properties );
        echo '>';
        if ( $properties["color"] )
            echo '<font color="'.$properties["color"].'">';
        if ( $properties ["exp"] )
            echo $label;
        else
            echo htmlentities( $label, ENT_COMPAT, 'ISO-8859-1', true );
        if ( $properties["error"] )
            echo '</font>';
        echo '</label>';
        $this->CloseCell( $properties["end"] );
    }


    function Info( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        if ( !$properties["align"] ) $properties["align"] = "left";
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );

        echo '<input type="text" class="Withoutborder" readonly="readonly"';
        if ( $properties["color"] && $properties["ialign"] )
            echo ' style="color:'.$properties["color"].'; font-weight:bold; font-size:11; text-align:'.$properties["ialign"].'"';
        elseif ( $properties["color"] )
            echo ' style="color:'.$properties["color"].'; font-weight:bold; font-size:11"';
        elseif ( $properties["ialign"] )
        {
            echo 'style="text-align:'.$properties["ialign"].'"';
        }
        $this->SetProperties( $properties, "off", "off" );
        echo ' />';
        $this->CloseCell( $properties["end"] );
    }

    function Error( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        if ( !$properties["align"] ) $properties["align"] = "left";
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="text" class="Error" readonly="readonly"';
        if ( $properties["color"] )
            echo ' style="color:'.$properties["color"].'; font-weight:bold; font-size:11"';
        $this->SetProperties( $properties, "off", "off" );
        echo ' />';
        $this->CloseCell( $properties["end"] );
    }


    function Space( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_etiqueta", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<label';
        $this->SetProperties( $properties );
        echo '>';
        echo "&nbsp;";
        echo '</label>';
        $this->CloseCell( $properties["end"] );
    }

	function Link( $label="", $properties="" )    
	{
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_etiqueta", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<a ';
        $this->SetProperties( $properties );
        echo '>';
        echo $label;
        echo "&nbsp;";
        echo '</a>';
        $this->CloseCell( $properties["end"] ); 
    }


    function Popup( $left=0, $top=0, $item=0 )  {
        echo "\n      ";
        echo '<div id="popupDIV" ';
        echo 'style="position: absolute; ';
        echo 'left: '.$left.'px; ';
        echo 'top: '.$top.'px; ';
        echo 'width: 300px; ';
        echo 'height: 300px; ';
        echo 'z-index: 3; ';
        echo 'visibility: hidden; ';
        echo 'overflow: auto; ';
        echo 'border: 1px solid black; ';
        echo 'background: white; ';
        echo '">';
        echo '</div>';
        echo "\n      ";
    }


    function Input( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        if ( !$properties["align"] ) $properties["align"] = "left";
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );

        if ( $properties["calendar"] )
            $properties["class"] .= ' calendar';


        echo '<input type="text" class="campo_texto '.$properties["class"].'"';
        if ( $properties["color"] )
            echo ' style="color:'.$properties["color"].'; font-weight:bold; font-size:11"';
        if ( $properties["popup"] ) echo ' style="cursor:pointer"';

        $this->SetProperties( $properties );
        
        echo ' />';
        if ( $properties["popup"] )    {
            echo "\n        ";
       //     echo '<input style="height:18px; cursor:pointer" type="button" onclick="'.$properties["popup"].'" value=":::"';
            //echo '<input id="P'.$properties["name"].'ID" class="popupButton" type="button" onclick="'.$properties["popup"].'" value="" ';
            echo '<img id="P'.$properties["name"].'ID" class="popupButton2" onclick="'.$properties["popup"].'" src="../'.DIR_APLICA_CENTRAL.'/imagenes/find.png"  title="Buscar" ';
            //echo 'title="Buscar"';

            if ( $properties["disabled"] ) echo ' disabled="disabled"';
            echo ' />';
        }
        else if ( $properties["calendar"] )    {
            echo '<img class="calendarButton2" src="../'.DIR_APLICA_CENTRAL.'/imagenes/calendar.png"  alt="Seleccione Fecha" title="Seleccione Fecha">';
            /*$date = date( "Y-m-d" );
            echo "\n        ";
            echo '<input id="C'.$properties["name"].'ID" class="calendarButton" type="button" value="" ';
            if ( $properties["calendar"] != 'yes' && $properties["calendar"] != '1' )
              echo 'onclick="ShowCalendar( \''.$properties["name"].'ID\', \''.$date.'\', \'\', \'\', \'\', \''.$properties["calendar"].'\' );" ';
            else
              echo 'onclick="ShowCalendar( \''.$properties["name"].'ID\', \''.$date.'\', \'\', \'\', \'\', \'\' );" ';
            echo 'title="Calendario"';
            echo ' />';*/
        }
        $this->CloseCell( $properties["end"] );
    }

    function Password( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        if ( !$properties["align"] ) $properties["align"] = "left";
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="password" class="campo_texto"';
        $this->SetProperties( $properties );
        echo ' />';
        $this->CloseCell( $properties["end"] );
    }

	/*
	 * Para el Parametro keyMultiple se pueden enviar diferentes Keys cuando el Select es de Tipo Multiple.
	 */
    function Select( $options, $properties="", $keyMultiple = null )
    {
        $properties = $this->GetProperties( $properties );

       

        if ( !$properties["align"] ) $properties["align"] = "left";
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );

        if ( $properties["multiple"] ) 
          echo '<select multiple size="10" class="form_01'.(!empty($properties["class"]) ? ' '.$properties["class"] : '').'"';
        else
          echo '<select class="form_01'.(!empty($properties["class"]) ? ' '.$properties["class"] : '').'"';


        if ( $properties["inner"] || $properties["value"] )
        {
          $element = $properties["inner"] ? $properties["inner"] : $properties["value"];
          $event   = $properties["inner"] ? "inner" : "value";
          
          
          $properties['onchange']  = "SelectExtra( this, '".$element."', '".$event."' ); " . $properties['onchange'];
          /*
          $properties["onchange"] .= $properties["onchange"] ? "; " : "";
          $properties["onchange"] .= "SelectExtra( this, '".$element."', '".$event."' )";
          */

        }
        $this->SetProperties( $properties, "off", "off" );
        echo '>';
        $size = count( $options );
        for ( $x = 0; $x < $size; $x++ )
        {
        	if ( $properties["multiple"] && is_array ( $keyMultiple ) )
        	{
        	  $selected = "";

        	  for ( $m = 0; $m < sizeof ( $keyMultiple ); $m++ )
        	  {
        	  	if ( $options[$x][0] == $keyMultiple[$m] )
        	  	{
                 $selected = ' selected="selected"';
                 break;
        	  	}
        	  }
        	}
        	else
        	{
              if ( $x == $properties["index"] || $options[$x][0] === $properties["key"] )
                 $selected = ' selected="selected"';
              else
                 $selected = "";
        	}

            echo "\n          ";
            
            $attr = "";

            if(!empty($properties["attr"])){
                foreach($properties["attr"] as $key => $value)
                    $attr.= "data-".$value."='".$options[$x][$key]."' ";
            }//fin si

            echo '<option value="'.$options[$x][0].'" '.$attr.'  '.$selected.'   >';
            echo htmlentities( $options[$x][1], ENT_COMPAT, 'ISO-8859-1', true );
            echo '</option>';
        }
        echo "\n        ";
        echo '</select>';
        if ( $properties["extra"] !== NULL )
        {
          $array_extra = explode( "|", $properties["extra"] );
          $array_name = explode( "|", $properties["value"] );

		  $size_extra = sizeof ( $array_extra );

          for ( $k = 0; $k < $size_extra; $k ++ )
          {
            for ( $x = 0; $x < $size; $x ++ )
            {
              $hselect["name"] = "hselect_".$properties["name"].$k."-".$x;
              $hselect["id"]   = $properties["id"] ? "hselect_".$properties["id"].$k."-".$x : "hselect_".$properties["name"].$k."-".$x."ID";
              echo "\n        ";
              echo '<input type="hidden" value="'.htmlentities( $options[$x][$array_extra[$k]], ENT_COMPAT, 'ISO-8859-1', true ).'" ';
              $this -> SetProperties( $hselect, "off", "off" );
              echo '/>';
            }

            if ( !$properties["inner"] && !$array_name[$k] )
            {
              $extra["name"] = "extra_".$properties["name"];
              $extra["id"]   = $properties["id"] ? "extra_".$properties["id"] : "extra_".$properties["name"]."ID";
              echo "\n        ";
              echo '<input type="hidden" ';
              $this -> SetProperties( $extra, "off", "off" );
              echo '/>';
            }
          }
        }
        $this->CloseCell( $properties["end"] );
    }


    function CheckBox( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        if ( !$properties["align"] ) $properties["align"] = "left";
        if ( !$properties["class"] ) $properties["class"] = "celda_info";
        $this->OpenCell( $properties["id"], $properties["class"], $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="checkbox" class=""';
        $this->SetProperties( $properties, "off", "off" );
        echo ' />';
        $this->CloseCell( $properties["end"] );
    }


    function Radio( $properties="" )    {
        $properties = $this->GetProperties( $properties );
 //       $this->OpenCell( $properties["id"], "celda_info", "left" );
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="radio" class=""';
        $this->SetProperties( $properties, "off", "off" );
        echo ' />';
        $this->CloseCell( $properties["end"] );
    }


    function Hidden( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        echo "\n        ";
        echo '<input type="hidden"';
        $this->SetProperties( $properties, "off", "off" );
        echo ' />';
    }


    function File( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_info", "left", $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="file" class=""';
        $this->SetProperties( $properties, "off", "off" );
        echo ' />';
        $this->CloseCell( $properties["end"] );
    }


    function Image( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<img width="'.$properties["iwidth"].'" height="'.$properties["iheight"].'" ';
        $this->SetProperties( $properties, "off", "off" );
        echo ' />';
        $this->CloseCell( $properties["end"] );
    }


    function TextArea( $value="", $properties="" )    {
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_info", "left", $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<textarea class="campo_texto"';
        $this->SetProperties( $properties );
        echo '>';
        echo htmlentities( $value, ENT_COMPAT, 'ISO-8859-1', true );
        echo '</textarea>';
        $this->CloseCell( $properties["end"] );
    }


	//-------------------------------------------------------------------------------------
	function ImgLoader( $mLabel = NULL, $properties = NULL )
	{
    $properties = $this->GetProperties( $properties );
    $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
		$properties["src"]   = $properties["src"] ? $properties["src"] : "../".DIR_APLICA_CENTRAL."/lib/general/loader.php";
		$properties["src"]  .= $mLabel == NULL ? NULL : "?label=".$mLabel;
		$properties["src"]  .= $mLabel == NULL ? '?'  : '&';
		$properties["src"]  .= $mLabel == NULL ? NULL : "name=".$properties["name"];
		$properties["width"]  = $mLabel == NULL ? '233' : '233';
		$properties["height"] = $mLabel == NULL ? '134' : '150';
		echo '<input type="hidden" name="'.$properties["name"].'" id="'.$properties["name"].'ID" />';
		echo "\n        ";
		echo '<iframe class="StyleIframe" frameborder="0" scrolling="no" marginwidth="0" marginheight="0" margin="0"';
		$properties["name"] = "iframe_".$properties["name"];
    $this->SetProperties( $properties, "off", "off" );
    echo '>';
    echo htmlentities( $mText, ENT_COMPAT, 'ISO-8859-1', true );
    echo '</iframe>';
    $this->CloseCell( $properties["end"] );
	}


 function ImgPreview( $mLabel = NULL, $properties = NULL )
  {
    $properties = $this->GetProperties( $properties );
    $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );

    $html .= "\n  ";
    $html .= '<table align="center" cellpadding="0" cellspacin="0" style="border:1px solid #999999;">';
    if ( $mLabel )
    {
      $html .= "\n    ";
      $html .= '<tr>';
      $html .= "\n      ";
      $html .= '<td align="center" style="font-family:Arial; font-weight:bold; font-size:11px; color:#444444;">';
      $html .= "\n        ";
      $html .= htmlentities( $mLabel, ENT_COMPAT, 'ISO-8859-1', true );
      $html .= "\n      ";
      $html .= '</td>';
      $html .= "\n    ";
      $html .= '</tr>';
    }
    $html .= "\n    ";
    $html .= '<tr>';
    $html .= "\n      ";
    $html .= '<td align="center">';
    $html .= "\n        ";
    $html .= '<input type="file" name="myfile" id="myfileID" onchange="UploadImage()">';
    $html .= "\n      ";
    $html .= '</td>';
    $html .= "\n    ";
    $html .= '</tr>';
    $html .= "\n    ";
    $html .= '<tr>';
    $html .= "\n      ";
    $html .= '<td align="center" />';
    $html .= "\n        ";
    $html .= '<img name="imagen" id="imagenID" src="../'.DIR_APLICA_CENTRAL.'/imagenes/question_red.png" width="100" height="100" />';
    $html .= "\n      ";
    $html .= '</td>';
    $html .= "\n    ";
    $html .= '</tr>';
    $html .= "\n  ";
    $html .= '</table>';

    echo $html;



    $this->CloseCell( $properties["end"] );
  }



    function OpenDiv( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        echo "\n          ";
        echo '<div ';
        $this->SetProperties( $properties, "", "" );
        echo '>';
    }


    function CloseDiv()    {
        echo "\n          ";
        echo '</div>';
    }


    function Button( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="button" style="cursor:pointer"';
        if ( $properties["popup"] ) echo ' style="cursor:pointer"';
        $this->SetProperties( $properties, "", "" );
        echo ' />';
        $this->CloseCell( $properties["end"] );
    }


    function DeleteButton( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="button" class="DeleteButton_" id="'.$id.'" name="'.$name.'" ';
        if ( !$properties["title"] ) echo ' title="Eliminar"';
        $this->SetProperties( $properties, "", "" );
        echo '/>';
        $this->CloseCell( $properties["end"] );
    }

    function NewButton( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="button" class="NewButton_" id="'.$id.'" name="'.$name.'" ';
        if ( !$properties["title"] ) echo ' title="Nuevo"';
        $this->SetProperties( $properties, "", "" );
        echo '/>';
        $this->CloseCell( $properties["end"] );
    }

    function EditButton( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="button" class="EditButton_" id="'.$id.'" name="'.$name.'" ';
        if ( !$properties["title"] ) echo ' title="Editar"';
        $this->SetProperties( $properties, "", "" );
        echo '/>';
        $this->CloseCell( $properties["end"] );
    }


    function StyleButton( $properties="" )    {
        $properties = $this->GetProperties( $properties );
        $this->OpenCell( $properties["id"], "celda_info", $properties["align"], $properties["valign"], $properties["rowspan"], $properties["colspan"], $properties["width"] );
        echo '<input type="button" class="styleButton_'.$properties["size"].'" ';
        $this->SetProperties( $properties, "", "" );
        echo ' />';
        $this->CloseCell( $properties["end"] );
    }


    function Transparency( $id="TransparencyDIV", $zindex="1", $width="100%", $height="100%"  ) {
        echo "\n      ";
        echo '<div id="'.$id.'" ';
        echo 'style="position: absolute; ';
        if ( $this->Browser() == "Explorer" )
            echo 'filter: alpha(opacity=30); ';
        echo 'opacity: 0.2; ';
        echo 'left: 0px; ';
        echo 'top: 0px; ';
        echo 'width: '.$width.'; ';
        echo 'height: '.$height.'; ';
        echo 'z-index: '.$zindex.'; ';
        echo 'visibility: hidden; ';
        echo 'border: 1px solid black; ';
        echo 'background: gray; ';
        echo '">';
        echo '</div>';
        echo "\n      ";

    }


    function Calendar( $zindex="3", $width="100%", $height="100%"  ) {
        echo "\n      ";
        echo '<div id="RyuCalendarDIV" ';
        echo 'style="position: absolute; ';
        echo 'background: white; ';
        echo 'left: 0px; ';
        echo 'top: 0px; ';
 //       echo 'width: '.$width.'; ';
 //       echo 'height: '.$height.'; ';
        echo 'z-index: '.$zindex.'; ';
 //       echo 'visibility: hidden; ';
        echo 'display: none; ';
        echo 'border: 1px solid black; ';
        echo '">';
        echo '</div>';
        echo "\n      ";

    }


    function Line( $te, $est="", $an=0, $col=0, $al="left", $title="", $js="", $name="" )
    {

        switch( $est )
        {
            case "t": $estilo_et = "celda_titulo"; break;
            case "t2": $estilo_et = "celda_titulo2"; break;
            case "h": $estilo_et = "header"; break;
            case "e": $estilo_et = "celda_error"; break;
            case "c": $estilo_et = "celda"; break;
            case "c2": $estilo_et = "celda2"; break;
            case "i": $estilo_et = "celda_info"; break;
            default: $estilo_et = "celda_etiqueta"; break;
        }
        echo "\n    ";
        echo '<td class="'.$estilo_et.'" align="'.$al.'"';
        if(!$te)
            $te = "&nbsp;";
        if($col)
           echo " colspan=\"$col\"";
        if($an)
           echo " width=\"$an\"";
        echo ">";
        if ( $js )
        {
            echo '<label name="'.$name.'" id="'.$name.'ID" onclick="'.$js.'" title="'.$title.'" onmouseover="this.className=\'celda_hover\';" onmouseout="this.className=\''.$est.'\';" >';
        }
        echo "<b>".$te."</b>";
        if ( $js )
        {
            echo '</label>';
        }
        echo "\n    ";
        echo '</td>';

        /*
        if($sl)

            printf("\n                  </TR>\n                  <TR>");
        */
    }


    function Money( $value )    {
        $size = strlen( $value );
        if ( $size > 3 )
        {
            $str = "";
            $rev = strrev( $value );
            $n = 0;
            while( $n < $size )
            {
                $str .= $rev[$n];
                if ( ( $n + 1 ) % 3 == 0 && ( $n + 1 ) < $size )
                {
                    $str .= ".";
                }
                $n++;
            }
            return strrev( $str );
        }
        else
           return $value;
    }


    function MakeSubmit( $mArray, $mNames = NULL )
    {
        $mKeys = array_keys( $mArray );
        $mNames = explode( ';', $mNames );
        for ( $i = 0, $mSize = sizeof( $mKeys ); $i < $mSize; $i++ )
        {
          if ( !in_array( $mKeys[$i], $mNames ) )
            $this -> Hidden( "name:".$mKeys[$i]."; value:".$mArray[$mKeys[$i]] );
        }
    }

}




/**************************************************************************************************************/
/****************************************************Fin del Archivo*******************************************/
/**************************************************************************************************************/
?>