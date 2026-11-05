
void FUN_0215feac(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 4);
  if (uVar1 < 0x121) {
    *(ushort *)(param_1 + 4) = uVar1 + 1;
    return;
  }
  FUN_020781e4(*param_1,*(undefined2 *)((int)param_1 + param_2 * 2 + 0x36),uVar1,param_4,param_4);
  return;
}

