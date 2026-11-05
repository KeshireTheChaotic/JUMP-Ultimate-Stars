
undefined4 FUN_02150384(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    (&DAT_020afee6)[iVar1] = (char)*(undefined4 *)(param_1 + iVar1 * 4 + 0x4c);
  }
  FUN_0214fe8c();
  return 1;
}

