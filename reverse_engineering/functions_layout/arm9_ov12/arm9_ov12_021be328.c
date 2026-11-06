
void FUN_021be328(int param_1,uint param_2)

{
  byte local_48 [52];
  
  if ((param_2 != 0) && (param_2 < 0x10)) {
    FUN_021c14dc(param_1 + 10,local_48,param_2);
    if (local_48[0] < 0xc) {
      (*(code *)((int)&switchD_021be36e::switchdataD_021be370 +
                (int)(short)(&switchD_021be36e::switchdataD_021be370)[local_48[0]]))();
      return;
    }
  }
  return;
}

