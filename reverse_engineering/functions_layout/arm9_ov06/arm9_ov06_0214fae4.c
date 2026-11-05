
void FUN_0214fae4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x14); iVar3 = iVar3 + 1) {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x4c);
    if (iVar1 == 0) {
      iVar2 = iVar2 + 1;
    }
    (&DAT_020afee6)[iVar3] = (char)iVar1;
    iVar1 = param_1 + iVar3 * 4;
    (&DAT_020afef2)[iVar3] = (short)*(undefined4 *)(iVar1 + 0x1c);
    (&DAT_020afefa)[iVar3] = (short)*(undefined4 *)(iVar1 + 0x2c);
    (&DAT_020aff02)[iVar3] = (short)*(undefined4 *)(iVar1 + 0x3c);
  }
  FUN_0214fa24();
  DAT_020afee5 = iVar2 < 2;
  return;
}

