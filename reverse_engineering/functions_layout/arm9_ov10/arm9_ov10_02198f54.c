
undefined4 FUN_02198f54(int param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = OS_DisableInterrupts();
  if (DAT_021aa094 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  iVar2 = *(int *)(DAT_021aa094 + 0x2260);
  if (iVar2 != 3) {
    if (iVar2 == 8) {
      OS_RestoreInterrupts();
      return 2;
    }
    if (iVar2 == 9) {
      OS_RestoreInterrupts();
      return 0;
    }
    OS_RestoreInterrupts();
    return 1;
  }
  if (param_1 == 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  if (*(short *)(param_1 + 0x3c) != 0) {
    OS_RestoreInterrupts();
    return 1;
  }
  if (param_2 == (byte *)0x0) {
    FUN_020517fc(DAT_021aa094 + 0x2200,0,0x52);
  }
  else {
    if ((3 < *param_2) || (3 < param_2[1])) {
      OS_RestoreInterrupts(uVar1);
      return 1;
    }
    *(byte *)(DAT_021aa094 + 0x2250) = *param_2;
    *(byte *)(DAT_021aa094 + 0x2251) = param_2[1];
    if (*(char *)(DAT_021aa094 + 0x2250) == '\0') {
      FUN_020517fc(DAT_021aa094 + 0x2200,0,0x50);
    }
    else {
      FUN_02051890(param_2 + 2,DAT_021aa094 + 0x2200,0x50);
    }
  }
  FUN_02051890(param_1,DAT_021aa094 + 0x2140,0xc0);
  *(ushort *)(DAT_021aa094 + 0x2170) = *(ushort *)(DAT_021aa094 + 0x216e) | 3;
  FUN_02198c0c(param_3);
  iVar2 = FUN_0205ab90(0x2198581,0xffff,0x50,0xffff,0xffff);
  if (iVar2 == 2) {
    FUN_021988cc(8);
    *(undefined2 *)(DAT_021aa094 + 0x2280) = 5;
    OS_RestoreInterrupts(uVar1);
    return 3;
  }
  if ((iVar2 == 3) || (iVar2 != 8)) {
    FUN_021988cc(0xb);
    OS_RestoreInterrupts(uVar1);
    return 7;
  }
  OS_RestoreInterrupts(uVar1);
  return 4;
}

