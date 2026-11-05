
void FUN_038029f4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  MIi_CpuCopy32(&DAT_03808aa8,param_1,0x1180);
  *(undefined1 **)(param_1 + 0x11c0) = &DAT_03808aa8;
  iVar2 = 0;
  do {
    uVar1 = FUN_037fef5c(iVar2);
    *(undefined4 *)(param_1 + iVar2 * 4 + 0x1180) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  uVar1 = FUN_037ffc74(0);
  *(undefined4 *)(param_1 + 0x11c4) = uVar1;
  return;
}

