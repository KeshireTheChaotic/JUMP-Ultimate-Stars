
void FUN_02064160(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 8);
  while( true ) {
    if (param_1 == 0) {
      return;
    }
    uVar1 = OS_DisableInterrupts();
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40;
    if ((*(uint *)(param_1 + 0xc) & 4) != 0) break;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 8;
    OS_RestoreInterrupts(uVar1);
    iVar2 = FUN_020633d8(param_1,*(undefined4 *)(param_1 + 0x10));
    if (iVar2 == 6) {
      return;
    }
    param_1 = FUN_020641d4(uVar3);
  }
  FUN_02053210(param_1 + 0x18);
  OS_RestoreInterrupts(uVar1);
  return;
}

