
void FUN_020722a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0207227c();
  if (iVar1 != 0) {
    param_1 = param_1 * 0xca4;
    param_2 = param_2 * 4;
    iVar1 = param_1 + 0x20b4d48;
    uVar2 = *(uint *)(iVar1 + param_2);
    if ((uVar2 & 0x2000000) != 0) {
      *(uint *)(iVar1 + param_2) = uVar2 & 0xfdffffff;
      FUN_02073114(param_1 + 0x4a90U + param_2,4,param_2,uVar2 & 0xfdffffff,param_4);
      return;
    }
    *(uint *)(iVar1 + param_2) = uVar2 | 0x2000000;
    FUN_02073114(param_1 + 0x4a90U + param_2,4,param_2,uVar2 | 0x2000000,param_4);
  }
  return;
}

