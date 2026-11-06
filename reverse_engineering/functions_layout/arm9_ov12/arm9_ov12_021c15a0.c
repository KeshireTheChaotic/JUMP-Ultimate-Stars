
undefined4 FUN_021c15a0(byte *param_1,byte *param_2)

{
  undefined4 uVar1;
  
  *param_2 = *param_1;
  if (*param_1 < 7) {
    uVar1 = (*(code *)((int)&switchD_021c15ba::switchdataD_021c15bc +
                      (int)(short)(&switchD_021c15ba::switchdataD_021c15bc)[*param_1]))
                      (param_1,(code *)((int)&switchD_021c15ba::switchdataD_021c15bc +
                                       (int)(short)(&switchD_021c15ba::switchdataD_021c15bc)
                                                   [*param_1]),param_2 + 1);
    return uVar1;
  }
  return 0;
}

