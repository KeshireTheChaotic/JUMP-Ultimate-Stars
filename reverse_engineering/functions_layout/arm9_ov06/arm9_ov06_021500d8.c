
void FUN_021500d8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    iVar2 = *(int *)(param_1 + iVar1 * 4 + 0x4c);
    if (iVar2 == 0) {
      iVar3 = iVar3 + 1;
    }
    (&DAT_020afee6)[iVar1] = (char)iVar2;
    (&DAT_020afef2)[iVar1] = (short)*(undefined4 *)(param_1 + iVar1 * 4 + 0x1c);
  }
  FUN_0214fa24(param_1);
  if (1 < iVar3) {
    DAT_020afee5 = 0;
    return;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    DAT_020aff18 = 1;
  }
  DAT_020afee5 = 1;
  return;
}

