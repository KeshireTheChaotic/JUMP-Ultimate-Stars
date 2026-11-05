
void FUN_021b6fe4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if (((*(char *)((int)param_1 + 0xa5) != '\0') && ((param_4 & 0x20000) != 0)) ||
     ((*(char *)((int)param_1 + 0xa5) == '\0' && ((param_4 & 0x10000) != 0)))) {
    if (((char)param_1[0x2b] == '\0') && ((((int *)param_1[0x27])[0x24] & 1U) != 1)) {
      if ((param_1[0x24] & 1U) == 1) {
        FUN_021b7714(param_1,0x10000);
        (**(code **)(*(int *)param_1[0x27] + 0x148))((int *)param_1[0x27],1);
        return;
      }
      (**(code **)(*(int *)param_1[0x27] + 0x148))();
    }
    if ((*(char *)((int)param_1 + 0xaa) != '\0') ||
       (((param_1[0x24] & 1U) == 1 && ((param_1[0x24] & 2U) == 2)))) {
      FUN_021b7714(param_1,0x20000);
      if (*(char *)((int)param_1 + 0xab) != '\0') {
        (**(code **)(*param_1 + 0x148))(param_1,1);
        if ((((int *)param_1[0x27])[0x24] & 1U) != 1) {
          (**(code **)(*(int *)param_1[0x27] + 0x148))();
        }
      }
      (**(code **)(*param_1 + 0x15c))();
      return;
    }
    FUN_021b7714(param_1,0x10000);
    (**(code **)(*param_1 + 0x148))(param_1,1);
    if ((((int *)param_1[0x27])[0x24] & 1U) != 1) {
      (**(code **)(*(int *)param_1[0x27] + 0x148))();
    }
  }
  return;
}

