
void FUN_0217f380(int param_1,int param_2,char *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*param_3 == '\0') {
    param_3 = param_3 + 5;
    param_4 = param_4 + -5;
    if ((*(byte *)(param_2 + 0x14) & 4) == 0) {
      FUN_0217f7cc(param_2,param_3,param_4);
      *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) | 0x43;
    }
    else {
      if (0 < *(int *)(param_1 + 0x40)) {
        do {
          iVar1 = FUN_021816dc(param_3,param_4);
          if (iVar1 < 0) break;
          FUN_0217fb10(param_2,(&PTR_DAT_021a6aa0)[*(byte *)(param_1 + iVar2 + 0x2c)],param_3);
          param_3 = param_3 + iVar1;
          param_4 = param_4 - iVar1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x40));
      }
      *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) | 0x41;
    }
    *(byte *)(param_2 + 0x14) = *(byte *)(param_2 + 0x14) & 0xf3;
    iVar2 = FUN_02001ed8();
    *(int *)(param_2 + 0x1c) = iVar2 - *(int *)(param_2 + 0x1c);
    FUN_0217f638(param_1 + 8,param_2);
    (**(code **)(param_1 + 0x44))(param_1,0,param_2,*(undefined4 *)(param_1 + 0x48));
  }
  return;
}

