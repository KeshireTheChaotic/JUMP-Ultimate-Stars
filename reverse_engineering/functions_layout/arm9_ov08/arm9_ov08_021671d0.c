
void FUN_021671d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_02166ba8(0x10,4);
  *puVar1 = 0;
  puVar1[1] = puVar1 + 2;
  puVar1[2] = puVar1;
  puVar1[3] = 0;
  return;
}

