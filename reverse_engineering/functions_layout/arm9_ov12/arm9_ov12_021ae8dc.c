
void FUN_021ae8dc(int *param_1,uint param_2,int param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (((param_3 == -0x7ffffffe) && ((param_1[0x24] & 1U) == 1)) &&
     (iVar2 = param_1[0x52], iVar2 != 0)) {
    puVar3 = param_4;
    if ((param_2 & 2) != 0) {
      iVar1 = (**(code **)(*param_1 + 0x194))();
      if (iVar1 < iVar2 + -1) {
        FUN_021b7714(param_1,param_2);
        iVar2 = (**(code **)(*param_1 + 0x194))();
        (**(code **)(*param_1 + 0x198))(param_1,iVar2 + 1);
        *param_4 = 1;
      }
      else if ((char)param_1[0x50] != '\0') {
        FUN_021b7714(param_1,param_2);
        (**(code **)(*param_1 + 0x198))(param_1,0);
        *param_4 = 1;
      }
    }
    if ((param_2 & 1) != 0) {
      iVar2 = (**(code **)(*param_1 + 0x194))();
      if (iVar2 < 1) {
        if ((char)param_1[0x50] != '\0') {
          FUN_021b7714(param_1,param_2);
          (**(code **)(*param_1 + 0x198))(param_1,param_1[0x52] + -1);
          *param_4 = 1;
        }
      }
      else {
        FUN_021b7714(param_1,param_2);
        iVar2 = (**(code **)(*param_1 + 0x194))();
        (**(code **)(*param_1 + 0x198))(param_1,iVar2 + -1);
        *param_4 = 1;
      }
    }
    if (*(char *)((int)param_1 + 0x141) != '\0') {
      if (((param_2 & 4) != 0) &&
         (iVar2 = (**(code **)(*param_1 + 0x1a4))
                            (param_1,1,0x1a4,*(code **)(*param_1 + 0x1a4),puVar3), iVar2 != 0)) {
        FUN_021b7714(param_1,param_2);
      }
      if (((param_2 & 8) != 0) &&
         (iVar2 = (**(code **)(*param_1 + 0x1a4))(param_1,0xffffffff), iVar2 != 0)) {
        FUN_021b7714(param_1,param_2);
      }
    }
  }
  return;
}

