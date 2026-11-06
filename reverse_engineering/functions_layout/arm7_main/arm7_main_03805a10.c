
void FUN_03805a10(uint param_1)

{
  uint uVar1;
  
  uVar1 = jus_SpiPm_ReadRegister(0);
  jus_SpiPm_WriteRegister(0,uVar1 | param_1);
  return;
}

