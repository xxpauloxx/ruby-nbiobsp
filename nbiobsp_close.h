
// Método para finalizar o uso do dispositivo e liberar memória.
void nbiobspClose(){
	ret = NBioAPI_CloseDevice(bspHandle, idDevice);
	ret = NBioAPI_Terminate(bspHandle);
}