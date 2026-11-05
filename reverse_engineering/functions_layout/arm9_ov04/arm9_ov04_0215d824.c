
void FUN_0215d824(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffeefff) {
    return;
  }
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 4) == 0) {
    return;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,0);
  iVar1 = FUN_020876f8();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar3 + 0xd0) = 1;
  }
  FUN_02087214(0x3f3f,&DAT_021605a0,2);
  return;
}

