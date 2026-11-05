
/* JUS-SDK DC_WaitWriteBufferEmpty [exact] instruction template DC_WaitWriteBufferEmpty */

undefined4 DC_WaitWriteBufferEmpty(void)

{
  coproc_moveto_Data_Synchronization(0);
  return 0;
}

