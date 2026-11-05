
void FUN_021b6470(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (**(code **)*param_2)();
  iVar2 = (**(code **)(*param_2 + 8))();
  if (iVar2 == -0x7ffffffe) {
    if ((param_1[0x27] != 0) && (iVar2 = FUN_021b712c(param_1), iVar2 == 0)) {
      for (uVar5 = 0; uVar5 < (uint)param_1[0x31]; uVar5 = uVar5 + 1) {
        uVar4 = *(uint *)(param_1[0x30] + uVar5 * 4);
        if ((uVar4 == (uVar4 & uVar1)) && ((param_1[0x24] & 8U) != 8)) {
          if ((*(char *)((int)param_1 + 0xaa) == '\0') && ((param_1[0x24] & 1U) != 1)) {
            (**(code **)(*param_1 + 0x148))();
            piVar3 = (int *)param_1[0x27];
            if (((piVar3[0x24] & 8U) != 8) && ((piVar3[0x24] & 1U) != 1)) {
              (**(code **)(*piVar3 + 0x148))(piVar3,1);
            }
          }
          else {
            if (*(char *)((int)param_1 + 0xab) != '\0') {
              (**(code **)(*param_1 + 0x148))(param_1,1,0x148,*(code **)(*param_1 + 0x148),param_4);
              piVar3 = (int *)param_1[0x27];
              if (((piVar3[0x24] & 8U) != 8) && ((piVar3[0x24] & 1U) != 1)) {
                (**(code **)(*piVar3 + 0x148))(piVar3,1);
              }
            }
            (**(code **)(*param_1 + 0x15c))();
          }
        }
      }
      return;
    }
  }
  else if (iVar2 == -0x7fff0000) {
    if ((param_1[0x24] & 4U) != 4) {
      (**(code **)(*param_1 + 0x148))(param_1,0x10);
      return;
    }
  }
  else {
    if (iVar2 == -0x7ffeffff) {
      (**(code **)(*param_1 + 0x148))(param_1,0x20);
      return;
    }
    FUN_02027b50(param_1,param_2);
  }
  return;
}

