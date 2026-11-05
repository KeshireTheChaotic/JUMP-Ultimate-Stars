
undefined4 FUN_0218af18(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 0x60));
  if (iVar1 < 1) {
    FUN_02002068(s_len_>_0_021a66b4,s_gt2Message_c_021a66bc,0,0x475);
  }
  piVar2 = (int *)FUN_020012d8(*(undefined4 *)(param_1 + 0x60),iVar1 + -1);
  iVar1 = FUN_0218a6b8(param_1,*(int *)(param_1 + 0x50) + *piVar2,piVar2[1]);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  return 1;
}

