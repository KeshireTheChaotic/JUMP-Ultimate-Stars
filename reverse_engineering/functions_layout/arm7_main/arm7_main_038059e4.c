
void FUN_038059e4(byte param_1)

{
  byte bVar1;
  
  bVar1 = jus_SpiPm_ReadRegister(0);
  jus_SpiPm_WriteRegister(0,bVar1 & ~param_1);
  return;
}

