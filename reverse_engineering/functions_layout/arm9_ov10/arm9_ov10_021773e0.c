
void FUN_021773e0(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  *(undefined4 *)(DAT_021a759c + 0x30) = 0;
  if (*param_2 == 0) {
    if (*(int *)(DAT_021a759c + 4) == 2) {
      if (*(int *)(*(int *)(DAT_021a759c + 0x1c) + 0x1c) != param_2[1]) {
        FUN_02177528(6,0xffff15a0);
        return;
      }
      *(undefined4 *)(DAT_021a759c + 4) = 5;
      FUN_02177ea4(1,&DAT_021a4ae4);
      iVar1 = FUN_02177480();
      if (iVar1 == 0) {
        (**(code **)(DAT_021a759c + 0x14))(0,param_2[1],*(undefined4 *)(DAT_021a759c + 0x18));
        iVar1 = FUN_021765b8();
        if (iVar1 == 0) {
          FUN_0217e1b0(param_2[1]);
          return;
        }
      }
    }
    else if (*(int *)(DAT_021a759c + 4) == 3) {
      FUN_02182188(param_1,param_2[1],0,0,0x2176fad,0);
      FUN_02177480();
      return;
    }
  }
  else {
    FUN_02177480(*param_2);
  }
  return;
}

