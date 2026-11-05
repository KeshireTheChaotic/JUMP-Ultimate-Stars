
undefined4 FUN_0214fdf4(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    (&DAT_020afee6)[iVar1] = (char)*(undefined4 *)(param_1 + iVar1 * 4 + 0x4c);
    (&DAT_020afef2)[iVar1] = 0;
    (&DAT_020afefa)[iVar1] = 0;
    (&DAT_020aff02)[iVar1] = 0;
  }
  FUN_0214fa24(param_1);
  iVar1 = FUN_0214fe8c(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    DAT_020aff18 = 1;
  }
  return 1;
}

