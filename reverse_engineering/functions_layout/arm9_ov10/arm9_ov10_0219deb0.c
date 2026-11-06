
void FUN_0219deb0(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = OS_GetTick();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}

