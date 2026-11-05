
void FUN_021b619c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0xa9) == '\0') {
    piVar1 = (int *)param_1[0x36];
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x134))
                        (piVar1,param_1,0x134,*(code **)(*piVar1 + 0x134),param_4);
      FUN_020288a4(param_1[0x36]);
      param_1[0x36] = iVar2;
      (**(code **)(*(int *)param_1[0x36] + 0xd4))((int *)param_1[0x36],param_1);
      (**(code **)(*(int *)param_1[0x36] + 0x130))();
      (**(code **)(*(int *)param_1[0x36] + 0xd8))((int *)param_1[0x36],1);
    }
    (**(code **)(*param_1 + 0x178))();
    *(undefined1 *)((int)param_1 + 0xa9) = 1;
  }
  return;
}

