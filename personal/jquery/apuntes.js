

FADE IN OUT

$(".slowly").fadeIn(); //aparece
$(".slowly").fadeOut(); //desaparece
$(".slowly").fadeIn(2000); //se especifica la velocidad en milisegundos
$(".slowly").fadeOut(5000);//se especifica la velocidad en milisegundos

$("button").on("click	dblclick"	// listener para dos eventos

$("button#b1").on("click",	function()	{	
		$("img").hide();	
})	crear listener para cuando ocurra un evento

cambiar el value de atributos css
$("p.color_change").css('color', 'red');

// before() agrega el nodo justo antes del selector
$(".html-generated").before(paragraph);


// prepend() agrega el nodo al inicio del selector
$("ul").prepend(jquery);

// append() agrega el nodo al final del selector
$("ul").append(jquery.clone());

// closest() encuentra el elemento closest iendo hacia arriba en el arbol DOM
$("ul").closest('.frameworks').append(jquery.clone());

// remover todas las clases
removeAttr('class')
// mantener las clases actuales y agregar una nueva clase
addClass('myClass')
// reemplazar todas las clases con una nueva clase
attr('class', 'myNewClass');

// visualizar y ocultar alrededor de 3 segundos
$("#d3").toggle(3000);

// cambiar estilos en la misma linea
$("h2").css('color', 'red');

// cambiar estilos en varias lineas
$("h2").css({
	"font-family": 'arial',
	"font-size": '10px'
});


// llamar un cdn si no esta disponible llamar el source desde disco local