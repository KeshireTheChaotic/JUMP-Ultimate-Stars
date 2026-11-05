
undefined4 FUN_021503dc(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    (&DAT_020afee6)[iVar1] = (char)*(undefined4 *)(param_1 + iVar1 * 4 + 0x4c);
  }
  iVar1 = FUN_0214ff40(param_1);
  DAT_020afee5 = iVar1 < 2;
  FUN_0214fcc8(param_1);
  return 1;
}

