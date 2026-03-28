Don Pepe tiene una tienda pequeña y necesita un programa que le ayude a calcular el total de una venta.
El programa debe:

1. Pedir cuántos productos va a comprar el cliente (mínimo 1, máximo 10)
2. Para cada producto se debe pedir el precio unitario y la cantidad
3. Aplicar un descuento según el tipo de cliente:

- Tipo 1 - Cliente Normal: sin descuento
- Tipo 2 - Cliente Frecuente: 10% de descuento
- Tipo 3 - Cliente VIP: 20% de descuento

4. Si el total (antes del descuento) supera los S/. 200, aplicar un descuento adicional de S/. 15
5. Mostrar el resumen final de la compra

R1: Validar que la cantidad de productos esté entre 1 y 10 (usar do-while)
R2: Validar que el precio unitario sea mayor a 0 (usar do-while)
R3: Validar que la cantidad por producto sea mayor a 0 (usar do-while)
R4: Ingresar precio y cantidad por cada producto (usar for)
R5: Acumular el subtotal de cada producto en el total general (usar función)
R6: Pedir el tipo de cliente y validar que sea 1, 2 o 3 (usar while)
R7: Calcular el porcentaje de descuento según el tipo de cliente (usar switch)
R8: Aplicar descuento adicional de S/. 15 si el total supera S/. 200 (usar if-else)
R9: Mostrar el resumen final con todas las funciones separadas
