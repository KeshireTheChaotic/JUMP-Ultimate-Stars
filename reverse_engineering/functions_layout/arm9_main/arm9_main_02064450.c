
undefined4 FUN_02064450(int param_1)

{
  undefined4 uVar1;
  bool bVar2;
  
  bVar2 = false;
  uVar1 = OS_DisableInterrupts();
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    bVar2 = (*(uint *)(param_1 + 0xc) & 0x44) == 0;
    if (bVar2) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
      do {
        FUN_02053290(param_1 + 0x18);
      } while ((*(uint *)(param_1 + 0xc) & 0x40) == 0);
    }
    else {
      do {
        FUN_02053290(param_1 + 0x18);
      } while ((*(uint *)(param_1 + 0xc) & 1) != 0);
    }
  }
  OS_RestoreInterrupts(uVar1);
  if (bVar2) {
    uVar1 = FUN_02064128(param_1);
    return uVar1;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return 1;
  }
  return 0;
}

