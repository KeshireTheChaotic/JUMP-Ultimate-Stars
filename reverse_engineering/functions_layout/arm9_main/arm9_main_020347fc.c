
void FUN_020347fc(int param_1)

{
  int iVar1;
  
  if (DAT_020a0e30 == param_1) {
    DAT_020a0e30 = *(int *)(param_1 + 0xc);
  }
  iVar1 = DAT_020a0f64 + 4;
  *(int *)(DAT_020a0f64 + 0x410) = *(int *)(DAT_020a0f64 + 0x410) + -1;
  iVar1 = iVar1 + ((int)(uint)*(ushort *)(param_1 + 6) >> 8) * 4;
  if (*(int *)(iVar1 + 0xc) == param_1) {
    if ((uint)*(ushort *)(*(int *)(param_1 + 0xc) + 6) == (uint)*(ushort *)(param_1 + 6)) {
      *(int *)(iVar1 + 0xc) = *(int *)(param_1 + 0xc);
    }
    else {
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

