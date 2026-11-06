
void FUN_02177f18(void)

{
  undefined8 uVar1;
  
  if (DAT_021a75a4 != 0) {
    *(undefined4 *)(DAT_021a75a4 + 8) = 0;
    uVar1 = OS_GetTick();
    *(undefined8 *)(DAT_021a75a4 + 0xc) = uVar1;
  }
  return;
}

