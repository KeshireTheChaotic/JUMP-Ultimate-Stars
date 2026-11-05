
void FUN_0217fe5c(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  if (param_2 == 0) {
    (**(code **)(param_4 + 0x630))(param_4,1,param_3,*(undefined4 *)(param_4 + 0x634));
  }
  else if (param_2 == 1) {
    (**(code **)(param_4 + 0x630))(param_4,2,param_3,*(undefined4 *)(param_4 + 0x634));
  }
  else if (param_2 == 2) {
    (**(code **)(param_4 + 0x630))(param_4,4,param_3,*(undefined4 *)(param_4 + 0x634));
  }
  if (((param_3 != (int *)0x0) && (*param_3 == *(int *)(param_4 + 0x628))) &&
     ((short)param_3[1] == *(short *)(param_4 + 0x62c))) {
    *(int *)(param_4 + 0x628) = 0;
  }
  return;
}

