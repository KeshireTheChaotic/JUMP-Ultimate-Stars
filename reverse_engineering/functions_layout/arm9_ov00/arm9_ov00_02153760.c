
void FUN_02153760(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = 0;
    if (param_1 != 0) {
      do {
        if (*(int *)(param_2 + uVar1 * 4) != 0) {
          FUN_021529e0();
        }
        if (*(int *)(param_3 + uVar1 * 4) != 0) {
          FUN_021529e0();
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_1);
    }
    FUN_021529e0(param_2);
    FUN_021529e0(param_3);
  }
  if (param_4 != 0) {
    FUN_021529e0(param_4);
  }
  if (param_5 != 0) {
    FUN_021529e0();
  }
  if (param_6 == 0) {
    return;
  }
  FUN_021529e0();
  return;
}

