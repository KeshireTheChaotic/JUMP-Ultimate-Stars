
void FUN_02180f50(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar2;
  
  uVar1 = FUN_02004b04(param_1 + 0x54);
  iVar2 = 0;
  if (0 < param_3) {
    do {
      FUN_0200d12c(iVar2,uVar1);
      FUN_0200d12c(*(char *)(param_1 + 0x54 + extraout_r1) * iVar2,8);
      FUN_0200d12c(iVar2,8);
      *(byte *)(param_1 + extraout_r1_00 + 0x74) =
           *(byte *)(param_1 + extraout_r1_00 + 0x74) ^
           *(byte *)(param_1 + extraout_r1_01 + 0x74) ^ *(byte *)(param_2 + iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  FUN_0217efd4(param_1 + 0x4bc,param_1 + 0x74,8);
  return;
}

