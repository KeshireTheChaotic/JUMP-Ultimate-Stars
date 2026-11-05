
void FUN_021805f0(int param_1)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = *(int **)(param_1 + 0x24);
  if ((piVar2[10] & 0x80U) == 0) {
    if ((piVar2[10] & 0x100U) == 0) {
      bVar3 = true;
    }
    else {
      bVar3 = *(char *)((int)piVar2 + 0x36) == *(char *)((int)piVar2 + 0x37);
    }
  }
  else {
    if (*piVar2 == 0) {
      sVar1 = 0;
    }
    else {
      sVar1 = *(short *)(*piVar2 + 0xbc);
    }
    bVar3 = sVar1 == 0x100;
  }
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xad) = 0;
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0x105) = 1;
    return;
  }
  (*(code *)(&PTR_FUN_021815fc)[*(byte *)(param_1 + 0xac)])();
  return;
}

