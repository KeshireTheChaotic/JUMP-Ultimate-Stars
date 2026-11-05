
void FUN_02154108(int param_1,int param_2,char param_3)

{
  int iVar1;
  
  FUN_02154418();
  if (param_2 == 0) {
    *(char *)(param_1 + 0x542) = *(char *)(param_1 + 0x542) + param_3;
    if (*(char *)(param_1 + 0x542) < 0) {
      *(undefined1 *)(param_1 + 0x542) = 0;
    }
    else {
      iVar1 = (*(char *)(param_1 + 0x541) + -1) * 0x1000000;
      if (iVar1 >> 0x18 < (int)*(char *)(param_1 + 0x542)) {
        *(char *)(param_1 + 0x542) = (char)((uint)iVar1 >> 0x18);
      }
      else {
        FUN_0207342c(0x78,3);
      }
    }
  }
  else {
    *(char *)(param_1 + 0x542) = param_3;
    FUN_0207342c(0x78,3);
  }
  *(undefined1 *)(param_1 + 0x46d) = DAT_0216d5a0;
  FUN_021541c0(param_1);
  FUN_02153b7c(param_1,3,0);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0xfc) + 4),1);
  return;
}

