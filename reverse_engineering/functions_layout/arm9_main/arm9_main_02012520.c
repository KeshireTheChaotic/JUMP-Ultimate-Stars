
void FUN_02012520(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x68))();
  if (iVar1 == 1) {
    *(char *)param_3 = (char)((int)(*param_4 + ((uint)(*param_4 >> 0xb) >> 0x14)) >> 0xc);
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x14))(param_1,param_2);
  if (iVar2 == 0xe) {
    *(short *)param_3 = (short)((int)(*param_4 + ((uint)(*param_4 >> 0xc) >> 0x13)) >> 0xd);
    return;
  }
  if (iVar1 == 2) {
    *(short *)param_3 = (short)((int)(*param_4 + ((uint)(*param_4 >> 0xb) >> 0x14)) >> 0xc);
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x14))(param_1,param_2);
  if (iVar2 == 4) {
    *param_3 = *param_4;
    return;
  }
  if (iVar1 == 4) {
    *param_3 = (int)(*param_4 + ((uint)(*param_4 >> 0xb) >> 0x14)) >> 0xc;
  }
  return;
}

