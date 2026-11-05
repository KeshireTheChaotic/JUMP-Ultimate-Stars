
void FUN_02088064(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  if (DAT_0214be20 != 0) {
    piVar1 = *(int **)(param_1 + 4);
    if (*(char *)(DAT_0214be20 + 10) == '\0') {
      (**(code **)(*piVar1 + 0xd8))(piVar1,0,*(code **)(*piVar1 + 0xd8),param_4,param_4);
    }
    else {
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    }
    FUN_020881f8();
  }
  return;
}

