
undefined4 FUN_02063dfc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = OS_DisableInterrupts();
  if ((*(uint *)(param_1 + 0x1c) & 2) != 0) {
    iVar3 = FUN_02063c78(param_1);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 0x80;
    iVar1 = *(int *)(param_1 + 0x24);
    while (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 4);
      FUN_020634f4(iVar1,3);
      iVar1 = iVar4;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
    if (iVar3 != 0) {
      FUN_02063c20(param_1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xffffff5d;
  }
  OS_RestoreInterrupts(uVar2);
  return 1;
}

