
void FUN_021b63b0(int param_1)

{
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  if ((*(char *)(param_1 + 0xa6) != '\0') || (*(char *)(param_1 + 0xa7) != '\0')) {
    if (*(char *)(param_1 + 0xa6) != '\0') {
      if (*(int *)(param_1 + 0xd8) == 0) {
        local_c = *(undefined4 *)(param_1 + 0xd0);
        FUN_021acadc(param_1,&local_c);
      }
      else {
        local_10 = *(int *)(param_1 + 0xd0) + *(short *)(*(int *)(param_1 + 0xd8) + 0x94) * 0x1000;
        FUN_021acadc(param_1,&local_10);
      }
      *(undefined1 *)(param_1 + 0xa6) = 0;
    }
    if (*(char *)(param_1 + 0xa7) != '\0') {
      if (*(int *)(param_1 + 0xd8) == 0) {
        local_14 = *(undefined4 *)(param_1 + 0xd4);
        FUN_021b6454(param_1,&local_14);
      }
      else {
        local_18 = *(int *)(param_1 + 0xd4) + *(short *)(*(int *)(param_1 + 0xd8) + 0x96) * 0x1000;
        FUN_021b6454(param_1,&local_18);
      }
      *(undefined1 *)(param_1 + 0xa7) = 0;
    }
  }
  return;
}

