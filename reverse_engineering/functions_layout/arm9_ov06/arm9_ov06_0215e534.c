
bool FUN_0215e534(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0215e5a8(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar1 != 0) {
    FUN_02083950(*(int *)(param_1 + 0x1a8),
                 (*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x40) & 4) != 0);
    *(undefined2 *)(param_1 + 0xce) = 10;
    FUN_02157494(param_1,0x10,FUN_0215e5c0,FUN_0215e828,0x10,param_4);
  }
  return iVar1 != 0;
}

