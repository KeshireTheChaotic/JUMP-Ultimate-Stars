
void FUN_021b53e0(int *param_1)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="ALWidgetBase.cpp" */
  if (param_1[0x28] != 0) {
    FUN_020288a4();
  }
  FUN_02024958(param_1);
  if ((param_1[0x27] != 0) &&
     ((**(code **)(*param_1 + 0x14c))(param_1,4), *(int *)(param_1[0xd] + 0x224) == 0)) {
    (**(code **)(*(int *)param_1[0x27] + 0x188))((int *)param_1[0x27],param_1);
  }
  if (param_1[0x27] != 0) {
    DAT_021d5150 = DAT_021d5150 + -1;
    if ((DAT_021d5150 == 0) && (DAT_021d5148 != 0)) {
      FUN_02028868();
      DAT_021d5148 = 0;
      DAT_021d5158 = 0;
    }
  }
  if (param_1[0x43] != 0) {
    FUN_02027560();
  }
  if (param_1[0x44] != 0) {
    FUN_02027560();
  }
  if ((param_1[0x36] != 0) && (-1 < (int)((uint)*(byte *)(param_1[0x36] + 0x29) << 0x18))) {
    if (*(char *)((int)param_1 + 0xa9) == '\0') {
      FUN_020288a4();
    }
    else {
      FUN_02028868();
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x16c))();
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,iVar1);
    FUN_02028868();
  }
  return;
}

