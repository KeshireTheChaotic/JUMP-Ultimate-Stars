
void FUN_02153b6c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == 0) {
    piVar1 = *(int **)(*param_1 + 4);
    pcVar2 = *(code **)(*piVar1 + 0xd8);
    (*pcVar2)(piVar1,0,pcVar2,param_4,param_4);
    return;
  }
  piVar1 = *(int **)(*param_1 + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  return;
}

