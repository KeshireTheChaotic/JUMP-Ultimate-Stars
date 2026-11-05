
void FUN_02153ea0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_2 < param_3) {
      if (param_2 == 0) {
        *(undefined1 *)(param_1 + iVar1 + 0x46e) = 0;
      }
      else {
        *(char *)(param_1 + iVar1 + 0x46e) = (char)param_2;
        param_2 = 0;
      }
    }
    else {
      *(char *)(param_1 + iVar1 + 0x46e) = (char)param_3;
      param_2 = (param_2 - param_3) * 0x1000000 >> 0x18;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

