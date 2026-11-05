
void FUN_02150558(undefined4 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      *param_1 = CONCAT13(*(undefined1 *)(param_2 + uVar1 + 3),
                          CONCAT12(*(undefined1 *)(param_2 + uVar1 + 2),
                                   CONCAT11(*(undefined1 *)(param_2 + uVar1 + 1),
                                            *(undefined1 *)(param_2 + uVar1))));
      param_1 = param_1 + 1;
      uVar1 = uVar1 + 4;
    } while (uVar1 < param_3);
  }
  return;
}

