
undefined4 FUN_021b6244(int *param_1)

{
  if ((param_1[0x24] & 0x10U) == 0x10) {
    if ((*(char *)((int)param_1 + 0xae) == '\0') &&
       (FUN_021b71c0(), *(char *)((int)param_1 + 0xaf) != '\0')) {
      (**(code **)(*param_1 + 0x148))(param_1,4);
      return 1;
    }
  }
  else if ((param_1[0x24] & 0x20U) != 0x20) {
    (**(code **)(*param_1 + 0x148))(param_1,4);
    return 1;
  }
  return 0;
}

