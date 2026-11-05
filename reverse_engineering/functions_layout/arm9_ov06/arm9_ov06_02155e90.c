
void FUN_02155e90(int param_1,int param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x70) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x70))
                      (param_1,*(undefined4 *)(param_1 + 0x74),0x42,(int)*(char *)(param_2 + 4),0,0,
                       0,0,0);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(param_1 + 0x70))
                        (param_1,*(undefined4 *)(param_1 + 0x74),0x42,(int)*(char *)(param_2 + 2),0,
                         0,0,0,0);
      if (iVar1 != 0) {
        FUN_021565a4(param_1,0,*(undefined1 *)(param_2 + 3));
      }
    }
    else {
      FUN_021565a4(param_1,0,*(undefined1 *)(param_2 + 5));
    }
  }
  return;
}

