
void FUN_021794b4(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x1a5) = 0;
  iVar1 = FUN_02178448();
  uVar2 = OS_GetTick();
  *(undefined8 *)(iVar1 + 0x1f0) = uVar2;
  return;
}

