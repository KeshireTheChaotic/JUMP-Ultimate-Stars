
undefined4 FUN_02150c8c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  DAT_020afee3 = 1;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x14); iVar2 = iVar2 + 1) {
    iVar3 = *(int *)(param_1 + iVar2 * 4 + 0x4c);
    if (iVar3 == 0) {
      iVar1 = iVar1 + 1;
    }
    (&DAT_020afee6)[iVar2] = (char)iVar3;
    (&DAT_020afef2)[iVar2] = (short)*(undefined4 *)(param_1 + iVar2 * 4 + 0x1c);
  }
  if (1 < iVar1) {
    DAT_020afee5 = 0;
    return 1;
  }
  DAT_020afee5 = 1;
  if (*(int *)(param_1 + 0x4c) == 0) {
    FUN_0215041c();
  }
  return 1;
}

