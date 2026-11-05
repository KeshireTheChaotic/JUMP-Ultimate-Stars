
void FUN_02015af4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_020a1098 - DAT_020a0cc0;
  if (*(uint *)(param_1 + 0xc) < uVar2) {
    uVar3 = *(undefined4 *)(param_1 + 8);
    iVar1 = FUN_0201a9ec(uVar3);
    if (iVar1 == 0) {
      FUN_0201a958(uVar3,1);
    }
    uVar3 = FUN_0201a228(uVar2);
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  *(uint *)(param_1 + 0x10) = uVar2;
  MIi_CpuCopy32(DAT_020a0cc0,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}

