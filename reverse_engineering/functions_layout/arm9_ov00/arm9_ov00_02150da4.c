
void FUN_02150da4(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = OS_GetTick();
  if ((int)((ulonglong)uVar2 >> 0x20) ==
      *(int *)(iVar1 + 0x7c) + (uint)((uint)uVar2 < *(uint *)(iVar1 + 0x78)) &&
      (uint)uVar2 - *(uint *)(iVar1 + 0x78) < 0x297ffa6) {
    return;
  }
  *(undefined1 *)(iVar1 + 0x82) = 1;
  FUN_02150f48(iVar1);
  return;
}

