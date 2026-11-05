
bool FUN_021b2794(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_021b3334(param_1[0x11],param_1[7],param_2,param_3,param_4);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0xd4))(param_1,*(undefined2 *)((int)param_1 + 0x2a));
  }
  if (*(ushort *)(param_1 + 0xc) < param_3) {
    *(short *)(param_1 + 0xc) = (short)param_3;
  }
  if (param_3 * 0x1000 == param_1[0xe]) {
    *(byte *)((int)param_1 + 0x32) = *(byte *)((int)param_1 + 0x32) | 8;
  }
  return iVar1 != 0;
}

